#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/input_event_midi.hpp>

using namespace godot;

void register_classes_InputEventMIDI() {
    qjs::Context::Module &_module = _General;
    _module.class_<InputEventMIDI>("InputEventMIDI")
           .constructor<>()
           .property<InputEventMIDI::get_channel, InputEventMIDI::set_channel>("channel")
           .property<InputEventMIDI::get_message, InputEventMIDI::set_message>("message")
           .property<InputEventMIDI::get_pitch, InputEventMIDI::set_pitch>("pitch")
           .property<InputEventMIDI::get_velocity, InputEventMIDI::set_velocity>("velocity")
           .property<InputEventMIDI::get_instrument, InputEventMIDI::set_instrument>("instrument")
           .property<InputEventMIDI::get_pressure, InputEventMIDI::set_pressure>("pressure")
           .property<InputEventMIDI::get_controller_number, InputEventMIDI::set_controller_number>("controller_number")
           .property<InputEventMIDI::get_controller_value, InputEventMIDI::set_controller_value>("controller_value")
;}