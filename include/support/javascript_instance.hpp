#pragma once

#include "quickjs/env.h"
#include "support/instance_binding.hpp"
#include <gdextension_interface.h>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>

namespace godot {

class Variant;
class JavaScript;
class JavaScriptInstance;
class Object;

class JavaScriptInstance {
	Object *p_godot_object;
	JavaScript *script;
	GodotInstanceBinding binding;

private:
	JSValue get_jsvalue_from_type(Variant::Type type, const Variant &p_variant);
	JSModuleDef *get_module(const char *path);
	JSValue find_ns_property(JSModuleDef *md, const char *name);

public:
	static const char *symbol_mask;

	// GDExtensionBool set(GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_variant);
	// GDExtensionBool get(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);
	// const GDExtensionPropertyInfo *get_property_list(uint32_t *r_count);
	// GDExtensionBool property_can_revert(GDExtensionConstStringNamePtr p_name);
	// GDExtensionBool property_get_revert(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);
	// GDExtensionObjectPtr get_owner_func();
	// GDExtensionObjectPtr get_script();
	// GDExtensionScriptLanguagePtr get_language();

	Object *get_godot_obj() { return p_godot_object; }

	JavaScriptInstance(Object *p_godot_object, JavaScript *script);
};
} // namespace godot
