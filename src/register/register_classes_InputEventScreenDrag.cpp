#include <godot_cpp/classes/input_event_screen_drag.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventScreenDrag() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventScreenDrag>("InputEventScreenDrag")
            .constructor<>()
            .base<InputEventFromWindow>()
            .property<static_cast<int32_t(InputEventScreenDrag::*)()const>(&InputEventScreenDrag::get_index),static_cast<void(InputEventScreenDrag::*)(int32_t)>(&InputEventScreenDrag::set_index)>("index")
            .property<static_cast<Vector2(InputEventScreenDrag::*)()const>(&InputEventScreenDrag::get_tilt),static_cast<void(InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_tilt)>("tilt")
            .property<static_cast<double(InputEventScreenDrag::*)()const>(&InputEventScreenDrag::get_pressure),static_cast<void(InputEventScreenDrag::*)(double)>(&InputEventScreenDrag::set_pressure)>("pressure")
            .property<static_cast<bool(InputEventScreenDrag::*)()const>(&InputEventScreenDrag::get_pen_inverted),static_cast<void(InputEventScreenDrag::*)(bool)>(&InputEventScreenDrag::set_pen_inverted)>("pen_inverted")
            .property<static_cast<Vector2(InputEventScreenDrag::*)()const>(&InputEventScreenDrag::get_position),static_cast<void(InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_position)>("position")
            .property<static_cast<Vector2(InputEventScreenDrag::*)()const>(&InputEventScreenDrag::get_relative),static_cast<void(InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_relative)>("relative")
            .property<static_cast<Vector2(InputEventScreenDrag::*)()const>(&InputEventScreenDrag::get_screen_relative),static_cast<void(InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_screen_relative)>("screen_relative")
            .property<static_cast<Vector2(InputEventScreenDrag::*)()const>(&InputEventScreenDrag::get_velocity),static_cast<void(InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_velocity)>("velocity")
            .property<static_cast<Vector2(InputEventScreenDrag::*)()const>(&InputEventScreenDrag::get_screen_velocity),static_cast<void(InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_screen_velocity)>("screen_velocity")
;}