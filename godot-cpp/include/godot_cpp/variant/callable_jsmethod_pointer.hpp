#ifndef __CALLABLE_JSMETHOD_POINTER_H__
#define __CALLABLE_JSMETHOD_POINTER_H__

#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/callable_method_pointer.hpp>
#include <vector>
#include <godot_cpp/classes/node.hpp>

namespace godot {

class CallableJSMethodPointer : public CallableCustomMethodPointerBase {
	JSValue instance;
	JSValue function;

public:
	virtual ObjectID get_object() const override {
		Object *obj = reinterpret_cast<Object *>(JS_GetOpaque(instance, JS_GetClassID(instance)));
		return ObjectID(obj->get_instance_id());
	}
	virtual int get_argument_count(bool &r_is_valid) const override;
	virtual void call(const Variant **p_arguments, int p_argcount, Variant &r_return_value, GDExtensionCallError &r_call_error) const override;

	CallableJSMethodPointer(JSValue instance, JSValue function);
};

Callable *create_custom_javascript_callable(JSValue instance, JSValue function) {
	CallableJSMethodPointer *ccmp = memnew(CallableJSMethodPointer(instance, function));
	return ::godot::internal::create_callable_ptr_from_ccmp(ccmp);
}

#endif // __CALLABLE_JSMETHOD_POINTER_H__

inline int CallableJSMethodPointer::get_argument_count(bool &r_is_valid) const {
	JSValue js_count = JS_GetPropertyStr(ctx, instance, "length");
	int32_t count;
	r_is_valid = !JS_ToInt32(ctx, &count, js_count);
	return count;
}

inline void CallableJSMethodPointer::call(const Variant **p_arguments, int p_argcount, Variant &r_return_value, GDExtensionCallError &r_call_error) const {
	std::vector<JSValue> args;
	for (int i = 0; i < p_argcount; i++) {
		args.push_back((*p_arguments)[i]);
	}
	JSValue ret = JS_Call(ctx, function, instance, p_argcount, args.data());
	r_return_value = Variant(ret);
	r_call_error.error = GDExtensionCallErrorType::GDEXTENSION_CALL_OK;
}

inline CallableJSMethodPointer::CallableJSMethodPointer(JSValue instance, JSValue function) {
	this->instance = instance;
	this->function = function;
}
}
