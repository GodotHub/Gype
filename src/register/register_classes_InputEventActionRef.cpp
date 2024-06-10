#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_action.hpp>

using namespace godot;

void register_classes_InputEventActionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventAction>>("InputEventActionRef").constructor<InputEventAction *>();
}