#include "register/register_types.h"
#include "gde/gdextension_api.h"
#include "register/utils.h"

using namespace godot;

void load_proc_address()
{
	LOAD_PROC_ADDRESS(get_godot_version, GDExtensionInterfaceGetGodotVersion);
	LOAD_PROC_ADDRESS(mem_alloc, GDExtensionInterfaceMemAlloc);
	LOAD_PROC_ADDRESS(mem_realloc, GDExtensionInterfaceMemRealloc);
	LOAD_PROC_ADDRESS(mem_free, GDExtensionInterfaceMemFree);
	LOAD_PROC_ADDRESS(print_error_with_message, GDExtensionInterfacePrintErrorWithMessage);
	LOAD_PROC_ADDRESS(print_warning, GDExtensionInterfacePrintWarning);
	LOAD_PROC_ADDRESS(print_warning_with_message, GDExtensionInterfacePrintWarningWithMessage);
	LOAD_PROC_ADDRESS(print_script_error, GDExtensionInterfacePrintScriptError);
	LOAD_PROC_ADDRESS(print_script_error_with_message, GDExtensionInterfacePrintScriptErrorWithMessage);
	LOAD_PROC_ADDRESS(get_native_struct_size, GDExtensionInterfaceGetNativeStructSize);
	LOAD_PROC_ADDRESS(variant_new_copy, GDExtensionInterfaceVariantNewCopy);
	LOAD_PROC_ADDRESS(variant_new_nil, GDExtensionInterfaceVariantNewNil);
	LOAD_PROC_ADDRESS(variant_destroy, GDExtensionInterfaceVariantDestroy);
	LOAD_PROC_ADDRESS(variant_call, GDExtensionInterfaceVariantCall);
	LOAD_PROC_ADDRESS(variant_call_static, GDExtensionInterfaceVariantCallStatic);
	LOAD_PROC_ADDRESS(variant_evaluate, GDExtensionInterfaceVariantEvaluate);
	LOAD_PROC_ADDRESS(variant_set, GDExtensionInterfaceVariantSet);
	LOAD_PROC_ADDRESS(variant_set_named, GDExtensionInterfaceVariantSetNamed);
	LOAD_PROC_ADDRESS(variant_set_keyed, GDExtensionInterfaceVariantSetKeyed);
	LOAD_PROC_ADDRESS(variant_set_indexed, GDExtensionInterfaceVariantSetIndexed);
	LOAD_PROC_ADDRESS(variant_get, GDExtensionInterfaceVariantGet);
	LOAD_PROC_ADDRESS(variant_get_named, GDExtensionInterfaceVariantGetNamed);
	LOAD_PROC_ADDRESS(variant_get_keyed, GDExtensionInterfaceVariantGetKeyed);
	LOAD_PROC_ADDRESS(variant_get_indexed, GDExtensionInterfaceVariantGetIndexed);
	LOAD_PROC_ADDRESS(variant_iter_init, GDExtensionInterfaceVariantIterInit);
	LOAD_PROC_ADDRESS(variant_iter_next, GDExtensionInterfaceVariantIterNext);
	LOAD_PROC_ADDRESS(variant_iter_get, GDExtensionInterfaceVariantIterGet);
	LOAD_PROC_ADDRESS(variant_hash, GDExtensionInterfaceVariantHash);
	LOAD_PROC_ADDRESS(variant_recursive_hash, GDExtensionInterfaceVariantRecursiveHash);
	LOAD_PROC_ADDRESS(variant_hash_compare, GDExtensionInterfaceVariantHashCompare);
	LOAD_PROC_ADDRESS(variant_booleanize, GDExtensionInterfaceVariantBooleanize);
	LOAD_PROC_ADDRESS(variant_duplicate, GDExtensionInterfaceVariantDuplicate);
	LOAD_PROC_ADDRESS(variant_stringify, GDExtensionInterfaceVariantStringify);
	LOAD_PROC_ADDRESS(variant_get_type, GDExtensionInterfaceVariantGetType);
	LOAD_PROC_ADDRESS(variant_has_method, GDExtensionInterfaceVariantHasMethod);
	LOAD_PROC_ADDRESS(variant_has_member, GDExtensionInterfaceVariantHasMember);
	LOAD_PROC_ADDRESS(variant_has_key, GDExtensionInterfaceVariantHasKey);
	LOAD_PROC_ADDRESS(variant_get_type_name, GDExtensionInterfaceVariantGetTypeName);
	LOAD_PROC_ADDRESS(variant_can_convert, GDExtensionInterfaceVariantCanConvert);
	LOAD_PROC_ADDRESS(variant_can_convert_strict, GDExtensionInterfaceVariantCanConvertStrict);
	LOAD_PROC_ADDRESS(get_variant_from_type_constructor, GDExtensionInterfaceGetVariantFromTypeConstructor);
	LOAD_PROC_ADDRESS(get_variant_to_type_constructor, GDExtensionInterfaceGetVariantToTypeConstructor);
	LOAD_PROC_ADDRESS(variant_get_ptr_operator_evaluator, GDExtensionInterfaceVariantGetPtrOperatorEvaluator);
	LOAD_PROC_ADDRESS(variant_get_ptr_builtin_method, GDExtensionInterfaceVariantGetPtrBuiltinMethod);
	LOAD_PROC_ADDRESS(variant_get_ptr_constructor, GDExtensionInterfaceVariantGetPtrConstructor);
	LOAD_PROC_ADDRESS(variant_get_ptr_destructor, GDExtensionInterfaceVariantGetPtrDestructor);
	LOAD_PROC_ADDRESS(variant_construct, GDExtensionInterfaceVariantConstruct);
	LOAD_PROC_ADDRESS(variant_get_ptr_setter, GDExtensionInterfaceVariantGetPtrSetter);
	LOAD_PROC_ADDRESS(variant_get_ptr_getter, GDExtensionInterfaceVariantGetPtrGetter);
	LOAD_PROC_ADDRESS(variant_get_ptr_indexed_setter, GDExtensionInterfaceVariantGetPtrIndexedSetter);
	LOAD_PROC_ADDRESS(variant_get_ptr_indexed_getter, GDExtensionInterfaceVariantGetPtrIndexedGetter);
	LOAD_PROC_ADDRESS(variant_get_ptr_keyed_setter, GDExtensionInterfaceVariantGetPtrKeyedSetter);
	LOAD_PROC_ADDRESS(variant_get_ptr_keyed_getter, GDExtensionInterfaceVariantGetPtrKeyedGetter);
	LOAD_PROC_ADDRESS(variant_get_ptr_keyed_checker, GDExtensionInterfaceVariantGetPtrKeyedChecker);
	LOAD_PROC_ADDRESS(variant_get_constant_value, GDExtensionInterfaceVariantGetConstantValue);
	LOAD_PROC_ADDRESS(variant_get_ptr_utility_function, GDExtensionInterfaceVariantGetPtrUtilityFunction);
	LOAD_PROC_ADDRESS(string_new_with_latin1_chars, GDExtensionInterfaceStringNewWithLatin1Chars);
	LOAD_PROC_ADDRESS(string_new_with_utf8_chars, GDExtensionInterfaceStringNewWithUtf8Chars);
	LOAD_PROC_ADDRESS(string_new_with_utf16_chars, GDExtensionInterfaceStringNewWithUtf16Chars);
	LOAD_PROC_ADDRESS(string_new_with_utf32_chars, GDExtensionInterfaceStringNewWithUtf32Chars);
	LOAD_PROC_ADDRESS(string_new_with_wide_chars, GDExtensionInterfaceStringNewWithWideChars);
	LOAD_PROC_ADDRESS(string_new_with_latin1_chars_and_len, GDExtensionInterfaceStringNewWithLatin1CharsAndLen);
	LOAD_PROC_ADDRESS(string_new_with_utf8_chars_and_len, GDExtensionInterfaceStringNewWithUtf8CharsAndLen);
	LOAD_PROC_ADDRESS(string_new_with_utf16_chars_and_len, GDExtensionInterfaceStringNewWithUtf16CharsAndLen);
	LOAD_PROC_ADDRESS(string_new_with_utf32_chars_and_len, GDExtensionInterfaceStringNewWithUtf32CharsAndLen);
	LOAD_PROC_ADDRESS(string_new_with_wide_chars_and_len, GDExtensionInterfaceStringNewWithWideCharsAndLen);
	LOAD_PROC_ADDRESS(string_to_latin1_chars, GDExtensionInterfaceStringToLatin1Chars);
	LOAD_PROC_ADDRESS(string_to_utf8_chars, GDExtensionInterfaceStringToUtf8Chars);
	LOAD_PROC_ADDRESS(string_to_utf16_chars, GDExtensionInterfaceStringToUtf16Chars);
	LOAD_PROC_ADDRESS(string_to_utf32_chars, GDExtensionInterfaceStringToUtf32Chars);
	LOAD_PROC_ADDRESS(string_to_wide_chars, GDExtensionInterfaceStringToWideChars);
	LOAD_PROC_ADDRESS(string_operator_index, GDExtensionInterfaceStringOperatorIndex);
	LOAD_PROC_ADDRESS(string_operator_index_const, GDExtensionInterfaceStringOperatorIndexConst);
	LOAD_PROC_ADDRESS(string_operator_plus_eq_string, GDExtensionInterfaceStringOperatorPlusEqString);
	LOAD_PROC_ADDRESS(string_operator_plus_eq_char, GDExtensionInterfaceStringOperatorPlusEqChar);
	LOAD_PROC_ADDRESS(string_operator_plus_eq_cstr, GDExtensionInterfaceStringOperatorPlusEqCstr);
	LOAD_PROC_ADDRESS(string_operator_plus_eq_wcstr, GDExtensionInterfaceStringOperatorPlusEqWcstr);
	LOAD_PROC_ADDRESS(string_operator_plus_eq_c32str, GDExtensionInterfaceStringOperatorPlusEqC32str);
	LOAD_PROC_ADDRESS(string_resize, GDExtensionInterfaceStringResize);
	LOAD_PROC_ADDRESS(string_name_new_with_latin1_chars, GDExtensionInterfaceStringNameNewWithLatin1Chars);
	LOAD_PROC_ADDRESS(xml_parser_open_buffer, GDExtensionInterfaceXmlParserOpenBuffer);
	LOAD_PROC_ADDRESS(file_access_store_buffer, GDExtensionInterfaceFileAccessStoreBuffer);
	LOAD_PROC_ADDRESS(file_access_get_buffer, GDExtensionInterfaceFileAccessGetBuffer);
	LOAD_PROC_ADDRESS(worker_thread_pool_add_native_group_task, GDExtensionInterfaceWorkerThreadPoolAddNativeGroupTask);
	LOAD_PROC_ADDRESS(worker_thread_pool_add_native_task, GDExtensionInterfaceWorkerThreadPoolAddNativeTask);
	LOAD_PROC_ADDRESS(packed_byte_array_operator_index, GDExtensionInterfacePackedByteArrayOperatorIndex);
	LOAD_PROC_ADDRESS(packed_byte_array_operator_index_const, GDExtensionInterfacePackedByteArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(packed_color_array_operator_index, GDExtensionInterfacePackedColorArrayOperatorIndex);
	LOAD_PROC_ADDRESS(packed_color_array_operator_index_const, GDExtensionInterfacePackedColorArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(packed_float32_array_operator_index, GDExtensionInterfacePackedFloat32ArrayOperatorIndex);
	LOAD_PROC_ADDRESS(packed_float32_array_operator_index_const, GDExtensionInterfacePackedFloat32ArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(packed_float64_array_operator_index, GDExtensionInterfacePackedFloat64ArrayOperatorIndex);
	LOAD_PROC_ADDRESS(packed_float64_array_operator_index_const, GDExtensionInterfacePackedFloat64ArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(packed_int32_array_operator_index, GDExtensionInterfacePackedInt32ArrayOperatorIndex);
	LOAD_PROC_ADDRESS(packed_int32_array_operator_index_const, GDExtensionInterfacePackedInt32ArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(packed_int64_array_operator_index, GDExtensionInterfacePackedInt64ArrayOperatorIndex);
	LOAD_PROC_ADDRESS(packed_int64_array_operator_index_const, GDExtensionInterfacePackedInt64ArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(packed_string_array_operator_index, GDExtensionInterfacePackedStringArrayOperatorIndex);
	LOAD_PROC_ADDRESS(packed_string_array_operator_index_const, GDExtensionInterfacePackedStringArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(packed_vector2_array_operator_index, GDExtensionInterfacePackedVector2ArrayOperatorIndex);
	LOAD_PROC_ADDRESS(packed_vector2_array_operator_index_const, GDExtensionInterfacePackedVector2ArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(packed_vector3_array_operator_index, GDExtensionInterfacePackedVector3ArrayOperatorIndex);
	LOAD_PROC_ADDRESS(packed_vector3_array_operator_index_const, GDExtensionInterfacePackedVector3ArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(array_operator_index, GDExtensionInterfaceArrayOperatorIndex);
	LOAD_PROC_ADDRESS(array_operator_index_const, GDExtensionInterfaceArrayOperatorIndexConst);
	LOAD_PROC_ADDRESS(array_ref, GDExtensionInterfaceArrayRef);
	LOAD_PROC_ADDRESS(array_set_typed, GDExtensionInterfaceArraySetTyped);
	LOAD_PROC_ADDRESS(dictionary_operator_index, GDExtensionInterfaceDictionaryOperatorIndex);
	LOAD_PROC_ADDRESS(dictionary_operator_index_const, GDExtensionInterfaceDictionaryOperatorIndexConst);
	LOAD_PROC_ADDRESS(object_method_bind_call, GDExtensionInterfaceObjectMethodBindCall);
	LOAD_PROC_ADDRESS(object_method_bind_ptrcall, GDExtensionInterfaceObjectMethodBindPtrcall);
	LOAD_PROC_ADDRESS(object_destroy, GDExtensionInterfaceObjectDestroy);
	LOAD_PROC_ADDRESS(global_get_singleton, GDExtensionInterfaceGlobalGetSingleton);
	LOAD_PROC_ADDRESS(object_get_instance_binding, GDExtensionInterfaceObjectGetInstanceBinding);
	LOAD_PROC_ADDRESS(object_set_instance_binding, GDExtensionInterfaceObjectSetInstanceBinding);
	LOAD_PROC_ADDRESS(object_set_instance, GDExtensionInterfaceObjectSetInstance);
	LOAD_PROC_ADDRESS(object_get_class_name, GDExtensionInterfaceObjectGetClassName);
	LOAD_PROC_ADDRESS(object_cast_to, GDExtensionInterfaceObjectCastTo);
	LOAD_PROC_ADDRESS(object_get_instance_from_id, GDExtensionInterfaceObjectGetInstanceFromId);
	LOAD_PROC_ADDRESS(object_get_instance_id, GDExtensionInterfaceObjectGetInstanceId);
	LOAD_PROC_ADDRESS(callable_custom_create, GDExtensionInterfaceCallableCustomCreate);
	LOAD_PROC_ADDRESS(callable_custom_get_userdata, GDExtensionInterfaceCallableCustomGetUserData);
	LOAD_PROC_ADDRESS(ref_get_object, GDExtensionInterfaceRefGetObject);
	LOAD_PROC_ADDRESS(ref_set_object, GDExtensionInterfaceRefSetObject);
	LOAD_PROC_ADDRESS(script_instance_create2, GDExtensionInterfaceScriptInstanceCreate2);
	LOAD_PROC_ADDRESS(placeholder_script_instance_create, GDExtensionInterfacePlaceHolderScriptInstanceCreate);
	LOAD_PROC_ADDRESS(placeholder_script_instance_update, GDExtensionInterfacePlaceHolderScriptInstanceUpdate);
	LOAD_PROC_ADDRESS(classdb_construct_object, GDExtensionInterfaceClassdbConstructObject);
	LOAD_PROC_ADDRESS(classdb_get_method_bind, GDExtensionInterfaceClassdbGetMethodBind);
	LOAD_PROC_ADDRESS(classdb_get_class_tag, GDExtensionInterfaceClassdbGetClassTag);
	LOAD_PROC_ADDRESS(classdb_register_extension_class2, GDExtensionInterfaceClassdbRegisterExtensionClass2);
	LOAD_PROC_ADDRESS(classdb_register_extension_class_method, GDExtensionInterfaceClassdbRegisterExtensionClassMethod);
	LOAD_PROC_ADDRESS(classdb_register_extension_class_integer_constant, GDExtensionInterfaceClassdbRegisterExtensionClassIntegerConstant);
	LOAD_PROC_ADDRESS(classdb_register_extension_class_property, GDExtensionInterfaceClassdbRegisterExtensionClassProperty);
	LOAD_PROC_ADDRESS(classdb_register_extension_class_property_indexed, GDExtensionInterfaceClassdbRegisterExtensionClassPropertyIndexed);
	LOAD_PROC_ADDRESS(classdb_register_extension_class_property_group, GDExtensionInterfaceClassdbRegisterExtensionClassPropertyGroup);
	LOAD_PROC_ADDRESS(classdb_register_extension_class_property_subgroup, GDExtensionInterfaceClassdbRegisterExtensionClassPropertySubgroup);
	LOAD_PROC_ADDRESS(classdb_register_extension_class_signal, GDExtensionInterfaceClassdbRegisterExtensionClassSignal);
	LOAD_PROC_ADDRESS(classdb_unregister_extension_class, GDExtensionInterfaceClassdbUnregisterExtensionClass);
	LOAD_PROC_ADDRESS(get_library_path, GDExtensionInterfaceGetLibraryPath);
	LOAD_PROC_ADDRESS(editor_add_plugin, GDExtensionInterfaceEditorAddPlugin);
	LOAD_PROC_ADDRESS(editor_remove_plugin, GDExtensionInterfaceEditorRemovePlugin);
}

void register_gdextension_api()
{
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
	ADD_GDEXTENSION_FUNCTION(variant_call);
	ADD_GDEXTENSION_FUNCTION(variant_call_static);
	ADD_GDEXTENSION_FUNCTION(variant_evaluate);
	ADD_GDEXTENSION_FUNCTION(variant_set);
	ADD_GDEXTENSION_FUNCTION(variant_set_named);
	ADD_GDEXTENSION_FUNCTION(variant_set_keyed);
	ADD_GDEXTENSION_FUNCTION(variant_set_indexed);
	ADD_GDEXTENSION_FUNCTION(variant_get);
	ADD_GDEXTENSION_FUNCTION(variant_get_named);
	ADD_GDEXTENSION_FUNCTION(variant_get_keyed);
	ADD_GDEXTENSION_FUNCTION(variant_get_indexed);
	ADD_GDEXTENSION_FUNCTION(variant_iter_init);
	ADD_GDEXTENSION_FUNCTION(variant_iter_next);
	ADD_GDEXTENSION_FUNCTION(variant_iter_get);
	ADD_GDEXTENSION_FUNCTION(variant_hash);
	ADD_GDEXTENSION_FUNCTION(variant_recursive_hash);
	ADD_GDEXTENSION_FUNCTION(variant_hash_compare);
	ADD_GDEXTENSION_FUNCTION(variant_booleanize);
	ADD_GDEXTENSION_FUNCTION(variant_duplicate);
	ADD_GDEXTENSION_FUNCTION(variant_stringify);
	ADD_GDEXTENSION_FUNCTION(variant_get_type);
	ADD_GDEXTENSION_FUNCTION(variant_has_method);
	ADD_GDEXTENSION_FUNCTION(variant_has_member);
	ADD_GDEXTENSION_FUNCTION(variant_has_key);
	ADD_GDEXTENSION_FUNCTION(variant_get_type_name);
	ADD_GDEXTENSION_FUNCTION(variant_can_convert);
	ADD_GDEXTENSION_FUNCTION(variant_can_convert_strict);
	ADD_GDEXTENSION_FUNCTION(get_variant_from_type_constructor);
	ADD_GDEXTENSION_FUNCTION(get_variant_to_type_constructor);
	ADD_GDEXTENSION_FUNCTION(variant_get_ptr_operator_evaluator);
	ADD_GDEXTENSION_FUNCTION(variant_get_ptr_builtin_method);
	ADD_GDEXTENSION_FUNCTION(variant_get_ptr_constructor);
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

void initialize_tgds_types(void *user_data, GDExtensionInitializationLevel p_level)
{
	if (p_level != GDEXTENSION_INITIALIZATION_SCENE)
	{
		return;
	}
	load_proc_address();
	register_gdextension_api();
}

void uninitialize_tgds_types(void *user_data, GDExtensionInitializationLevel p_level)
{
	if (p_level != GDEXTENSION_INITIALIZATION_SCENE)
	{
		return;
	}
}

extern "C"
{

	// Initialization.

	GDExtensionBool __declspec(dllexport) tgds_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address, GDExtensionClassLibraryPtr p_library, GDExtensionInitialization *r_initialization)
	{
		internal::gdextension_interface_get_proc_address = p_get_proc_address;
		internal::library = p_library;
		internal::token = p_library;
		r_initialization->initialize = initialize_tgds_types;
		r_initialization->deinitialize = uninitialize_tgds_types;
		r_initialization->minimum_initialization_level = GDEXTENSION_INITIALIZATION_SCENE;
		return true;
	}
}