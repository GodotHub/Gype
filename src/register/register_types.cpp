#include "register/register_types.h"
#include "gen/utility_functions/gen.h"
#include "register/utils.h"
#include <gdextension_interface.h>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

void register_gdextension_api() {
	ADD_GDEXTENSION_FUNCTION(get_godot_version);
	ADD_GDEXTENSION_FUNCTION(mem_alloc);
	ADD_GDEXTENSION_FUNCTION(mem_realloc);
	ADD_GDEXTENSION_FUNCTION(mem_free);
	ADD_GDEXTENSION_FUNCTION(print_error_with_message);
	ADD_GDEXTENSION_FUNCTION(print_warning);
	ADD_GDEXTENSION_FUNCTION(print_warning_with_message);
	ADD_GDEXTENSION_FUNCTION(print_script_error);
	ADD_GDEXTENSION_FUNCTION(print_script_error_with_message);
	ADD_GDEXTENSION_FUNCTION(get_native_struct_size);
	ADD_GDEXTENSION_FUNCTION(variant_new_copy);
	ADD_GDEXTENSION_FUNCTION(variant_new_nil);
	ADD_GDEXTENSION_FUNCTION(variant_destroy);
	// ADD_GDEXTENSION_FUNCTION(variant_call);
	// ADD_GDEXTENSION_FUNCTION(variant_call_static);
	// ADD_GDEXTENSION_FUNCTION(variant_evaluate);
	// ADD_GDEXTENSION_FUNCTION(variant_set);
	// ADD_GDEXTENSION_FUNCTION(variant_set_named);
	// ADD_GDEXTENSION_FUNCTION(variant_set_keyed);
	// ADD_GDEXTENSION_FUNCTION(variant_set_indexed);
	// ADD_GDEXTENSION_FUNCTION(variant_get);
	// ADD_GDEXTENSION_FUNCTION(variant_get_named);
	// ADD_GDEXTENSION_FUNCTION(variant_get_keyed);
	// ADD_GDEXTENSION_FUNCTION(variant_get_indexed);
	// ADD_GDEXTENSION_FUNCTION(variant_iter_init);
	// ADD_GDEXTENSION_FUNCTION(variant_iter_next);
	// ADD_GDEXTENSION_FUNCTION(variant_iter_get);
	// ADD_GDEXTENSION_FUNCTION(variant_hash);
	// ADD_GDEXTENSION_FUNCTION(variant_recursive_hash);
	// ADD_GDEXTENSION_FUNCTION(variant_hash_compare);
	// ADD_GDEXTENSION_FUNCTION(variant_booleanize);
	// ADD_GDEXTENSION_FUNCTION(variant_duplicate);
	// ADD_GDEXTENSION_FUNCTION(variant_stringify);
	// ADD_GDEXTENSION_FUNCTION(variant_get_type);
	// ADD_GDEXTENSION_FUNCTION(variant_has_method);
	// ADD_GDEXTENSION_FUNCTION(variant_has_member);
	// ADD_GDEXTENSION_FUNCTION(variant_has_key);
	// ADD_GDEXTENSION_FUNCTION(variant_get_type_name);
	// ADD_GDEXTENSION_FUNCTION(variant_can_convert);
	// ADD_GDEXTENSION_FUNCTION(variant_can_convert_strict);
	// ADD_GDEXTENSION_FUNCTION(get_variant_from_type_constructor);
	// ADD_GDEXTENSION_FUNCTION(get_variant_to_type_constructor);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_operator_evaluator);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_builtin_method);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_constructor);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_destructor);
	// ADD_GDEXTENSION_FUNCTION(variant_construct);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_setter);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_getter);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_indexed_setter);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_indexed_getter);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_keyed_setter);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_keyed_getter);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_keyed_checker);
	// ADD_GDEXTENSION_FUNCTION(variant_get_constant_value);
	// ADD_GDEXTENSION_FUNCTION(variant_get_ptr_utility_function);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_latin1_chars);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_utf8_chars);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_utf16_chars);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_utf32_chars);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_wide_chars);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_latin1_chars_and_len);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_utf8_chars_and_len);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_utf16_chars_and_len);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_utf32_chars_and_len);
	// ADD_GDEXTENSION_FUNCTION(string_new_with_wide_chars_and_len);
	// ADD_GDEXTENSION_FUNCTION(string_to_latin1_chars);
	// ADD_GDEXTENSION_FUNCTION(string_to_utf8_chars);
	// ADD_GDEXTENSION_FUNCTION(string_to_utf16_chars);
	// ADD_GDEXTENSION_FUNCTION(string_to_utf32_chars);
	// ADD_GDEXTENSION_FUNCTION(string_to_wide_chars);
	// ADD_GDEXTENSION_FUNCTION(string_operator_index);
	// ADD_GDEXTENSION_FUNCTION(string_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(string_operator_plus_eq_string);
	// ADD_GDEXTENSION_FUNCTION(string_operator_plus_eq_char);
	// ADD_GDEXTENSION_FUNCTION(string_operator_plus_eq_cstr);
	// ADD_GDEXTENSION_FUNCTION(string_operator_plus_eq_wcstr);
	// ADD_GDEXTENSION_FUNCTION(string_operator_plus_eq_c32str);
	// ADD_GDEXTENSION_FUNCTION(string_resize);
	// ADD_GDEXTENSION_FUNCTION(string_name_new_with_latin1_chars);
	// ADD_GDEXTENSION_FUNCTION(xml_parser_open_buffer);
	// ADD_GDEXTENSION_FUNCTION(file_access_store_buffer);
	// ADD_GDEXTENSION_FUNCTION(file_access_get_buffer);
	// ADD_GDEXTENSION_FUNCTION(worker_thread_pool_add_native_group_task);
	// ADD_GDEXTENSION_FUNCTION(worker_thread_pool_add_native_task);
	// ADD_GDEXTENSION_FUNCTION(packed_byte_array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(packed_byte_array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(packed_color_array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(packed_color_array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(packed_float32_array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(packed_float32_array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(packed_float64_array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(packed_float64_array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(packed_int32_array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(packed_int32_array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(packed_int64_array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(packed_int64_array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(packed_string_array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(packed_string_array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(packed_vector2_array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(packed_vector2_array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(packed_vector3_array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(packed_vector3_array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(array_operator_index);
	// ADD_GDEXTENSION_FUNCTION(array_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(array_ref);
	// ADD_GDEXTENSION_FUNCTION(array_set_typed);
	// ADD_GDEXTENSION_FUNCTION(dictionary_operator_index);
	// ADD_GDEXTENSION_FUNCTION(dictionary_operator_index_const);
	// ADD_GDEXTENSION_FUNCTION(object_method_bind_call);
	// ADD_GDEXTENSION_FUNCTION(object_method_bind_ptrcall);
	// ADD_GDEXTENSION_FUNCTION(object_destroy);
	// ADD_GDEXTENSION_FUNCTION(global_get_singleton);
	// ADD_GDEXTENSION_FUNCTION(object_get_instance_binding);
	// ADD_GDEXTENSION_FUNCTION(object_set_instance_binding);
	// ADD_GDEXTENSION_FUNCTION(object_set_instance);
	// ADD_GDEXTENSION_FUNCTION(object_get_class_name);
	// ADD_GDEXTENSION_FUNCTION(object_cast_to);
	// ADD_GDEXTENSION_FUNCTION(object_get_instance_from_id);
	// ADD_GDEXTENSION_FUNCTION(object_get_instance_id);
	// ADD_GDEXTENSION_FUNCTION(callable_custom_create);
	// ADD_GDEXTENSION_FUNCTION(callable_custom_get_userdata);
	// ADD_GDEXTENSION_FUNCTION(ref_get_object);
	// ADD_GDEXTENSION_FUNCTION(ref_set_object);
	// ADD_GDEXTENSION_FUNCTION(script_instance_create2);
	// ADD_GDEXTENSION_FUNCTION(placeholder_script_instance_create);
	// ADD_GDEXTENSION_FUNCTION(placeholder_script_instance_update);
	// ADD_GDEXTENSION_FUNCTION(classdb_construct_object);
	// ADD_GDEXTENSION_FUNCTION(classdb_get_method_bind);
	// ADD_GDEXTENSION_FUNCTION(classdb_get_class_tag);
	// ADD_GDEXTENSION_FUNCTION(classdb_register_extension_class2);
	// ADD_GDEXTENSION_FUNCTION(classdb_register_extension_class_method);
	// ADD_GDEXTENSION_FUNCTION(classdb_register_extension_class_integer_constant);
	// ADD_GDEXTENSION_FUNCTION(classdb_register_extension_class_property);
	// ADD_GDEXTENSION_FUNCTION(classdb_register_extension_class_property_indexed);
	// ADD_GDEXTENSION_FUNCTION(classdb_register_extension_class_property_group);
	// ADD_GDEXTENSION_FUNCTION(classdb_register_extension_class_property_subgroup);
	// ADD_GDEXTENSION_FUNCTION(classdb_register_extension_class_signal);
	// ADD_GDEXTENSION_FUNCTION(classdb_unregister_extension_class);
	// ADD_GDEXTENSION_FUNCTION(get_library_path);
	// ADD_GDEXTENSION_FUNCTION(editor_add_plugin);
	// ADD_GDEXTENSION_FUNCTION(editor_remove_plugin);
}

void initialize_tgds_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_EDITOR) {
		return;
	}
	register_gdextension_api();
	register_utility_functions();
}

void uninitialize_tgds_types(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_EDITOR) {
		return;
	}
}

extern "C" {

// Initialization.

GDExtensionBool GDE_EXPORT tgds_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization) {
	GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library, r_initialization);

	init_obj.register_initializer(initialize_tgds_types);
	init_obj.register_terminator(uninitialize_tgds_types);
	init_obj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_EDITOR);

	return init_obj.init();
}
}