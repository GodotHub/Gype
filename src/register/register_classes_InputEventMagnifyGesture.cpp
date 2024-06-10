#include <godot_cpp/classes/input_event_magnify_gesture.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventMagnifyGesture() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventMagnifyGesture>("InputEventMagnifyGesture")
			.constructor<>()
			.property<&InputEventMagnifyGesture::get_factor, &InputEventMagnifyGesture::set_factor>("factor");
}