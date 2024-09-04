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
	const JavaScript *script;
	const char *symbol_mask = "GodotClass";
	GodotInstanceBinding binding;

private:
	JSValue get_jsvalue_from_type(Variant::Type type, const Variant *p_variant);

public:
	GDExtensionBool set(GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_variant);
	GDExtensionBool get(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);

	JavaScriptInstance(Object *p_godot_object, const JavaScript *script);
};
} // namespace godot
