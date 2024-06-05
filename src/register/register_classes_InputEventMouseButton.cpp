#include <godot_cpp/classes/input_event_mouse_button.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_InputEventMouseButton() {
	qjs::Context::Module &_module = _General;
	_module.class_<InputEventMouseButton>("InputEventMouseButton")
			.constructor<>()
			.property<&InputEventMouseButton::get_factor, &InputEventMouseButton::set_factor>("factor")
			.property<&InputEventMouseButton::get_button_index, &InputEventMouseButton::set_button_index>("button_index")
			.property<&InputEventMouseButton::is_canceled, &InputEventMouseButton::set_canceled>("canceled")
			.property<&InputEventMouseButton::is_pressed, &InputEventMouseButton::set_pressed>("pressed")
			.property<&InputEventMouseButton::is_double_click, &InputEventMouseButton::set_double_click>("double_click");
}