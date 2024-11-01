#ifndef __JAVASCRIPT_INSTANCE_H__
#define __JAVASCRIPT_INSTANCE_H__

#include "quickjs/env.h"
#include <gdextension_interface.h>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>

namespace godot {

class Variant;
class TypeScript;
class TypeScriptInstance;

class TypeScriptInstance {
	Object *binding;
	Object *p_godot_object;
	TypeScript *script;

private:
	JSModuleDef *get_module(const char *path);
	JSValue find_ns_property(JSModuleDef *md, const char *name);

public:
	static const char *symbol_mask;

	GDExtensionBool set(GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_variant);
	GDExtensionBool get(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);
	// const GDExtensionPropertyInfo *get_property_list(uint32_t *r_count);
	// GDExtensionBool property_can_revert(GDExtensionConstStringNamePtr p_name);
	// GDExtensionBool property_get_revert(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);
	void call(GDExtensionConstStringNamePtr p_method, const GDExtensionConstVariantPtr *p_args, GDExtensionInt p_argument_count, GDExtensionVariantPtr r_return, GDExtensionCallError *r_error);
	void notification(int32_t p_what, GDExtensionBool p_reversed);
	void to_string(GDExtensionBool *r_is_valid, GDExtensionStringPtr r_out);
	void refcount_incremented();
	GDExtensionBool refcount_decremented();
	GDExtensionBool has_method(GDExtensionConstStringNamePtr p_name);
	GDExtensionInt get_method_argument_count(GDExtensionConstStringNamePtr p_name, GDExtensionBool *r_is_valid);
	GDExtensionObjectPtr get_owner();
	GDExtensionObjectPtr get_script();
	GDExtensionBool is_placeholder();
	GDExtensionScriptLanguagePtr get_language();

	Object *get_godot_obj() { return p_godot_object; }
	Object *get_binding() { return binding; }

	TypeScriptInstance(Object *p_godot_object, TypeScript *script, bool is_placeholder);
	~TypeScriptInstance();
};
} // namespace godot

#endif // __JAVASCRIPT_INSTANCE_H__