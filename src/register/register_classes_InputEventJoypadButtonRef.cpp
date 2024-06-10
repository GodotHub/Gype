#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_joypad_button.hpp>

using namespace godot;

void register_classes_InputEventJoypadButtonRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventJoypadButton>>("InputEventJoypadButtonRef").constructor<InputEventJoypadButton *>();
}