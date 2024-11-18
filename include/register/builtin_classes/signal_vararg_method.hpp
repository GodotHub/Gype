
#ifndef __Signal_vararg_method__
#define __Signal_vararg_method__

#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/binder_common.hpp>
#include <godot_cpp/variant/builtin_types.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <vector>

using namespace godot;

static void js_emit_internal(void *opaque, const Variant **p_args, GDExtensionInt p_arg_count) {
	static StringName _gde_name("emit");
	static GDExtensionPtrBuiltInMethod method_emit = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_SIGNAL, _gde_name._native_ptr(), 3286317445);
	method_emit(opaque, reinterpret_cast<GDExtensionConstTypePtr *>(p_args), nullptr, p_arg_count);
}
void js_emit(void *opaque, std::vector<Variant> p_args) {
	std::vector<Variant> variant_args;
	std::vector<Variant *> variant_args_ptr;
	for (int i = 0; i < p_args.size(); i++) {
		variant_args.push_back(p_args[i]);
	}	
	for (int i = 0; i < variant_args.size(); i++) {
		variant_args_ptr.push_back(&variant_args[i]);
	}
	js_emit_internal(opaque, const_cast<const Variant **>(variant_args_ptr.data()), variant_args_ptr.size());
}

#endif // __Signal_vararg_method__