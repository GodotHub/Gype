
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_action.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventAction() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventAction>("InputEventAction")
			.constructor<>()
			.base<InputEvent>()
			.property<static_cast<StringName (InputEventAction::*)() const>(&InputEventAction::get_action), static_cast<void (InputEventAction::*)(const StringName &)>(&InputEventAction::set_action)>((new std::string("action"))->c_str())
			.property<static_cast<void (InputEventAction::*)(bool)>(&InputEventAction::set_pressed)>((new std::string("{'name': 'set_pressed', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'pressed', 'type': 'bool'}]}"))->c_str())
			.property<static_cast<double (InputEventAction::*)() const>(&InputEventAction::get_strength), static_cast<void (InputEventAction::*)(double)>(&InputEventAction::set_strength)>((new std::string("strength"))->c_str())
			.property<static_cast<int32_t (InputEventAction::*)() const>(&InputEventAction::get_event_index), static_cast<void (InputEventAction::*)(int32_t)>(&InputEventAction::set_event_index)>((new std::string("event_index"))->c_str());
}