#include "quickjs/wrapper/callable_wrapper.h"
#include "quickjs/quickjs.h"
#include "quickjs/wrapper/js_object.h"
#include "quickjs/wrapper/object_wrapper.h"
#include "utils/quickjs_helper.h"
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/callable_custom.hpp>
#include <godot_cpp/variant/callable_method_pointer.hpp>


using namespace godot;

class CustomJSMethodPointer;

struct CallableWrapper {
	Callable opaque;
};

void *gd_Callable_get_opaque(CallableWrapper *wrapper) {
	return &wrapper->opaque;
}

CallableWrapper *gd_new_empty_Callable_wrapper() {
	CallableWrapper *wrapper = memnew(CallableWrapper);
	memnew_placement(&(wrapper->opaque), Callable());
	return wrapper;
}

class CustomJSMethodPointer : public CallableCustomMethodPointerBase {
	struct Data {
		JSContext *ctx;
		JSValue instance;
		JSValue method;
	} data;
	static_assert(sizeof(Data) % 4 == 0);

public:
	// void set_instance(JSValue instance) {
	// 	this->data.instance = instance;
	// }

	virtual ObjectID get_object() const override {
		VariantWrapper *wrapper = static_cast<VariantWrapper *>(gd_get_vwrapper(ctx, data.instance));
		Object *obj = *static_cast<Variant *>(gd_Variant_get_opaque(wrapper));
		return ObjectID(obj->get_instance_id());
	}

	virtual int get_argument_count(bool &r_is_valid) const override {
		if ((r_is_valid = !JS_IsFunction(data.ctx, data.method)))
			return 0;
		JSValue js_length = JS_GetPropertyStr(data.ctx, data.method, "length");
		int len;
		if ((r_is_valid = JS_ToInt32(data.ctx, &len, js_length)))
			return 0;
		return len;
	}

	virtual void call(const Variant **p_arguments, int p_argcount, Variant &r_return_value, GDExtensionCallError &r_call_error) const override {
		JSContext *ctx = data.ctx;
		std::vector<JSValue> args;
		for (int i = 0; i < p_argcount; i++) {
			args.push_back(to_jsvalue(ctx, *p_arguments[i]));
		}
		JSValue ret = JS_Call(ctx, data.method, data.instance, p_argcount, args.data());
		if (!is_exception(ret)) {
			r_call_error.argument = p_argcount;
		} else {
			r_call_error.error = GDExtensionCallErrorType::GDEXTENSION_CALL_ERROR_INVALID_METHOD;
		}
	}

	JSValue to_jsvalue(JSContext *ctx, const Variant &gd_arg) const {
		JSValue js_arg;
		switch (gd_arg.get_type()) {
			case Variant::Type::INT: {
				js_arg = JS_NewInt64(ctx, gd_arg);
			} break;
			case Variant::Type::FLOAT: {
				js_arg = JS_NewFloat64(ctx, gd_arg);
			} break;
			case Variant::Type::STRING_NAME:
			case Variant::Type::STRING: {
				const char *str = std::string(gd_arg.operator godot::String().utf8().get_data()).c_str();
				js_arg = JS_NewString(ctx, str);
				break;
			}
			case Variant::Type::BOOL: {
				js_arg = JS_NewBool(ctx, gd_arg);
			} break;
			default: {
				js_arg = JS_UNDEFINED;
			} break;
		}
		return js_arg;
	}

	CustomJSMethodPointer(JSContext *ctx, JSValue instance, JSValue p_method) {
		memset(&data, 0, sizeof(Data));
		data.ctx = ctx;
		data.method = p_method;
		data.instance = instance;
		_setup((uint32_t *)&data, sizeof(Data));
	}
};

CallableWrapper *gd_new_Callable_wrapper(JSContext *ctx, JSValue this_obj, JSValue method) {
	CustomJSMethodPointer *method_pointer = memnew(CustomJSMethodPointer(ctx, this_obj, method));
	return memnew(CallableWrapper{ internal::create_callable_from_ccmp(method_pointer) });
}