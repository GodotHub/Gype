#include <godot_cpp/classes/input_event_joypad_button.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventJoypadButton() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventJoypadButton>("InputEventJoypadButton")
            .constructor<>()
            .base<InputEvent>()
            .property<static_cast<JoyButton(InputEventJoypadButton::*)()const>(&InputEventJoypadButton::get_button_index),static_cast<void(InputEventJoypadButton::*)(JoyButton)>(&InputEventJoypadButton::set_button_index)>("button_index")
            .property<static_cast<double(InputEventJoypadButton::*)()const>(&InputEventJoypadButton::get_pressure),static_cast<void(InputEventJoypadButton::*)(double)>(&InputEventJoypadButton::set_pressure)>("pressure")
            .property<static_cast<void(InputEventJoypadButton::*)(bool)>(&InputEventJoypadButton::set_pressed)>("{'name': 'set_pressed', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'pressed', 'type': 'bool'}]}")
;}