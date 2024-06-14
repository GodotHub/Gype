
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/classes/script_language_extension.hpp>
#include <godot_cpp/classes/script_language_extension_profiling_info.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ScriptLanguageExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ScriptLanguageExtension>("ScriptLanguageExtension")
			.constructor<>()
			.base<ScriptLanguage>()
			.fun<static_cast<String (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_name)>((new std::string("_get_name"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_init)>((new std::string("_init"))->c_str())
			.fun<static_cast<String (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_type)>((new std::string("_get_type"))->c_str())
			.fun<static_cast<String (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_extension)>((new std::string("_get_extension"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_finish)>((new std::string("_finish"))->c_str())
			.fun<static_cast<PackedStringArray (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_reserved_words)>((new std::string("_get_reserved_words"))->c_str())
			.fun<static_cast<bool (ScriptLanguageExtension::*)(const String &) const>(&ScriptLanguageExtension::_is_control_flow_keyword)>((new std::string("_is_control_flow_keyword"))->c_str())
			.fun<static_cast<PackedStringArray (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_comment_delimiters)>((new std::string("_get_comment_delimiters"))->c_str())
			.fun<static_cast<PackedStringArray (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_doc_comment_delimiters)>((new std::string("_get_doc_comment_delimiters"))->c_str())
			.fun<static_cast<PackedStringArray (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_string_delimiters)>((new std::string("_get_string_delimiters"))->c_str())
			.fun<static_cast<Ref<Script> (ScriptLanguageExtension::*)(const String &, const String &, const String &) const>(&ScriptLanguageExtension::_make_template)>((new std::string("_make_template"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (ScriptLanguageExtension::*)(const StringName &) const>(&ScriptLanguageExtension::_get_built_in_templates)>((new std::string("_get_built_in_templates"))->c_str())
			.fun<static_cast<bool (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_is_using_templates)>((new std::string("_is_using_templates"))->c_str())
			.fun<static_cast<Dictionary (ScriptLanguageExtension::*)(const String &, const String &, bool, bool, bool, bool) const>(&ScriptLanguageExtension::_validate)>((new std::string("_validate"))->c_str())
			.fun<static_cast<String (ScriptLanguageExtension::*)(const String &) const>(&ScriptLanguageExtension::_validate_path)>((new std::string("_validate_path"))->c_str())
			.fun<static_cast<Object *(ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_create_script)>((new std::string("_create_script"))->c_str())
			.fun<static_cast<bool (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_has_named_classes)>((new std::string("_has_named_classes"))->c_str())
			.fun<static_cast<bool (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_supports_builtin_mode)>((new std::string("_supports_builtin_mode"))->c_str())
			.fun<static_cast<bool (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_supports_documentation)>((new std::string("_supports_documentation"))->c_str())
			.fun<static_cast<bool (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_can_inherit_from_file)>((new std::string("_can_inherit_from_file"))->c_str())
			.fun<static_cast<int32_t (ScriptLanguageExtension::*)(const String &, const String &) const>(&ScriptLanguageExtension::_find_function)>((new std::string("_find_function"))->c_str())
			.fun<static_cast<String (ScriptLanguageExtension::*)(const String &, const String &, const PackedStringArray &) const>(&ScriptLanguageExtension::_make_function)>((new std::string("_make_function"))->c_str())
			.fun<static_cast<bool (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_can_make_function)>((new std::string("_can_make_function"))->c_str())
			.fun<static_cast<Error (ScriptLanguageExtension::*)(const Ref<Script> &, int32_t, int32_t)>(&ScriptLanguageExtension::_open_in_external_editor)>((new std::string("_open_in_external_editor"))->c_str())
			.fun<static_cast<bool (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_overrides_external_editor)>((new std::string("_overrides_external_editor"))->c_str())
			.fun<static_cast<ScriptLanguage::ScriptNameCasing (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_preferred_file_name_casing)>((new std::string("_preferred_file_name_casing"))->c_str())
			.fun<static_cast<Dictionary (ScriptLanguageExtension::*)(const String &, const String &, Object *) const>(&ScriptLanguageExtension::_complete_code)>((new std::string("_complete_code"))->c_str())
			.fun<static_cast<Dictionary (ScriptLanguageExtension::*)(const String &, const String &, const String &, Object *) const>(&ScriptLanguageExtension::_lookup_code)>((new std::string("_lookup_code"))->c_str())
			.fun<static_cast<String (ScriptLanguageExtension::*)(const String &, int32_t, int32_t) const>(&ScriptLanguageExtension::_auto_indent_code)>((new std::string("_auto_indent_code"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)(const StringName &, const Variant &)>(&ScriptLanguageExtension::_add_global_constant)>((new std::string("_add_global_constant"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)(const StringName &, const Variant &)>(&ScriptLanguageExtension::_add_named_global_constant)>((new std::string("_add_named_global_constant"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)(const StringName &)>(&ScriptLanguageExtension::_remove_named_global_constant)>((new std::string("_remove_named_global_constant"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_thread_enter)>((new std::string("_thread_enter"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_thread_exit)>((new std::string("_thread_exit"))->c_str())
			.fun<static_cast<String (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_debug_get_error)>((new std::string("_debug_get_error"))->c_str())
			.fun<static_cast<int32_t (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_debug_get_stack_level_count)>((new std::string("_debug_get_stack_level_count"))->c_str())
			.fun<static_cast<int32_t (ScriptLanguageExtension::*)(int32_t) const>(&ScriptLanguageExtension::_debug_get_stack_level_line)>((new std::string("_debug_get_stack_level_line"))->c_str())
			.fun<static_cast<String (ScriptLanguageExtension::*)(int32_t) const>(&ScriptLanguageExtension::_debug_get_stack_level_function)>((new std::string("_debug_get_stack_level_function"))->c_str())
			.fun<static_cast<Dictionary (ScriptLanguageExtension::*)(int32_t, int32_t, int32_t)>(&ScriptLanguageExtension::_debug_get_stack_level_locals)>((new std::string("_debug_get_stack_level_locals"))->c_str())
			.fun<static_cast<Dictionary (ScriptLanguageExtension::*)(int32_t, int32_t, int32_t)>(&ScriptLanguageExtension::_debug_get_stack_level_members)>((new std::string("_debug_get_stack_level_members"))->c_str())
			.fun<static_cast<void *(ScriptLanguageExtension::*)(int32_t)>(&ScriptLanguageExtension::_debug_get_stack_level_instance)>((new std::string("_debug_get_stack_level_instance"))->c_str())
			.fun<static_cast<Dictionary (ScriptLanguageExtension::*)(int32_t, int32_t)>(&ScriptLanguageExtension::_debug_get_globals)>((new std::string("_debug_get_globals"))->c_str())
			.fun<static_cast<String (ScriptLanguageExtension::*)(int32_t, const String &, int32_t, int32_t)>(&ScriptLanguageExtension::_debug_parse_stack_level_expression)>((new std::string("_debug_parse_stack_level_expression"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_debug_get_current_stack_info)>((new std::string("_debug_get_current_stack_info"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_reload_all_scripts)>((new std::string("_reload_all_scripts"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)(const Ref<Script> &, bool)>(&ScriptLanguageExtension::_reload_tool_script)>((new std::string("_reload_tool_script"))->c_str())
			.fun<static_cast<PackedStringArray (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_recognized_extensions)>((new std::string("_get_recognized_extensions"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_public_functions)>((new std::string("_get_public_functions"))->c_str())
			.fun<static_cast<Dictionary (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_public_constants)>((new std::string("_get_public_constants"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (ScriptLanguageExtension::*)() const>(&ScriptLanguageExtension::_get_public_annotations)>((new std::string("_get_public_annotations"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_profiling_start)>((new std::string("_profiling_start"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_profiling_stop)>((new std::string("_profiling_stop"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)(bool)>(&ScriptLanguageExtension::_profiling_set_save_native_calls)>((new std::string("_profiling_set_save_native_calls"))->c_str())
			.fun<static_cast<int32_t (ScriptLanguageExtension::*)(ScriptLanguageExtensionProfilingInfo *, int32_t)>(&ScriptLanguageExtension::_profiling_get_accumulated_data)>((new std::string("_profiling_get_accumulated_data"))->c_str())
			.fun<static_cast<int32_t (ScriptLanguageExtension::*)(ScriptLanguageExtensionProfilingInfo *, int32_t)>(&ScriptLanguageExtension::_profiling_get_frame_data)>((new std::string("_profiling_get_frame_data"))->c_str())
			.fun<static_cast<void (ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_frame)>((new std::string("_frame"))->c_str())
			.fun<static_cast<bool (ScriptLanguageExtension::*)(const String &) const>(&ScriptLanguageExtension::_handles_global_class_type)>((new std::string("_handles_global_class_type"))->c_str())
			.fun<static_cast<Dictionary (ScriptLanguageExtension::*)(const String &) const>(&ScriptLanguageExtension::_get_global_class_name)>((new std::string("_get_global_class_name"))->c_str());
	qjs::Value _LookupResultType = context->newObject();
	_LookupResultType[(new std::string("LOOKUP_RESULT_SCRIPT_LOCATION"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_SCRIPT_LOCATION;
	_LookupResultType[(new std::string("LOOKUP_RESULT_CLASS"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS;
	_LookupResultType[(new std::string("LOOKUP_RESULT_CLASS_CONSTANT"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_CONSTANT;
	_LookupResultType[(new std::string("LOOKUP_RESULT_CLASS_PROPERTY"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_PROPERTY;
	_LookupResultType[(new std::string("LOOKUP_RESULT_CLASS_METHOD"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_METHOD;
	_LookupResultType[(new std::string("LOOKUP_RESULT_CLASS_SIGNAL"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_SIGNAL;
	_LookupResultType[(new std::string("LOOKUP_RESULT_CLASS_ENUM"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_ENUM;
	_LookupResultType[(new std::string("LOOKUP_RESULT_CLASS_TBD_GLOBALSCOPE"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_TBD_GLOBALSCOPE;
	_LookupResultType[(new std::string("LOOKUP_RESULT_CLASS_ANNOTATION"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_ANNOTATION;
	_LookupResultType[(new std::string("LOOKUP_RESULT_MAX"))->c_str()] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_MAX;
	_module.add("LookupResultType", std::move(_LookupResultType));
	qjs::Value _CodeCompletionLocation = context->newObject();
	_CodeCompletionLocation[(new std::string("LOCATION_LOCAL"))->c_str()] = ScriptLanguageExtension::CodeCompletionLocation::LOCATION_LOCAL;
	_CodeCompletionLocation[(new std::string("LOCATION_PARENT_MASK"))->c_str()] = ScriptLanguageExtension::CodeCompletionLocation::LOCATION_PARENT_MASK;
	_CodeCompletionLocation[(new std::string("LOCATION_OTHER_USER_CODE"))->c_str()] = ScriptLanguageExtension::CodeCompletionLocation::LOCATION_OTHER_USER_CODE;
	_CodeCompletionLocation[(new std::string("LOCATION_OTHER"))->c_str()] = ScriptLanguageExtension::CodeCompletionLocation::LOCATION_OTHER;
	_module.add("CodeCompletionLocation", std::move(_CodeCompletionLocation));
	qjs::Value _CodeCompletionKind = context->newObject();
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_CLASS"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_CLASS;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_FUNCTION"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_FUNCTION;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_SIGNAL"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_SIGNAL;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_VARIABLE"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_VARIABLE;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_MEMBER"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_MEMBER;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_ENUM"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_ENUM;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_CONSTANT"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_CONSTANT;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_NODE_PATH"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_NODE_PATH;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_FILE_PATH"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_FILE_PATH;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_PLAIN_TEXT"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_PLAIN_TEXT;
	_CodeCompletionKind[(new std::string("CODE_COMPLETION_KIND_MAX"))->c_str()] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_MAX;
	_module.add("CodeCompletionKind", std::move(_CodeCompletionKind));
}