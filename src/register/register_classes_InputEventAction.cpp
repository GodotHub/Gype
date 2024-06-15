#include <godot_cpp/classes/input_event_action.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventAction() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventAction>("InputEventAction")
            .constructor<>()
            .base<InputEvent>()
            .property<static_cast<StringName(InputEventAction::*)()const>(&InputEventAction::get_action),static_cast<void(InputEventAction::*)(const StringName &)>(&InputEventAction::set_action)>("action")
            .property<static_cast<void(InputEventAction::*)(bool)>(&InputEventAction::set_pressed)>("{'name': 'set_pressed', 'is_const': False, 'is_vararg': False, 'is_static': False, 'is_virtual': False, 'hash': 2586408642, 'arguments': [{'name': 'pressed', 'type': 'bool'}]}")
            .property<static_cast<double(InputEventAction::*)()const>(&InputEventAction::get_strength),static_cast<void(InputEventAction::*)(double)>(&InputEventAction::set_strength)>("strength")
            .property<static_cast<int32_t(InputEventAction::*)()const>(&InputEventAction::get_event_index),static_cast<void(InputEventAction::*)(int32_t)>(&InputEventAction::set_event_index)>("event_index")
;}