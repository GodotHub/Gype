#include <godot_cpp/classes/input_event_joypad_motion.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/input_event.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventJoypadMotion() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventJoypadMotion>("InputEventJoypadMotion")
            .constructor<>()
            .base<InputEvent>()
            .property<static_cast<JoyAxis(InputEventJoypadMotion::*)()const>(&InputEventJoypadMotion::get_axis),static_cast<void(InputEventJoypadMotion::*)(JoyAxis)>(&InputEventJoypadMotion::set_axis)>("axis")
            .property<static_cast<double(InputEventJoypadMotion::*)()const>(&InputEventJoypadMotion::get_axis_value),static_cast<void(InputEventJoypadMotion::*)(double)>(&InputEventJoypadMotion::set_axis_value)>("axis_value")
;}