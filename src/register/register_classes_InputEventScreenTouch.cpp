#include <godot_cpp/classes/input_event_screen_touch.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_InputEventScreenTouch() {
	qjs::Context::Module &_module = _General;
	_module.class_<InputEventScreenTouch>("InputEventScreenTouch")
			.constructor<>()
			.property<&InputEventScreenTouch::get_index, &InputEventScreenTouch::set_index>("index")
			.property<&InputEventScreenTouch::get_position, &InputEventScreenTouch::set_position>("position")
			.property<&InputEventScreenTouch::is_canceled, &InputEventScreenTouch::set_canceled>("canceled")
			.property<&InputEventScreenTouch::is_pressed, &InputEventScreenTouch::set_pressed>("pressed")
			.property<&InputEventScreenTouch::is_double_tap, &InputEventScreenTouch::set_double_tap>("double_tap");
}