#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_with_modifiers.hpp>

using namespace godot;

void register_classes_InputEventWithModifiersRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventWithModifiers>>("InputEventWithModifiersRef").constructor<InputEventWithModifiers *>();
}