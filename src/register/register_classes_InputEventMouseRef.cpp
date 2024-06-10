#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_mouse.hpp>

using namespace godot;

void register_classes_InputEventMouseRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventMouse>>("InputEventMouseRef").constructor<InputEventMouse *>();
}