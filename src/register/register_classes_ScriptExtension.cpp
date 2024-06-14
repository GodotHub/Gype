
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_extension.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ScriptExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ScriptExtension>("ScriptExtension")
			.constructor<>()
			.base<Script>()
			.fun<static_cast<bool (ScriptExtension::*)()>(&ScriptExtension::_editor_can_reload_from_file)>((new std::string("_editor_can_reload_from_file"))->c_str())
			.fun<static_cast<void (ScriptExtension::*)(void *)>(&ScriptExtension::_placeholder_erased)>((new std::string("_placeholder_erased"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)() const>(&ScriptExtension::_can_instantiate)>((new std::string("_can_instantiate"))->c_str())
			.fun<static_cast<Ref<Script> (ScriptExtension::*)() const>(&ScriptExtension::_get_base_script)>((new std::string("_get_base_script"))->c_str())
			.fun<static_cast<StringName (ScriptExtension::*)() const>(&ScriptExtension::_get_global_name)>((new std::string("_get_global_name"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)(const Ref<Script> &) const>(&ScriptExtension::_inherits_script)>((new std::string("_inherits_script"))->c_str())
			.fun<static_cast<StringName (ScriptExtension::*)() const>(&ScriptExtension::_get_instance_base_type)>((new std::string("_get_instance_base_type"))->c_str())
			.fun<static_cast<void *(ScriptExtension::*)(Object *) const>(&ScriptExtension::_instance_create)>((new std::string("_instance_create"))->c_str())
			.fun<static_cast<void *(ScriptExtension::*)(Object *) const>(&ScriptExtension::_placeholder_instance_create)>((new std::string("_placeholder_instance_create"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)(Object *) const>(&ScriptExtension::_instance_has)>((new std::string("_instance_has"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)() const>(&ScriptExtension::_has_source_code)>((new std::string("_has_source_code"))->c_str())
			.fun<static_cast<String (ScriptExtension::*)() const>(&ScriptExtension::_get_source_code)>((new std::string("_get_source_code"))->c_str())
			.fun<static_cast<void (ScriptExtension::*)(const String &)>(&ScriptExtension::_set_source_code)>((new std::string("_set_source_code"))->c_str())
			.fun<static_cast<Error (ScriptExtension::*)(bool)>(&ScriptExtension::_reload)>((new std::string("_reload"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (ScriptExtension::*)() const>(&ScriptExtension::_get_documentation)>((new std::string("_get_documentation"))->c_str())
			.fun<static_cast<String (ScriptExtension::*)() const>(&ScriptExtension::_get_class_icon_path)>((new std::string("_get_class_icon_path"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)(const StringName &) const>(&ScriptExtension::_has_method)>((new std::string("_has_method"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)(const StringName &) const>(&ScriptExtension::_has_static_method)>((new std::string("_has_static_method"))->c_str())
			.fun<static_cast<Variant (ScriptExtension::*)(const StringName &) const>(&ScriptExtension::_get_script_method_argument_count)>((new std::string("_get_script_method_argument_count"))->c_str())
			.fun<static_cast<Dictionary (ScriptExtension::*)(const StringName &) const>(&ScriptExtension::_get_method_info)>((new std::string("_get_method_info"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)() const>(&ScriptExtension::_is_tool)>((new std::string("_is_tool"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)() const>(&ScriptExtension::_is_valid)>((new std::string("_is_valid"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)() const>(&ScriptExtension::_is_abstract)>((new std::string("_is_abstract"))->c_str())
			.fun<static_cast<ScriptLanguage *(ScriptExtension::*)() const>(&ScriptExtension::_get_language)>((new std::string("_get_language"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)(const StringName &) const>(&ScriptExtension::_has_script_signal)>((new std::string("_has_script_signal"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (ScriptExtension::*)() const>(&ScriptExtension::_get_script_signal_list)>((new std::string("_get_script_signal_list"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)(const StringName &) const>(&ScriptExtension::_has_property_default_value)>((new std::string("_has_property_default_value"))->c_str())
			.fun<static_cast<Variant (ScriptExtension::*)(const StringName &) const>(&ScriptExtension::_get_property_default_value)>((new std::string("_get_property_default_value"))->c_str())
			.fun<static_cast<void (ScriptExtension::*)()>(&ScriptExtension::_update_exports)>((new std::string("_update_exports"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (ScriptExtension::*)() const>(&ScriptExtension::_get_script_method_list)>((new std::string("_get_script_method_list"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (ScriptExtension::*)() const>(&ScriptExtension::_get_script_property_list)>((new std::string("_get_script_property_list"))->c_str())
			.fun<static_cast<int32_t (ScriptExtension::*)(const StringName &) const>(&ScriptExtension::_get_member_line)>((new std::string("_get_member_line"))->c_str())
			.fun<static_cast<Dictionary (ScriptExtension::*)() const>(&ScriptExtension::_get_constants)>((new std::string("_get_constants"))->c_str())
			.fun<static_cast<TypedArray<StringName> (ScriptExtension::*)() const>(&ScriptExtension::_get_members)>((new std::string("_get_members"))->c_str())
			.fun<static_cast<bool (ScriptExtension::*)() const>(&ScriptExtension::_is_placeholder_fallback_enabled)>((new std::string("_is_placeholder_fallback_enabled"))->c_str())
			.fun<static_cast<Variant (ScriptExtension::*)() const>(&ScriptExtension::_get_rpc_config)>((new std::string("_get_rpc_config"))->c_str());
}