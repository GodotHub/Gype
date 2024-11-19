
#ifndef __TreeItem_vararg_method__
#define __TreeItem_vararg_method__
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/classes/tree.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/object.hpp>
using namespace godot;
static void js_call_recursive_internal(GodotObject *p_owner, const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StringName("TreeItem")._native_ptr(), StringName("call_recursive")._native_ptr(), 2866548813);
	CHECK_METHOD_BIND(_gde_method_bind);
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, p_owner, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count, &ret, &error);
}
void js_call_recursive(GodotObject *owner, const StringName& p_method,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_method);
		for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
}

#endif // __TreeItem_vararg_method__