#include <godot_cpp/classes/input_event_mouse_motion.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/input_event_mouse.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_InputEventMouseMotion() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<InputEventMouseMotion>("InputEventMouseMotion")
            .constructor<>()
            .base<InputEventMouse>()
            .property<static_cast<Vector2(InputEventMouseMotion::*)()const>(&InputEventMouseMotion::get_tilt),static_cast<void(InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_tilt)>("tilt")
            .property<static_cast<double(InputEventMouseMotion::*)()const>(&InputEventMouseMotion::get_pressure),static_cast<void(InputEventMouseMotion::*)(double)>(&InputEventMouseMotion::set_pressure)>("pressure")
            .property<static_cast<bool(InputEventMouseMotion::*)()const>(&InputEventMouseMotion::get_pen_inverted),static_cast<void(InputEventMouseMotion::*)(bool)>(&InputEventMouseMotion::set_pen_inverted)>("pen_inverted")
            .property<static_cast<Vector2(InputEventMouseMotion::*)()const>(&InputEventMouseMotion::get_relative),static_cast<void(InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_relative)>("relative")
            .property<static_cast<Vector2(InputEventMouseMotion::*)()const>(&InputEventMouseMotion::get_screen_relative),static_cast<void(InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_screen_relative)>("screen_relative")
            .property<static_cast<Vector2(InputEventMouseMotion::*)()const>(&InputEventMouseMotion::get_velocity),static_cast<void(InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_velocity)>("velocity")
            .property<static_cast<Vector2(InputEventMouseMotion::*)()const>(&InputEventMouseMotion::get_screen_velocity),static_cast<void(InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_screen_velocity)>("screen_velocity")
;}