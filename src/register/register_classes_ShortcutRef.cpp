#include "register/register_classes.h"
#include <godot_cpp/classes/shortcut.hpp>

using namespace godot;

void register_classes_ShortcutRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Shortcut>>("ShortcutRef").constructor<Shortcut *>();
}