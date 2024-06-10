#include <godot_cpp/classes/editor_settings.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorSettings() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorSettings>("EditorSettings")
			.constructor<>()
			.fun<static_cast<bool (EditorSettings::*)(const String &) const>(&EditorSettings::has_setting)>("has_setting")
			.fun<static_cast<void (EditorSettings::*)(const String &, const Variant &)>(&EditorSettings::set_setting)>("set_setting")
			.fun<static_cast<Variant (EditorSettings::*)(const String &) const>(&EditorSettings::get_setting)>("get_setting")
			.fun<static_cast<void (EditorSettings::*)(const String &)>(&EditorSettings::erase)>("erase")
			.fun<static_cast<void (EditorSettings::*)(const StringName &, const Variant &, bool)>(&EditorSettings::set_initial_value)>("set_initial_value")
			.fun<static_cast<void (EditorSettings::*)(const Dictionary &)>(&EditorSettings::add_property_info)>("add_property_info")
			.fun<static_cast<void (EditorSettings::*)(const String &, const String &, const Variant &)>(&EditorSettings::set_project_metadata)>("set_project_metadata")
			.fun<static_cast<Variant (EditorSettings::*)(const String &, const String &, const Variant &) const>(&EditorSettings::get_project_metadata)>("get_project_metadata")
			.fun<static_cast<void (EditorSettings::*)(const PackedStringArray &)>(&EditorSettings::set_favorites)>("set_favorites")
			.fun<static_cast<PackedStringArray (EditorSettings::*)() const>(&EditorSettings::get_favorites)>("get_favorites")
			.fun<static_cast<void (EditorSettings::*)(const PackedStringArray &)>(&EditorSettings::set_recent_dirs)>("set_recent_dirs")
			.fun<static_cast<PackedStringArray (EditorSettings::*)() const>(&EditorSettings::get_recent_dirs)>("get_recent_dirs")
			.fun<static_cast<void (EditorSettings::*)(const String &, const TypedArray<InputEvent> &)>(&EditorSettings::set_builtin_action_override)>("set_builtin_action_override")
			.fun<static_cast<bool (EditorSettings::*)(const String &) const>(&EditorSettings::check_changed_settings_in_group)>("check_changed_settings_in_group")
			.fun<static_cast<PackedStringArray (EditorSettings::*)() const>(&EditorSettings::get_changed_settings)>("get_changed_settings")
			.fun<static_cast<void (EditorSettings::*)(const String &)>(&EditorSettings::mark_setting_changed)>("mark_setting_changed");
}