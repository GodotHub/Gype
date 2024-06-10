#include "register/register_classes.h"
#include <godot_cpp/classes/input_event.hpp>

using namespace godot;

void register_classes_InputEventRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEvent>>("InputEventRef").constructor<InputEvent *>();
}