#include <godot_cpp/classes/input_event_gesture.hpp>
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventGesture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventGesture>("InputEventGesture")
			.constructor<>()
			.base<InputEventWithModifiers>()
			.property<static_cast<Vector2 (InputEventGesture::*)() const>(&InputEventGesture::get_position), static_cast<void (InputEventGesture::*)(const Vector2 &)>(&InputEventGesture::set_position)>((new std::string("position"))->c_str());
}