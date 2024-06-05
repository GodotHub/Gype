#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ProjectSettings() {
	qjs::Context::Module &_module = _General;
	_module.class_<ProjectSettings>("ProjectSettings")
			.constructor<>()
			.fun<static_cast<bool (ProjectSettings::*)(const String &) const>(&ProjectSettings::has_setting)>("has_setting")
			.fun<static_cast<void (ProjectSettings::*)(const String &, const Variant &)>(&ProjectSettings::set_setting)>("set_setting")
			.fun<static_cast<Variant (ProjectSettings::*)(const String &, const Variant &) const>(&ProjectSettings::get_setting)>("get_setting")
			.fun<static_cast<Variant (ProjectSettings::*)(const StringName &) const>(&ProjectSettings::get_setting_with_override)>("get_setting_with_override")
			.fun<static_cast<TypedArray<Dictionary> (ProjectSettings::*)()>(&ProjectSettings::get_global_class_list)>("get_global_class_list")
			.fun<static_cast<void (ProjectSettings::*)(const String &, int32_t)>(&ProjectSettings::set_order)>("set_order")
			.fun<static_cast<int32_t (ProjectSettings::*)(const String &) const>(&ProjectSettings::get_order)>("get_order")
			.fun<static_cast<void (ProjectSettings::*)(const String &, const Variant &)>(&ProjectSettings::set_initial_value)>("set_initial_value")
			.fun<static_cast<void (ProjectSettings::*)(const String &, bool)>(&ProjectSettings::set_as_basic)>("set_as_basic")
			.fun<static_cast<void (ProjectSettings::*)(const String &, bool)>(&ProjectSettings::set_as_internal)>("set_as_internal")
			.fun<static_cast<void (ProjectSettings::*)(const Dictionary &)>(&ProjectSettings::add_property_info)>("add_property_info")
			.fun<static_cast<void (ProjectSettings::*)(const String &, bool)>(&ProjectSettings::set_restart_if_changed)>("set_restart_if_changed")
			.fun<static_cast<void (ProjectSettings::*)(const String &)>(&ProjectSettings::clear)>("clear")
			.fun<static_cast<String (ProjectSettings::*)(const String &) const>(&ProjectSettings::localize_path)>("localize_path")
			.fun<static_cast<String (ProjectSettings::*)(const String &) const>(&ProjectSettings::globalize_path)>("globalize_path")
			.fun<static_cast<Error (ProjectSettings::*)()>(&ProjectSettings::save)>("save")
			.fun<static_cast<bool (ProjectSettings::*)(const String &, bool, int32_t)>(&ProjectSettings::load_resource_pack)>("load_resource_pack")
			.fun<static_cast<Error (ProjectSettings::*)(const String &)>(&ProjectSettings::save_custom)>("save_custom");
}