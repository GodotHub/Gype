
#ifndef __Node_vararg_method__
#define __Node_vararg_method__
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/node.hpp>
using namespace godot;
static Error js_rpc_internal(GodotObject *p_owner, const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StringName("Node")._native_ptr(), StringName("rpc")._native_ptr(), 4047867050);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, p_owner, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count, &ret, &error);
	return VariantCaster<enum::Error>::cast(ret);
}
static Error js_rpc_id_internal(GodotObject *p_owner, const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StringName("Node")._native_ptr(), StringName("rpc_id")._native_ptr(), 361499283);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, p_owner, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count, &ret, &error);
	return VariantCaster<enum::Error>::cast(ret);
}
static Variant js_call_deferred_thread_group_internal(GodotObject *p_owner, const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StringName("Node")._native_ptr(), StringName("call_deferred_thread_group")._native_ptr(), 3400424181);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, p_owner, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count, &ret, &error);
	return VariantCaster<Variant>::cast(ret);
}
static Variant js_call_thread_safe_internal(GodotObject *p_owner, const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StringName("Node")._native_ptr(), StringName("call_thread_safe")._native_ptr(), 3400424181);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, p_owner, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count, &ret, &error);
	return VariantCaster<Variant>::cast(ret);
}
Error js_rpc(GodotObject *owner, const StringName& p_method,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_method);
		for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	return js_rpc_internal(owner, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}
Error js_rpc_id(GodotObject *owner, int p_peer_id,const StringName& p_method,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_peer_id);
	variant_args.push_back(p_method);
		for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	return js_rpc_id_internal(owner, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}
Variant js_call_deferred_thread_group(GodotObject *owner, const StringName& p_method,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_method);
		for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	return js_call_deferred_thread_group_internal(owner, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}
Variant js_call_thread_safe(GodotObject *owner, const StringName& p_method,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_method);
		for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	return js_call_thread_safe_internal(owner, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}

#endif // __Node_vararg_method__