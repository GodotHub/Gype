#include <godot_cpp/classes/input_event_joypad_motion.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventJoypadMotion() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<InputEventJoypadMotion>("InputEventJoypadMotion")
			.constructor<>()
			.property<&InputEventJoypadMotion::get_axis, &InputEventJoypadMotion::set_axis>("axis")
			.property<&InputEventJoypadMotion::get_axis_value, &InputEventJoypadMotion::set_axis_value>("axis_value");
}