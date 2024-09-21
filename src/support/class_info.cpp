#include "support/class_info.hpp"
#include "quickjs/env.h"
#include <godot_cpp/variant/string_name.hpp>

using namespace godot;

GDExtensionObjectPtr _create_instance_func(void *data) {
	JSValue *js_data = (JSValue *)data;
	return js_data;
}

void _free_instance_func(void *p_class_userdata, GDExtensionClassInstancePtr p_instance) {
	JS_FreeValue(context.ctx, *(reinterpret_cast<JSValue *>(p_instance)));
}

GDExtensionBool get_func(GDExtensionClassInstancePtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
	JSValue js_instance = *reinterpret_cast<JSValue *>(p_instance);
	const StringName name = *reinterpret_cast<const StringName *>(p_name);
	std::string std_name = (name.to_ascii_buffer().get_string_from_ascii().ascii().get_data());
	JSValue _get_func = JS_GetPropertyStr(context.ctx, js_instance, "_get");

	JSValue _to_variant = JS_GetPropertyStr(context.ctx, js_instance, "_to_variant");
	JSValue arg;
	arg = qjs::to_js_u8arr(context.ctx, GDExtensionVariantType::GDEXTENSION_VARIANT_TYPE_STRING_NAME, (void *)p_name);
	JSValue name_variant = JS_Call(context.ctx, _to_variant, js_instance, 1, &arg);
	arg = qjs::to_js_u8arr(context.ctx, GDExtensionVariantType::GDEXTENSION_VARIANT_TYPE_VARIANT_MAX, r_ret);
	JSValue ret_variant = JS_Call(context.ctx, _to_variant, js_instance, 1, &arg);

	JSValue args[2] = { name_variant, ret_variant };
	JSValue ret = JS_Call(context.ctx, _get_func, js_instance, 2, args);
	if (!JS_IsUndefined(ret)) {
		return qjs::js_traits<bool>::unwrap(context.ctx, ret);
	}
	return false;
}

GDExtensionBool set_func(GDExtensionClassInstancePtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value) {
	JSValue js_instance = *reinterpret_cast<JSValue *>(p_instance);
	const StringName name = *reinterpret_cast<const StringName *>(p_name);
	std::string std_name = (name.to_ascii_buffer().get_string_from_ascii().ascii().get_data());
	JSValue _get_func = JS_GetPropertyStr(context.ctx, js_instance, "_set");

	JSValue _to_variant = JS_GetPropertyStr(context.ctx, js_instance, "_to_variant");
	JSValue arg;
	arg = qjs::to_js_u8arr(context.ctx, GDExtensionVariantType::GDEXTENSION_VARIANT_TYPE_STRING_NAME, (void *)p_name);
	JSValue name_variant = JS_Call(context.ctx, _to_variant, js_instance, 1, &arg);
	arg = qjs::to_js_u8arr(context.ctx, GDExtensionVariantType::GDEXTENSION_VARIANT_TYPE_VARIANT_MAX, (void *)p_value);
	JSValue value_variant = JS_Call(context.ctx, _to_variant, js_instance, 1, &arg);

	JSValue args[2] = { name_variant, value_variant };
	JSValue ret = JS_Call(context.ctx, _get_func, js_instance, 2, args);
	if (!JS_IsUndefined(ret)) {
		return qjs::js_traits<bool>::unwrap(context.ctx, ret);
	}
	return false;
}

void call_virtual_func(GDExtensionObjectPtr p_instance, const GDExtensionConstTypePtr *p_args, GDExtensionTypePtr p_ret) {
	JSValue js_instance = *reinterpret_cast<JSValue *>(p_instance);
	// gdextension_interface_classdb_register_extension_class_virtual_method
}