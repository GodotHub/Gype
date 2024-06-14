#include <godot_cpp/classes/input_event_mouse.hpp>
#include <godot_cpp/classes/input_event_mouse_motion.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventMouseMotion() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventMouseMotion>("InputEventMouseMotion")
			.constructor<>()
			.base<InputEventMouse>()
			.property<static_cast<Vector2 (InputEventMouseMotion::*)() const>(&InputEventMouseMotion::get_tilt), static_cast<void (InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_tilt)>((new std::string("tilt"))->c_str())
			.property<static_cast<double (InputEventMouseMotion::*)() const>(&InputEventMouseMotion::get_pressure), static_cast<void (InputEventMouseMotion::*)(double)>(&InputEventMouseMotion::set_pressure)>((new std::string("pressure"))->c_str())
			.property<static_cast<bool (InputEventMouseMotion::*)() const>(&InputEventMouseMotion::get_pen_inverted), static_cast<void (InputEventMouseMotion::*)(bool)>(&InputEventMouseMotion::set_pen_inverted)>((new std::string("pen_inverted"))->c_str())
			.property<static_cast<Vector2 (InputEventMouseMotion::*)() const>(&InputEventMouseMotion::get_relative), static_cast<void (InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_relative)>((new std::string("relative"))->c_str())
			.property<static_cast<Vector2 (InputEventMouseMotion::*)() const>(&InputEventMouseMotion::get_screen_relative), static_cast<void (InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_screen_relative)>((new std::string("screen_relative"))->c_str())
			.property<static_cast<Vector2 (InputEventMouseMotion::*)() const>(&InputEventMouseMotion::get_velocity), static_cast<void (InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_velocity)>((new std::string("velocity"))->c_str())
			.property<static_cast<Vector2 (InputEventMouseMotion::*)() const>(&InputEventMouseMotion::get_screen_velocity), static_cast<void (InputEventMouseMotion::*)(const Vector2 &)>(&InputEventMouseMotion::set_screen_velocity)>((new std::string("screen_velocity"))->c_str());
}