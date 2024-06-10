#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_from_window.hpp>

using namespace godot;

void register_classes_InputEventFromWindowRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventFromWindow>>("InputEventFromWindowRef").constructor<InputEventFromWindow *>();
}