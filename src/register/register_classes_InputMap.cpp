#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_map.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputMap() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputMap>("InputMap")
			.fun<static_cast<bool (InputMap::*)(const StringName &) const>(&InputMap::has_action)>("has_action")
			.fun<static_cast<TypedArray<StringName> (InputMap::*)()>(&InputMap::get_actions)>("get_actions")
			.fun<static_cast<void (InputMap::*)(const StringName &, double)>(&InputMap::add_action)>("add_action")
			.fun<static_cast<void (InputMap::*)(const StringName &)>(&InputMap::erase_action)>("erase_action")
			.fun<static_cast<void (InputMap::*)(const StringName &, double)>(&InputMap::action_set_deadzone)>("action_set_deadzone")
			.fun<static_cast<double (InputMap::*)(const StringName &)>(&InputMap::action_get_deadzone)>("action_get_deadzone")
			.fun<static_cast<void (InputMap::*)(const StringName &, const Ref<InputEvent> &)>(&InputMap::action_add_event)>("action_add_event")
			.fun<static_cast<bool (InputMap::*)(const StringName &, const Ref<InputEvent> &)>(&InputMap::action_has_event)>("action_has_event")
			.fun<static_cast<void (InputMap::*)(const StringName &, const Ref<InputEvent> &)>(&InputMap::action_erase_event)>("action_erase_event")
			.fun<static_cast<void (InputMap::*)(const StringName &)>(&InputMap::action_erase_events)>("action_erase_events")
			.fun<static_cast<TypedArray<InputEvent> (InputMap::*)(const StringName &)>(&InputMap::action_get_events)>("action_get_events")
			.fun<static_cast<bool (InputMap::*)(const Ref<InputEvent> &, const StringName &, bool) const>(&InputMap::event_is_action)>("event_is_action")
			.fun<static_cast<void (InputMap::*)()>(&InputMap::load_from_project_settings)>("load_from_project_settings");
}