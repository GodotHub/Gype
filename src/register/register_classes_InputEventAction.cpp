#include <godot_cpp/classes/input_event_action.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_InputEventAction() {
	qjs::Context::Module &_module = _General;
	_module.class_<InputEventAction>("InputEventAction")
			.constructor<>()
			.property<&InputEventAction::get_action, &InputEventAction::set_action>("action")
			.property<&InputEventAction::is_pressed, &InputEventAction::set_pressed>("pressed")
			.property<&InputEventAction::get_strength, &InputEventAction::set_strength>("strength");
}