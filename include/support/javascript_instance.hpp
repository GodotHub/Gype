#ifndef __JAVASCRIPT_INSTANCE_H__
#define __JAVASCRIPT_INSTANCE_H__

#include "quickjs/env.h"
#include "support/instance_binding.hpp"
#include <gdextension_interface.h>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant.hpp>

namespace godot {

class Variant;
class JavaScript;
class JavaScriptInstance;

class JavaScriptInstance {
	Object *binding;
	Object *p_godot_object;
	JavaScript *script;

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
	GDExtensionObjectPtr get_owner_func();
	GDExtensionObjectPtr get_script();
	GDExtensionScriptLanguagePtr get_language();

	Object *get_godot_obj() { return p_godot_object; }

	JavaScriptInstance(Object *p_godot_object, JavaScript *script);
	~JavaScriptInstance();
};
} // namespace godot

#endif // __JAVASCRIPT_INSTANCE_H__