#include "register/register_classes.h"
#include <godot_cpp/classes/script.hpp>

using namespace godot;

void register_classes_ScriptRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Script>>("ScriptRef").constructor<Script *>();
}