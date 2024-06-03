#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/script_extension.hpp>

using namespace godot;

void register_classes_ScriptExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<ScriptExtension>("ScriptExtension")
           .constructor<>()
		    .fun<static_cast<bool(ScriptExtension::*)()>(&ScriptExtension::_editor_can_reload_from_file)>("_editor_can_reload_from_file")
		    .fun<static_cast<void(ScriptExtension::*)(void*)>(&ScriptExtension::_placeholder_erased)>("_placeholder_erased")
		    .fun<static_cast<bool(ScriptExtension::*)()const>(&ScriptExtension::_can_instantiate)>("_can_instantiate")
		    .fun<static_cast<Ref<Script>(ScriptExtension::*)()const>(&ScriptExtension::_get_base_script)>("_get_base_script")
		    .fun<static_cast<StringName(ScriptExtension::*)()const>(&ScriptExtension::_get_global_name)>("_get_global_name")
		    .fun<static_cast<bool(ScriptExtension::*)(const Ref<Script> &)const>(&ScriptExtension::_inherits_script)>("_inherits_script")
		    .fun<static_cast<StringName(ScriptExtension::*)()const>(&ScriptExtension::_get_instance_base_type)>("_get_instance_base_type")
		    .fun<static_cast<void*(ScriptExtension::*)(Object *)const>(&ScriptExtension::_instance_create)>("_instance_create")
		    .fun<static_cast<void*(ScriptExtension::*)(Object *)const>(&ScriptExtension::_placeholder_instance_create)>("_placeholder_instance_create")
		    .fun<static_cast<bool(ScriptExtension::*)(Object *)const>(&ScriptExtension::_instance_has)>("_instance_has")
		    .fun<static_cast<bool(ScriptExtension::*)()const>(&ScriptExtension::_has_source_code)>("_has_source_code")
		    .fun<static_cast<String(ScriptExtension::*)()const>(&ScriptExtension::_get_source_code)>("_get_source_code")
		    .fun<static_cast<void(ScriptExtension::*)(const String &)>(&ScriptExtension::_set_source_code)>("_set_source_code")
		    .fun<static_cast<Error(ScriptExtension::*)(bool)>(&ScriptExtension::_reload)>("_reload")
		    .fun<static_cast<TypedArray<Dictionary>(ScriptExtension::*)()const>(&ScriptExtension::_get_documentation)>("_get_documentation")
		    .fun<static_cast<String(ScriptExtension::*)()const>(&ScriptExtension::_get_class_icon_path)>("_get_class_icon_path")
		    .fun<static_cast<bool(ScriptExtension::*)(const StringName &)const>(&ScriptExtension::_has_method)>("_has_method")
		    .fun<static_cast<bool(ScriptExtension::*)(const StringName &)const>(&ScriptExtension::_has_static_method)>("_has_static_method")
		    .fun<static_cast<Dictionary(ScriptExtension::*)(const StringName &)const>(&ScriptExtension::_get_method_info)>("_get_method_info")
		    .fun<static_cast<bool(ScriptExtension::*)()const>(&ScriptExtension::_is_tool)>("_is_tool")
		    .fun<static_cast<bool(ScriptExtension::*)()const>(&ScriptExtension::_is_valid)>("_is_valid")
		    .fun<static_cast<bool(ScriptExtension::*)()const>(&ScriptExtension::_is_abstract)>("_is_abstract")
		    .fun<static_cast<ScriptLanguage *(ScriptExtension::*)()const>(&ScriptExtension::_get_language)>("_get_language")
		    .fun<static_cast<bool(ScriptExtension::*)(const StringName &)const>(&ScriptExtension::_has_script_signal)>("_has_script_signal")
		    .fun<static_cast<TypedArray<Dictionary>(ScriptExtension::*)()const>(&ScriptExtension::_get_script_signal_list)>("_get_script_signal_list")
		    .fun<static_cast<bool(ScriptExtension::*)(const StringName &)const>(&ScriptExtension::_has_property_default_value)>("_has_property_default_value")
		    .fun<static_cast<Variant(ScriptExtension::*)(const StringName &)const>(&ScriptExtension::_get_property_default_value)>("_get_property_default_value")
		    .fun<static_cast<void(ScriptExtension::*)()>(&ScriptExtension::_update_exports)>("_update_exports")
		    .fun<static_cast<TypedArray<Dictionary>(ScriptExtension::*)()const>(&ScriptExtension::_get_script_method_list)>("_get_script_method_list")
		    .fun<static_cast<TypedArray<Dictionary>(ScriptExtension::*)()const>(&ScriptExtension::_get_script_property_list)>("_get_script_property_list")
		    .fun<static_cast<int32_t(ScriptExtension::*)(const StringName &)const>(&ScriptExtension::_get_member_line)>("_get_member_line")
		    .fun<static_cast<Dictionary(ScriptExtension::*)()const>(&ScriptExtension::_get_constants)>("_get_constants")
		    .fun<static_cast<TypedArray<StringName>(ScriptExtension::*)()const>(&ScriptExtension::_get_members)>("_get_members")
		    .fun<static_cast<bool(ScriptExtension::*)()const>(&ScriptExtension::_is_placeholder_fallback_enabled)>("_is_placeholder_fallback_enabled")
		    .fun<static_cast<Variant(ScriptExtension::*)()const>(&ScriptExtension::_get_rpc_config)>("_get_rpc_config")
;}