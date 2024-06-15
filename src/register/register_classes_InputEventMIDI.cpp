#include <godot_cpp/classes/input_event_midi.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventMIDI() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventMIDI>("InputEventMIDI")
            .constructor<>()
            .base<InputEvent>()
            .property<static_cast<int32_t(InputEventMIDI::*)()const>(&InputEventMIDI::get_channel),static_cast<void(InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_channel)>("channel")
            .property<static_cast<MIDIMessage(InputEventMIDI::*)()const>(&InputEventMIDI::get_message),static_cast<void(InputEventMIDI::*)(MIDIMessage)>(&InputEventMIDI::set_message)>("message")
            .property<static_cast<int32_t(InputEventMIDI::*)()const>(&InputEventMIDI::get_pitch),static_cast<void(InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_pitch)>("pitch")
            .property<static_cast<int32_t(InputEventMIDI::*)()const>(&InputEventMIDI::get_velocity),static_cast<void(InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_velocity)>("velocity")
            .property<static_cast<int32_t(InputEventMIDI::*)()const>(&InputEventMIDI::get_instrument),static_cast<void(InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_instrument)>("instrument")
            .property<static_cast<int32_t(InputEventMIDI::*)()const>(&InputEventMIDI::get_pressure),static_cast<void(InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_pressure)>("pressure")
            .property<static_cast<int32_t(InputEventMIDI::*)()const>(&InputEventMIDI::get_controller_number),static_cast<void(InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_controller_number)>("controller_number")
            .property<static_cast<int32_t(InputEventMIDI::*)()const>(&InputEventMIDI::get_controller_value),static_cast<void(InputEventMIDI::*)(int32_t)>(&InputEventMIDI::set_controller_value)>("controller_value")
;}