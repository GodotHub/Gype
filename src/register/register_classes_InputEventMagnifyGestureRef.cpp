#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_magnify_gesture.hpp>

using namespace godot;

void register_classes_InputEventMagnifyGestureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventMagnifyGesture>>("InputEventMagnifyGestureRef").constructor<InputEventMagnifyGesture *>();
}