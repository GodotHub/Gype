#include "support/instance_info.hpp"
#include "core/variant_size.hpp"
#include "quickjs/env.h"
#include "support/javascript_instance.hpp"
#include <quickjs/js_pointer.h>
#include <godot_cpp/core/memory.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

GDExtensionBool set_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value) {
	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
	instance->set(p_name, p_value);
	return true;
}

GDExtensionBool get_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
	JavaScriptInstance *instance = reinterpret_cast<JavaScriptInstance *>(p_instance);
	instance->get(p_name, r_ret);
	return true;
}

std::string to_char(GDExtensionConstStringNamePtr p_name) {
	void *name_buff = memalloc(DEFINE_STRING_SIZE);
	char *name = new char[1024];
	godot::internal::gdextension_interface_variant_stringify(p_name, name_buff);
	godot::internal::gdextension_interface_string_to_latin1_chars(name_buff, name, 1024);
	int len = strlen(name);
	char *name_cp = new char[len];
	memcpy(name_cp, name, len);
	free(name);
	return name_cp;
}

GDExtensionVariantType variant_type(GDExtensionConstVariantPtr p_self) {
	return godot::internal::gdextension_interface_variant_get_type(p_self);
}
