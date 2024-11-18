
#ifndef __SceneTree_vararg_method__
#define __SceneTree_vararg_method__
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/scene_tree_timer.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
using namespace godot;
static void js_call_group_flags_internal(GodotObject *p_owner, const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StringName("SceneTree")._native_ptr(), StringName("call_group_flags")._native_ptr(), 1527739229);
	CHECK_METHOD_BIND(_gde_method_bind);
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, p_owner, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count, &ret, &error);
}
static void js_call_group_internal(GodotObject *p_owner, const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StringName("SceneTree")._native_ptr(), StringName("call_group")._native_ptr(), 1257962832);
	CHECK_METHOD_BIND(_gde_method_bind);
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, p_owner, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count, &ret, &error);
}
void js_call_group_flags(GodotObject *owner, int p_flags,const StringName& p_group,const StringName& p_method,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_flags);
	variant_args.push_back(p_group);
	variant_args.push_back(p_method);
		for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
}
void js_call_group(GodotObject *owner, const StringName& p_group,const StringName& p_method,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_group);
	variant_args.push_back(p_method);
		for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
}

#endif // __SceneTree_vararg_method__