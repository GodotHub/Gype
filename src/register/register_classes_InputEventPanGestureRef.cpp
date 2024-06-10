#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_pan_gesture.hpp>

using namespace godot;

void register_classes_InputEventPanGestureRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventPanGesture>>("InputEventPanGestureRef").constructor<InputEventPanGesture *>();
}