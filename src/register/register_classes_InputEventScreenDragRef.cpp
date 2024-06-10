#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_screen_drag.hpp>

using namespace godot;

void register_classes_InputEventScreenDragRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventScreenDrag>>("InputEventScreenDragRef").constructor<InputEventScreenDrag *>();
}