
#ifndef __Callable_vararg_method__
#define __Callable_vararg_method__

#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/binder_common.hpp>
#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <vector>

using namespace godot;

static Variant js_call_internal(void *opaque, const Variant **p_args, GDExtensionInt p_arg_count) {
	static StringName _gde_name("call");
	static GDExtensionPtrBuiltInMethod method_call = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_CALLABLE, _gde_name._native_ptr(), 3643564216);
	Variant ret;
	method_call(opaque, reinterpret_cast<GDExtensionConstTypePtr *>(p_args), &ret, p_arg_count);
	return ret;
}
static void js_call_deferred_internal(void *opaque, const Variant **p_args, GDExtensionInt p_arg_count) {
	static StringName _gde_name("call_deferred");
	static GDExtensionPtrBuiltInMethod method_call_deferred = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_CALLABLE, _gde_name._native_ptr(), 3286317445);
	method_call_deferred(opaque, reinterpret_cast<GDExtensionConstTypePtr *>(p_args), nullptr, p_arg_count);
}
static void js_rpc_internal(void *opaque, const Variant **p_args, GDExtensionInt p_arg_count) {
	static StringName _gde_name("rpc");
	static GDExtensionPtrBuiltInMethod method_rpc = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_CALLABLE, _gde_name._native_ptr(), 3286317445);
	method_rpc(opaque, reinterpret_cast<GDExtensionConstTypePtr *>(p_args), nullptr, p_arg_count);
}
static void js_rpc_id_internal(void *opaque, const Variant **p_args, GDExtensionInt p_arg_count) {
	static StringName _gde_name("rpc_id");
	static GDExtensionPtrBuiltInMethod method_rpc_id = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_CALLABLE, _gde_name._native_ptr(), 2270047679);
	method_rpc_id(opaque, reinterpret_cast<GDExtensionConstTypePtr *>(p_args), nullptr, p_arg_count);
}
static Callable js_bind_internal(void *opaque, const Variant **p_args, GDExtensionInt p_arg_count) {
	static StringName _gde_name("bind");
	static GDExtensionPtrBuiltInMethod method_bind = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_CALLABLE, _gde_name._native_ptr(), 3224143119);
	Callable ret;
	method_bind(opaque, reinterpret_cast<GDExtensionConstTypePtr *>(p_args), &ret, p_arg_count);
	return ret;
}
Variant js_call(void *opaque, std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	return js_call_internal(opaque, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}
void js_call_deferred(void *opaque, std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	js_call_deferred_internal(opaque, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}
void js_rpc(void *opaque, std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	js_rpc_internal(opaque, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}
void js_rpc_id(void *opaque, int p_peer_id,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_peer_id);
	for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	js_rpc_id_internal(opaque, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}
Callable js_bind(void *opaque, std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	return js_bind_internal(opaque, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}

#endif // __Callable_vararg_method__