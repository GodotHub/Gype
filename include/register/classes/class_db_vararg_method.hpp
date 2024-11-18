
#ifndef __ClassDB_vararg_method__
#define __ClassDB_vararg_method__
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/class_db_singleton.hpp>
using namespace godot;
static Variant js_class_call_static_method_internal(GodotObject *p_owner, const Variant **p_args, GDExtensionInt p_arg_count) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(StringName("ClassDBSingleton")._native_ptr(), StringName("class_call_static_method")._native_ptr(), 3344196419);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Variant());
	GDExtensionCallError error;
	Variant ret;
	internal::gdextension_interface_object_method_bind_call(_gde_method_bind, p_owner, reinterpret_cast<GDExtensionConstVariantPtr *>(p_args), p_arg_count, &ret, &error);
	return VariantCaster<Variant>::cast(ret);
}
Variant js_class_call_static_method(GodotObject *owner, const StringName& p_class,const StringName& p_method,std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	variant_args.push_back(p_class);
	variant_args.push_back(p_method);
		for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	js_class_call_static_method_internal(owner, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}

#endif // __ClassDB_vararg_method__