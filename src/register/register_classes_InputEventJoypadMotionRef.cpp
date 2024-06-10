#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_joypad_motion.hpp>

using namespace godot;

void register_classes_InputEventJoypadMotionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventJoypadMotion>>("InputEventJoypadMotionRef").constructor<InputEventJoypadMotion *>();
}