#ifndef __CALLABLE_JSMETHOD_POINTER_H__
#define __CALLABLE_JSMETHOD_POINTER_H__

#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "utils/func_utils.hpp"
#include "utils/quickjs_helper.hpp"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/templates/hashfuncs.hpp>
#include <godot_cpp/variant/callable_method_pointer.hpp>
#include <vector>

namespace godot {

namespace internal {
Callable *create_callable_ptr_from_ccmp(CallableCustomMethodPointerBase *p_callable_method_pointer);
} //namespace internal

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

inline Callable *create_custom_javascript_callable(JSValue instance, JSValue function) {
	CallableJSMethodPointer *ccmp = memnew(CallableJSMethodPointer(instance, function));
	return ::internal::create_callable_ptr_from_ccmp(ccmp);
}

inline int CallableJSMethodPointer::get_argument_count(bool &r_is_valid) const {
	JSValue js_count = JS_GetPropertyStr(ctx, instance, "length");
	int32_t count;
	r_is_valid = !JS_ToInt32(ctx, &count, js_count);
	return count;
}

inline void CallableJSMethodPointer::call(const Variant **p_arguments, int p_argcount, Variant &r_return_value, GDExtensionCallError &r_call_error) const {
	std::vector<JSValue> args;
	for (int i = 0; i < p_argcount; i++) {
		args.push_back(VariantAdapter((*p_arguments)[i]));
	}
	JSValue ret = JS_Call(ctx, function, instance, p_argcount, args.data());
	r_return_value = VariantAdapter(ret);
	r_call_error.error = GDExtensionCallErrorType::GDEXTENSION_CALL_OK;
}

inline CallableJSMethodPointer::CallableJSMethodPointer(JSValue instance, JSValue function) {
	this->instance = instance;
	this->function = function;
}

static void custom_callable_mp_call(void *p_userdata, const GDExtensionConstVariantPtr *p_args, GDExtensionInt p_argument_count, GDExtensionVariantPtr r_return, GDExtensionCallError *r_error) {
	CallableCustomMethodPointerBase *callable_method_pointer = (CallableCustomMethodPointerBase *)p_userdata;
	callable_method_pointer->call((const Variant **)p_args, p_argument_count, *(Variant *)r_return, *r_error);
}

static GDExtensionBool custom_callable_mp_is_valid(void *p_userdata) {
	CallableCustomMethodPointerBase *callable_method_pointer = (CallableCustomMethodPointerBase *)p_userdata;
	ObjectID object = callable_method_pointer->get_object();
	return object == ObjectID() || ObjectDB::get_instance(object);
}

static void custom_callable_mp_free(void *p_userdata) {
	CallableCustomMethodPointerBase *callable_method_pointer = (CallableCustomMethodPointerBase *)p_userdata;
	memdelete(callable_method_pointer);
}

static uint32_t custom_callable_mp_hash(void *p_userdata) {
	CallableCustomMethodPointerBase *callable_method_pointer = (CallableCustomMethodPointerBase *)p_userdata;
	return callable_method_pointer->get_hash();
}

static GDExtensionBool custom_callable_mp_equal_func(void *p_a, void *p_b) {
	CallableCustomMethodPointerBase *a = (CallableCustomMethodPointerBase *)p_a;
	CallableCustomMethodPointerBase *b = (CallableCustomMethodPointerBase *)p_b;

	if (a->get_comp_size() != b->get_comp_size()) {
		return false;
	}

	return memcmp(a->get_comp_ptr(), b->get_comp_ptr(), a->get_comp_size() * 4) == 0;
}

static GDExtensionBool custom_callable_mp_less_than_func(void *p_a, void *p_b) {
	CallableCustomMethodPointerBase *a = (CallableCustomMethodPointerBase *)p_a;
	CallableCustomMethodPointerBase *b = (CallableCustomMethodPointerBase *)p_b;

	if (a->get_comp_size() != b->get_comp_size()) {
		return a->get_comp_size() < b->get_comp_size();
	}

	return memcmp(a->get_comp_ptr(), b->get_comp_ptr(), a->get_comp_size() * 4) < 0;
}

static GDExtensionInt custom_callable_mp_get_argument_count_func(void *p_userdata, GDExtensionBool *r_is_valid) {
	CallableCustomMethodPointerBase *callable_method_pointer = (CallableCustomMethodPointerBase *)p_userdata;
	bool valid = false;
	int ret = callable_method_pointer->get_argument_count(valid);
	*r_is_valid = valid;
	return ret;
}

} //namespace godot

#endif // __CALLABLE_JSMETHOD_POINTER_H__