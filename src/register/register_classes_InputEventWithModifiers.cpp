#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventWithModifiers() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventWithModifiers>("InputEventWithModifiers")
			.constructor<>()
			.base<InputEventFromWindow>()
			.property<static_cast<bool (InputEventWithModifiers::*)() const>(&InputEventWithModifiers::is_command_or_control_autoremap), static_cast<void (InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_command_or_control_autoremap)>((new std::string("command_or_control_autoremap"))->c_str())
			.property<static_cast<bool (InputEventWithModifiers::*)() const>(&InputEventWithModifiers::is_alt_pressed), static_cast<void (InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_alt_pressed)>((new std::string("alt_pressed"))->c_str())
			.property<static_cast<bool (InputEventWithModifiers::*)() const>(&InputEventWithModifiers::is_shift_pressed), static_cast<void (InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_shift_pressed)>((new std::string("shift_pressed"))->c_str())
			.property<static_cast<bool (InputEventWithModifiers::*)() const>(&InputEventWithModifiers::is_ctrl_pressed), static_cast<void (InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_ctrl_pressed)>((new std::string("ctrl_pressed"))->c_str())
			.property<static_cast<bool (InputEventWithModifiers::*)() const>(&InputEventWithModifiers::is_meta_pressed), static_cast<void (InputEventWithModifiers::*)(bool)>(&InputEventWithModifiers::set_meta_pressed)>((new std::string("meta_pressed"))->c_str())
			.fun<static_cast<bool (InputEventWithModifiers::*)() const>(&InputEventWithModifiers::is_command_or_control_pressed)>((new std::string("is_command_or_control_pressed"))->c_str())
			.fun<static_cast<BitField<KeyModifierMask> (InputEventWithModifiers::*)() const>(&InputEventWithModifiers::get_modifiers_mask)>((new std::string("get_modifiers_mask"))->c_str());
}