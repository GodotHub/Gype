#include <godot_cpp/classes/editor_settings.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorSettings() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorSettings>("EditorSettings")
			.constructor<>()
			.base<Resource>()
			.static_fun<&EditorSettings::NOTIFICATION_EDITOR_SETTINGS_CHANGED>((new std::string("NOTIFICATION_EDITOR_SETTINGS_CHANGED"))->c_str())
			.fun<static_cast<bool (EditorSettings::*)(const String &) const>(&EditorSettings::has_setting)>((new std::string("has_setting"))->c_str())
			.fun<static_cast<void (EditorSettings::*)(const String &, const Variant &)>(&EditorSettings::set_setting)>((new std::string("set_setting"))->c_str())
			.fun<static_cast<Variant (EditorSettings::*)(const String &) const>(&EditorSettings::get_setting)>((new std::string("get_setting"))->c_str())
			.fun<static_cast<void (EditorSettings::*)(const String &)>(&EditorSettings::erase)>((new std::string("erase"))->c_str())
			.fun<static_cast<void (EditorSettings::*)(const StringName &, const Variant &, bool)>(&EditorSettings::set_initial_value)>((new std::string("set_initial_value"))->c_str())
			.fun<static_cast<void (EditorSettings::*)(const Dictionary &)>(&EditorSettings::add_property_info)>((new std::string("add_property_info"))->c_str())
			.fun<static_cast<void (EditorSettings::*)(const String &, const String &, const Variant &)>(&EditorSettings::set_project_metadata)>((new std::string("set_project_metadata"))->c_str())
			.fun<static_cast<Variant (EditorSettings::*)(const String &, const String &, const Variant &) const>(&EditorSettings::get_project_metadata)>((new std::string("get_project_metadata"))->c_str())
			.fun<static_cast<void (EditorSettings::*)(const PackedStringArray &)>(&EditorSettings::set_favorites)>((new std::string("set_favorites"))->c_str())
			.fun<static_cast<PackedStringArray (EditorSettings::*)() const>(&EditorSettings::get_favorites)>((new std::string("get_favorites"))->c_str())
			.fun<static_cast<void (EditorSettings::*)(const PackedStringArray &)>(&EditorSettings::set_recent_dirs)>((new std::string("set_recent_dirs"))->c_str())
			.fun<static_cast<PackedStringArray (EditorSettings::*)() const>(&EditorSettings::get_recent_dirs)>((new std::string("get_recent_dirs"))->c_str())
			.fun<static_cast<void (EditorSettings::*)(const String &, const TypedArray<InputEvent> &)>(&EditorSettings::set_builtin_action_override)>((new std::string("set_builtin_action_override"))->c_str())
			.fun<static_cast<bool (EditorSettings::*)(const String &) const>(&EditorSettings::check_changed_settings_in_group)>((new std::string("check_changed_settings_in_group"))->c_str())
			.fun<static_cast<PackedStringArray (EditorSettings::*)() const>(&EditorSettings::get_changed_settings)>((new std::string("get_changed_settings"))->c_str())
			.fun<static_cast<void (EditorSettings::*)(const String &)>(&EditorSettings::mark_setting_changed)>((new std::string("mark_setting_changed"))->c_str());
}