
#ifndef __JavaScriptBridge_vararg_method__
#define __JavaScriptBridge_vararg_method__
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/classes/java_script_bridge.hpp>
#include <godot_cpp/classes/java_script_object.hpp>
#include <godot_cpp/classes/object.hpp>
using namespace godot;
static Variant js_create_object_internal(GodotObject *p_owner, const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StringName("JavaScriptBridge")._native_ptr(), StringName("create_object")._native_ptr(), 3093893586);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, p_owner, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count, &ret, &error);
	return VariantCaster<Variant>::cast(ret);
}
Variant js_create_object(GodotObject *owner, const String& p_object,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_object);
		for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	js_create_object_internal(owner, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}

#endif // __JavaScriptBridge_vararg_method__