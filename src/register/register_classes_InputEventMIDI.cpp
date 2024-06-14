
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_midi.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventMIDI() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventMIDI>("InputEventMIDI")
			.constructor<>()
			.base<InputEvent>()
			.property<static_cast<int32_t (InputEventMIDI::*)() const>(&InputEventMIDI::get_channel), static_cast<void (InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_channel)>((new std::string("channel"))->c_str())
			.property<static_cast<MIDIMessage (InputEventMIDI::*)() const>(&InputEventMIDI::get_message), static_cast<void (InputEventMIDI::*)(MIDIMessage)>(&InputEventMIDI::set_message)>((new std::string("message"))->c_str())
			.property<static_cast<int32_t (InputEventMIDI::*)() const>(&InputEventMIDI::get_pitch), static_cast<void (InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_pitch)>((new std::string("pitch"))->c_str())
			.property<static_cast<int32_t (InputEventMIDI::*)() const>(&InputEventMIDI::get_velocity), static_cast<void (InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_velocity)>((new std::string("velocity"))->c_str())
			.property<static_cast<int32_t (InputEventMIDI::*)() const>(&InputEventMIDI::get_instrument), static_cast<void (InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_instrument)>((new std::string("instrument"))->c_str())
			.property<static_cast<int32_t (InputEventMIDI::*)() const>(&InputEventMIDI::get_pressure), static_cast<void (InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_pressure)>((new std::string("pressure"))->c_str())
			.property<static_cast<int32_t (InputEventMIDI::*)() const>(&InputEventMIDI::get_controller_number), static_cast<void (InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_controller_number)>((new std::string("controller_number"))->c_str())
			.property<static_cast<int32_t (InputEventMIDI::*)() const>(&InputEventMIDI::get_controller_value), static_cast<void (InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_controller_value)>((new std::string("controller_value"))->c_str());
}