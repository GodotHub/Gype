#include <godot_cpp/classes/input_event_gesture.hpp>
#include <godot_cpp/classes/input_event_magnify_gesture.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventMagnifyGesture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventMagnifyGesture>("InputEventMagnifyGesture")
			.constructor<>()
			.base<InputEventGesture>()
			.property<static_cast<double (InputEventMagnifyGesture::*)() const>(&InputEventMagnifyGesture::get_factor), static_cast<void (InputEventMagnifyGesture::*)(double)>(&InputEventMagnifyGesture::set_factor)>((new std::string("factor"))->c_str());
}