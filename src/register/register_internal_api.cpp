#include "register/register_internal_api.h"
#include "godot_cpp/godot.hpp"
#include "quickjs/env.h"
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
			.function("string_name_new_with_latin1_chars", [](JSValue r_dest, const char *p_contents, GDExtensionBool p_is_static = false) {
				internal::gdextension_interface_string_name_new_with_latin1_chars(
						reinterpret_cast<GDExtensionUninitializedStringNamePtr>(qjs::get_typed_array_buf(context.ctx, r_dest)),
						p_contents, p_is_static);
			})
			.function("string_new_with_latin1_chars", [](JSValue r_dest, const char *p_contents) {
				internal::gdextension_interface_string_new_with_latin1_chars(
						reinterpret_cast<GDExtensionUninitializedStringNamePtr>(qjs::get_typed_array_buf(context.ctx, r_dest)),
						p_contents);
			})
			.function("variant_get_ptr_builtin_method", [](GDExtensionVariantType p_type, JSValue p_method, GDExtensionInt p_hash) -> GDExtensionPtrBuiltInMethod {
				return internal::gdextension_interface_variant_get_ptr_builtin_method(p_type, qjs::get_typed_array_buf(context.ctx, p_method), p_hash);
			})
			.function("variant_get_ptr_utility_function", [](JSValue p_function, GDExtensionInt p_hash) -> GDExtensionPtrUtilityFunction {
				return internal::gdextension_interface_variant_get_ptr_utility_function(
						reinterpret_cast<GDExtensionConstStringNamePtr>(qjs::get_typed_array_buf(context.ctx, p_function)),
						p_hash);
			})
			.function("variant_new_nil", [](JSValue r_dest) {
				internal::gdextension_interface_variant_new_nil(qjs::get_typed_array_buf(context.ctx, r_dest));
			})
			.function("get_variant_from_type_constructor", [](GDExtensionVariantType p_type) -> GDExtensionVariantFromTypeConstructorFunc {
				return internal::gdextension_interface_get_variant_from_type_constructor(p_type);
			})
			.function("get_variant_to_type_constructor", [](JSValue p_type) -> GDExtensionTypeFromVariantConstructorFunc {
				int int_type = qjs::js_traits<int>::unwrap(context.ctx, p_type);
				return internal::gdextension_interface_get_variant_to_type_constructor((GDExtensionVariantType)int_type);
			})
			.function("variant_new_copy", [](JSValue r_dest, JSValue p_src) {
				internal::gdextension_interface_variant_new_copy(
						reinterpret_cast<GDExtensionUninitializedVariantPtr>(qjs::get_typed_array_buf(context.ctx, r_dest)),
						reinterpret_cast<GDExtensionConstVariantPtr>(qjs::get_typed_array_buf(context.ctx, p_src)));
			})
			.function("variant_destroy", [](GDExtensionVariantPtr p_self) { internal::gdextension_interface_variant_destroy(p_self); });
	// .function("string_operator_index_const", [](JSValue p_self, GDExtensionInt p_index) -> const char32_t * {
	// 	return internal::gdextension_interface_string_operator_index_const(qjs::get_typed_array_buf(context.ctx, p_self), p_index);
	// });
}