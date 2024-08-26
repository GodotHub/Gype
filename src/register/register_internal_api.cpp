#include "register/register_internal_api.h"
#include "godot_cpp/godot.hpp"
#include "quickjs/env.h"
#include "quickjs/js_pointer.h"
#include <stdarg.h>
#include <stdio.h>

using namespace JSGodot;

void register_internal_api() {
	auto &_module = context.addModule("__internal__");
	_module.class_<GDExtensionGodotVersion>("GodotVersion")
			.fun<&GDExtensionGodotVersion::major>("major")
			.fun<&GDExtensionGodotVersion::minor>("minor")
			.fun<&GDExtensionGodotVersion::patch>("patch")
			.fun<&GDExtensionGodotVersion::string>("string");
	_module.class_<JSPointer>("JSPointer")
			.constructor()
			.property<&JSPointer::get_pointer, &JSPointer::set_pointer>("pointer");
	_module.function("get_godot_version", [](GDExtensionGodotVersion *r_godot_version) {
			   internal::gdextension_interface_get_godot_version(r_godot_version);
		   })
			.function("print_error", [](const char *p_description, const char *p_function, const char *p_file, int32_t p_line, GDExtensionBool p_editor_notify) {
				internal::gdextension_interface_print_error(p_description, p_function, p_file, p_line, p_editor_notify);
			})
			.function("variant_get_ptr_constructor", [](GDExtensionVariantType p_type, int32_t p_constructor) -> GDExtensionPtrConstructor {
				return internal::gdextension_interface_variant_get_ptr_constructor(p_type, p_constructor);
			})
			.function("variant_get_ptr_destructor", [](GDExtensionVariantType p_type) -> GDExtensionPtrDestructor {
				return internal::gdextension_interface_variant_get_ptr_destructor(p_type);
			})
			.function("string_name_new_with_latin1_chars", [](Buff r_dest, const char *p_contents, GDExtensionBool p_is_static = false) {
				internal::gdextension_interface_string_name_new_with_latin1_chars(
						reinterpret_cast<GDExtensionUninitializedStringNamePtr>(qjs::get_typed_array_buf(context.ctx, r_dest)),
						p_contents, p_is_static);
			})
			.function("string_new_with_latin1_chars", [](Buff r_dest, const char *p_contents) {
				internal::gdextension_interface_string_new_with_latin1_chars(
						reinterpret_cast<GDExtensionUninitializedStringNamePtr>(qjs::get_typed_array_buf(context.ctx, r_dest)),
						p_contents);
			})
			.function("variant_get_ptr_builtin_method", [](GDExtensionVariantType p_type, Buff p_method, GDExtensionInt p_hash) -> GDExtensionPtrBuiltInMethod {
				return internal::gdextension_interface_variant_get_ptr_builtin_method(p_type, qjs::get_typed_array_buf(context.ctx, p_method), p_hash);
			})
			.function("variant_get_ptr_utility_function", [](Buff p_function, GDExtensionInt p_hash) -> GDExtensionPtrUtilityFunction {
				return internal::gdextension_interface_variant_get_ptr_utility_function(
						reinterpret_cast<GDExtensionConstStringNamePtr>(qjs::get_typed_array_buf(context.ctx, p_function)),
						p_hash);
			})
			.function("variant_new_nil", [](Buff r_dest) {
				internal::gdextension_interface_variant_new_nil(qjs::get_typed_array_buf(context.ctx, r_dest));
			})
			.function("get_variant_from_type_constructor", [](GDExtensionVariantType p_type) -> GDExtensionVariantFromTypeConstructorFunc {
				return internal::gdextension_interface_get_variant_from_type_constructor(p_type);
			})
			.function("get_variant_to_type_constructor", [](GDExtensionVariantType p_type) -> GDExtensionTypeFromVariantConstructorFunc {
				return internal::gdextension_interface_get_variant_to_type_constructor(p_type);
			})
			.function("variant_new_copy", [](Buff r_dest, Buff p_src) {
				internal::gdextension_interface_variant_new_copy(
						reinterpret_cast<GDExtensionUninitializedVariantPtr>(qjs::get_typed_array_buf(context.ctx, r_dest)),
						reinterpret_cast<GDExtensionConstVariantPtr>(qjs::get_typed_array_buf(context.ctx, p_src)));
			})
			.function("variant_destroy", [](GDExtensionVariantPtr p_self) { internal::gdextension_interface_variant_destroy(p_self); })
			.function("classdb_get_method_bind", [](GDString p_classname, GDString p_methodname, GDExtensionInt p_hash) -> GDExtensionMethodBindPtr {
				GDExtensionConstStringNamePtr arg1 = qjs::get_typed_array_buf(context.ctx, p_classname);
				GDExtensionConstStringNamePtr arg2 = qjs::get_typed_array_buf(context.ctx, p_methodname);
				return internal::gdextension_interface_classdb_get_method_bind(arg1, arg2, p_hash);
			})
			.function("object_method_bind_ptrcall", [](Pointer p_method_bind, Pointer p_instance, GDExtensionVariantType type, qjs::rest<JSValue> args) {
				void *r_ret = qjs::malloc_variant(context.ctx, type);
				std::vector<void *> void_ptr = qjs::get_args(context.ctx, args);
				void **p_args = void_ptr.data();
				internal::gdextension_interface_object_method_bind_ptrcall(qjs::to_c_pointer(context.ctx, p_method_bind), qjs::to_c_pointer(context.ctx, p_instance), p_args, r_ret);
				JSValue ret = qjs::to_js_value(context.ctx, type, r_ret);
				return ret;
			})
			.function("classdb_construct_object", [](Buff p_classname) -> GDExtensionObjectPtr {
				return internal::gdextension_interface_classdb_construct_object(qjs::get_typed_array_buf(context.ctx, p_classname));
			});
}