
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/classes/input_event_screen_drag.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventScreenDrag() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventScreenDrag>("InputEventScreenDrag")
			.constructor<>()
			.base<InputEventFromWindow>()
			.property<static_cast<int32_t (InputEventScreenDrag::*)() const>(&InputEventScreenDrag::get_index), static_cast<void (InputEventScreenDrag::*)(int32_t)>(&InputEventScreenDrag::set_index)>((new std::string("index"))->c_str())
			.property<static_cast<Vector2 (InputEventScreenDrag::*)() const>(&InputEventScreenDrag::get_tilt), static_cast<void (InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_tilt)>((new std::string("tilt"))->c_str())
			.property<static_cast<double (InputEventScreenDrag::*)() const>(&InputEventScreenDrag::get_pressure), static_cast<void (InputEventScreenDrag::*)(double)>(&InputEventScreenDrag::set_pressure)>((new std::string("pressure"))->c_str())
			.property<static_cast<bool (InputEventScreenDrag::*)() const>(&InputEventScreenDrag::get_pen_inverted), static_cast<void (InputEventScreenDrag::*)(bool)>(&InputEventScreenDrag::set_pen_inverted)>((new std::string("pen_inverted"))->c_str())
			.property<static_cast<Vector2 (InputEventScreenDrag::*)() const>(&InputEventScreenDrag::get_position), static_cast<void (InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_position)>((new std::string("position"))->c_str())
			.property<static_cast<Vector2 (InputEventScreenDrag::*)() const>(&InputEventScreenDrag::get_relative), static_cast<void (InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_relative)>((new std::string("relative"))->c_str())
			.property<static_cast<Vector2 (InputEventScreenDrag::*)() const>(&InputEventScreenDrag::get_screen_relative), static_cast<void (InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_screen_relative)>((new std::string("screen_relative"))->c_str())
			.property<static_cast<Vector2 (InputEventScreenDrag::*)() const>(&InputEventScreenDrag::get_velocity), static_cast<void (InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_velocity)>((new std::string("velocity"))->c_str())
			.property<static_cast<Vector2 (InputEventScreenDrag::*)() const>(&InputEventScreenDrag::get_screen_velocity), static_cast<void (InputEventScreenDrag::*)(const Vector2 &)>(&InputEventScreenDrag::set_screen_velocity)>((new std::string("screen_velocity"))->c_str());
}