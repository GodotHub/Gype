#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_mouse_motion.hpp>

using namespace godot;

void register_classes_InputEventMouseMotionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventMouseMotion>>("InputEventMouseMotionRef").constructor<InputEventMouseMotion *>();
}