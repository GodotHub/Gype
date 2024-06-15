#include <godot_cpp/classes/script_language_extension.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/classes/script_language_extension_profiling_info.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ScriptLanguageExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ScriptLanguageExtension>("ScriptLanguageExtension")
            .constructor<>()
            .base<ScriptLanguage>()
            .fun<static_cast<String(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_name)>("_get_name")
            .fun<static_cast<void(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_init)>("_init")
            .fun<static_cast<String(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_type)>("_get_type")
            .fun<static_cast<String(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_extension)>("_get_extension")
            .fun<static_cast<void(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_finish)>("_finish")
            .fun<static_cast<PackedStringArray(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_reserved_words)>("_get_reserved_words")
            .fun<static_cast<bool(ScriptLanguageExtension::*)(const String &)const>(&ScriptLanguageExtension::_is_control_flow_keyword)>("_is_control_flow_keyword")
            .fun<static_cast<PackedStringArray(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_comment_delimiters)>("_get_comment_delimiters")
            .fun<static_cast<PackedStringArray(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_doc_comment_delimiters)>("_get_doc_comment_delimiters")
            .fun<static_cast<PackedStringArray(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_string_delimiters)>("_get_string_delimiters")
            .fun<static_cast<Ref<Script>(ScriptLanguageExtension::*)(const String &,const String &,const String &)const>(&ScriptLanguageExtension::_make_template)>("_make_template")
            .fun<static_cast<TypedArray<Dictionary>(ScriptLanguageExtension::*)(const StringName &)const>(&ScriptLanguageExtension::_get_built_in_templates)>("_get_built_in_templates")
            .fun<static_cast<bool(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_is_using_templates)>("_is_using_templates")
            .fun<static_cast<Dictionary(ScriptLanguageExtension::*)(const String &,const String &,bool,bool,bool,bool)const>(&ScriptLanguageExtension::_validate)>("_validate")
            .fun<static_cast<String(ScriptLanguageExtension::*)(const String &)const>(&ScriptLanguageExtension::_validate_path)>("_validate_path")
            .fun<static_cast<Object *(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_create_script)>("_create_script")
            .fun<static_cast<bool(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_has_named_classes)>("_has_named_classes")
            .fun<static_cast<bool(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_supports_builtin_mode)>("_supports_builtin_mode")
            .fun<static_cast<bool(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_supports_documentation)>("_supports_documentation")
            .fun<static_cast<bool(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_can_inherit_from_file)>("_can_inherit_from_file")
            .fun<static_cast<int32_t(ScriptLanguageExtension::*)(const String &,const String &)const>(&ScriptLanguageExtension::_find_function)>("_find_function")
            .fun<static_cast<String(ScriptLanguageExtension::*)(const String &,const String &,const PackedStringArray &)const>(&ScriptLanguageExtension::_make_function)>("_make_function")
            .fun<static_cast<bool(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_can_make_function)>("_can_make_function")
            .fun<static_cast<Error(ScriptLanguageExtension::*)(const Ref<Script> &,int32_t,int32_t)>(&ScriptLanguageExtension::_open_in_external_editor)>("_open_in_external_editor")
            .fun<static_cast<bool(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_overrides_external_editor)>("_overrides_external_editor")
            .fun<static_cast<ScriptLanguage::ScriptNameCasing(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_preferred_file_name_casing)>("_preferred_file_name_casing")
            .fun<static_cast<Dictionary(ScriptLanguageExtension::*)(const String &,const String &,Object *)const>(&ScriptLanguageExtension::_complete_code)>("_complete_code")
            .fun<static_cast<Dictionary(ScriptLanguageExtension::*)(const String &,const String &,const String &,Object *)const>(&ScriptLanguageExtension::_lookup_code)>("_lookup_code")
            .fun<static_cast<String(ScriptLanguageExtension::*)(const String &,int32_t,int32_t)const>(&ScriptLanguageExtension::_auto_indent_code)>("_auto_indent_code")
            .fun<static_cast<void(ScriptLanguageExtension::*)(const StringName &,const Variant &)>(&ScriptLanguageExtension::_add_global_constant)>("_add_global_constant")
            .fun<static_cast<void(ScriptLanguageExtension::*)(const StringName &,const Variant &)>(&ScriptLanguageExtension::_add_named_global_constant)>("_add_named_global_constant")
            .fun<static_cast<void(ScriptLanguageExtension::*)(const StringName &)>(&ScriptLanguageExtension::_remove_named_global_constant)>("_remove_named_global_constant")
            .fun<static_cast<void(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_thread_enter)>("_thread_enter")
            .fun<static_cast<void(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_thread_exit)>("_thread_exit")
            .fun<static_cast<String(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_debug_get_error)>("_debug_get_error")
            .fun<static_cast<int32_t(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_debug_get_stack_level_count)>("_debug_get_stack_level_count")
            .fun<static_cast<int32_t(ScriptLanguageExtension::*)(int32_t)const>(&ScriptLanguageExtension::_debug_get_stack_level_line)>("_debug_get_stack_level_line")
            .fun<static_cast<String(ScriptLanguageExtension::*)(int32_t)const>(&ScriptLanguageExtension::_debug_get_stack_level_function)>("_debug_get_stack_level_function")
            .fun<static_cast<Dictionary(ScriptLanguageExtension::*)(int32_t,int32_t,int32_t)>(&ScriptLanguageExtension::_debug_get_stack_level_locals)>("_debug_get_stack_level_locals")
            .fun<static_cast<Dictionary(ScriptLanguageExtension::*)(int32_t,int32_t,int32_t)>(&ScriptLanguageExtension::_debug_get_stack_level_members)>("_debug_get_stack_level_members")
            .fun<static_cast<void*(ScriptLanguageExtension::*)(int32_t)>(&ScriptLanguageExtension::_debug_get_stack_level_instance)>("_debug_get_stack_level_instance")
            .fun<static_cast<Dictionary(ScriptLanguageExtension::*)(int32_t,int32_t)>(&ScriptLanguageExtension::_debug_get_globals)>("_debug_get_globals")
            .fun<static_cast<String(ScriptLanguageExtension::*)(int32_t,const String &,int32_t,int32_t)>(&ScriptLanguageExtension::_debug_parse_stack_level_expression)>("_debug_parse_stack_level_expression")
            .fun<static_cast<TypedArray<Dictionary>(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_debug_get_current_stack_info)>("_debug_get_current_stack_info")
            .fun<static_cast<void(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_reload_all_scripts)>("_reload_all_scripts")
            .fun<static_cast<void(ScriptLanguageExtension::*)(const Ref<Script> &,bool)>(&ScriptLanguageExtension::_reload_tool_script)>("_reload_tool_script")
            .fun<static_cast<PackedStringArray(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_recognized_extensions)>("_get_recognized_extensions")
            .fun<static_cast<TypedArray<Dictionary>(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_public_functions)>("_get_public_functions")
            .fun<static_cast<Dictionary(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_public_constants)>("_get_public_constants")
            .fun<static_cast<TypedArray<Dictionary>(ScriptLanguageExtension::*)()const>(&ScriptLanguageExtension::_get_public_annotations)>("_get_public_annotations")
            .fun<static_cast<void(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_profiling_start)>("_profiling_start")
            .fun<static_cast<void(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_profiling_stop)>("_profiling_stop")
            .fun<static_cast<void(ScriptLanguageExtension::*)(bool)>(&ScriptLanguageExtension::_profiling_set_save_native_calls)>("_profiling_set_save_native_calls")
            .fun<static_cast<int32_t(ScriptLanguageExtension::*)(ScriptLanguageExtensionProfilingInfo*,int32_t)>(&ScriptLanguageExtension::_profiling_get_accumulated_data)>("_profiling_get_accumulated_data")
            .fun<static_cast<int32_t(ScriptLanguageExtension::*)(ScriptLanguageExtensionProfilingInfo*,int32_t)>(&ScriptLanguageExtension::_profiling_get_frame_data)>("_profiling_get_frame_data")
            .fun<static_cast<void(ScriptLanguageExtension::*)()>(&ScriptLanguageExtension::_frame)>("_frame")
            .fun<static_cast<bool(ScriptLanguageExtension::*)(const String &)const>(&ScriptLanguageExtension::_handles_global_class_type)>("_handles_global_class_type")
            .fun<static_cast<Dictionary(ScriptLanguageExtension::*)(const String &)const>(&ScriptLanguageExtension::_get_global_class_name)>("_get_global_class_name")
;    qjs::Value _LookupResultType = context->newObject();
    _LookupResultType["LOOKUP_RESULT_SCRIPT_LOCATION"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_SCRIPT_LOCATION;
    _LookupResultType["LOOKUP_RESULT_CLASS"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS;
    _LookupResultType["LOOKUP_RESULT_CLASS_CONSTANT"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_CONSTANT;
    _LookupResultType["LOOKUP_RESULT_CLASS_PROPERTY"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_PROPERTY;
    _LookupResultType["LOOKUP_RESULT_CLASS_METHOD"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_METHOD;
    _LookupResultType["LOOKUP_RESULT_CLASS_SIGNAL"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_SIGNAL;
    _LookupResultType["LOOKUP_RESULT_CLASS_ENUM"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_ENUM;
    _LookupResultType["LOOKUP_RESULT_CLASS_TBD_GLOBALSCOPE"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_TBD_GLOBALSCOPE;
    _LookupResultType["LOOKUP_RESULT_CLASS_ANNOTATION"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_CLASS_ANNOTATION;
    _LookupResultType["LOOKUP_RESULT_MAX"] = ScriptLanguageExtension::LookupResultType::LOOKUP_RESULT_MAX;
    _module.add("LookupResultType", std::move(_LookupResultType));
    qjs::Value _CodeCompletionLocation = context->newObject();
    _CodeCompletionLocation["LOCATION_LOCAL"] = ScriptLanguageExtension::CodeCompletionLocation::LOCATION_LOCAL;
    _CodeCompletionLocation["LOCATION_PARENT_MASK"] = ScriptLanguageExtension::CodeCompletionLocation::LOCATION_PARENT_MASK;
    _CodeCompletionLocation["LOCATION_OTHER_USER_CODE"] = ScriptLanguageExtension::CodeCompletionLocation::LOCATION_OTHER_USER_CODE;
    _CodeCompletionLocation["LOCATION_OTHER"] = ScriptLanguageExtension::CodeCompletionLocation::LOCATION_OTHER;
    _module.add("CodeCompletionLocation", std::move(_CodeCompletionLocation));
    qjs::Value _CodeCompletionKind = context->newObject();
    _CodeCompletionKind["CODE_COMPLETION_KIND_CLASS"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_CLASS;
    _CodeCompletionKind["CODE_COMPLETION_KIND_FUNCTION"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_FUNCTION;
    _CodeCompletionKind["CODE_COMPLETION_KIND_SIGNAL"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_SIGNAL;
    _CodeCompletionKind["CODE_COMPLETION_KIND_VARIABLE"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_VARIABLE;
    _CodeCompletionKind["CODE_COMPLETION_KIND_MEMBER"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_MEMBER;
    _CodeCompletionKind["CODE_COMPLETION_KIND_ENUM"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_ENUM;
    _CodeCompletionKind["CODE_COMPLETION_KIND_CONSTANT"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_CONSTANT;
    _CodeCompletionKind["CODE_COMPLETION_KIND_NODE_PATH"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_NODE_PATH;
    _CodeCompletionKind["CODE_COMPLETION_KIND_FILE_PATH"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_FILE_PATH;
    _CodeCompletionKind["CODE_COMPLETION_KIND_PLAIN_TEXT"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_PLAIN_TEXT;
    _CodeCompletionKind["CODE_COMPLETION_KIND_MAX"] = ScriptLanguageExtension::CodeCompletionKind::CODE_COMPLETION_KIND_MAX;
    _module.add("CodeCompletionKind", std::move(_CodeCompletionKind));
}