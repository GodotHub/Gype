#include <godot_cpp/classes/input_event_shortcut.hpp>
#include <godot_cpp/classes/shortcut.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_InputEventShortcut() {
	qjs::Context::Module &_module = _General;
	_module.class_<InputEventShortcut>("InputEventShortcut")
			.constructor<>()
			.property<&InputEventShortcut::get_shortcut, &InputEventShortcut::set_shortcut>("shortcut");
}