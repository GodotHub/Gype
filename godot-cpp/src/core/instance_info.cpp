#include "godot_cpp/core/instance_info.hpp"
#include "quickjs/env.h"
#include <godot_cpp/core/memory.hpp>
#include <godot_cpp/godot.hpp>
#include <godot_cpp/variant_size.hpp>

GDExtensionBool TypeScriptInstanceInfo::set_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value) {
	JSValue *js_instance = (JSValue *)p_instance;
	std::string name = to_char(p_name);
	qjs::Value js_value = context.newValue(js_instance);
	GDExtensionVariantType type = variant_type(p_value);
	js_value[name] = qjs::to_js_value(context.ctx, type, (void *)p_value);
	return true;
}

GDExtensionBool TypeScriptInstanceInfo::get_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
	JSValue *js_instance = (JSValue *)p_instance;
	std::string name = to_char(p_name);
	qjs::Value js_value = context.newValue(js_instance);
	JSValue opaque = js_value[name]["opaque"].as<JSValue>();
	void *opaque_addr = qjs::to_c_value(context.ctx, opaque);
	JSGodot::internal::gdextension_interface_variant_new_copy(r_ret, opaque_addr);
	return true;
}

std::string TypeScriptInstanceInfo::to_char(GDExtensionConstStringNamePtr p_name) {
	void *name_buff = memalloc(STRING_SIZE);
	char *name = new char[1024];
	JSGodot::internal::gdextension_interface_variant_stringify(p_name, name_buff);
	JSGodot::internal::gdextension_interface_string_to_latin1_chars(name_buff, name, 1024);
	int len = strlen(name);
	char *name_cp = new char[len];
	memcpy(name_cp, name, len);
	free(name);
	return name_cp;
}

GDExtensionVariantType TypeScriptInstanceInfo::variant_type(GDExtensionConstVariantPtr p_self) {
	return JSGodot::internal::gdextension_interface_variant_get_type(p_self);
}
