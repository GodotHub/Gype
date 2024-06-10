#include "register/register_classes.h"
#include <godot_cpp/classes/input_event_shortcut.hpp>

using namespace godot;

void register_classes_InputEventShortcutRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<InputEventShortcut>>("InputEventShortcutRef").constructor<InputEventShortcut *>();
}