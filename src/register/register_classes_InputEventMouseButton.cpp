#include <godot_cpp/classes/input_event_mouse_button.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event_mouse.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventMouseButton() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventMouseButton>("InputEventMouseButton")
            .constructor<>()
            .base<InputEventMouse>()
            .property<static_cast<double(InputEventMouseButton::*)()const>(&InputEventMouseButton::get_factor),static_cast<void(InputEventMouseButton::*)(double)>(&InputEventMouseButton::set_factor)>("factor")
            .property<static_cast<MouseButton(InputEventMouseButton::*)()const>(&InputEventMouseButton::get_button_index),static_cast<void(InputEventMouseButton::*)(MouseButton)>(&InputEventMouseButton::set_button_index)>("button_index")
            .property<static_cast<void(InputEventMouseButton::*)(bool)>(&InputEventMouseButton::set_canceled)>("{'name': 'set_canceled', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'canceled', 'type': 'bool'}]}")
            .property<static_cast<void(InputEventMouseButton::*)(bool)>(&InputEventMouseButton::set_pressed)>("{'name': 'set_pressed', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'pressed', 'type': 'bool'}]}")
            .property<static_cast<bool(InputEventMouseButton::*)()const>(&InputEventMouseButton::is_double_click),static_cast<void(InputEventMouseButton::*)(bool)>(&InputEventMouseButton::set_double_click)>("double_click")
;}