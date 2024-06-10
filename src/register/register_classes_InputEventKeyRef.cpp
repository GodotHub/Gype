#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_key.hpp>

using namespace godot;

void register_classes_InputEventKeyRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventKey>>("InputEventKeyRef").constructor<InputEventKey *>();
}