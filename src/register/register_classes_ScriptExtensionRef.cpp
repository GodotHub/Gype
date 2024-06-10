#include "register/register_classes.h"
#include <godot_cpp/classes/script_extension.hpp>

using namespace godot;

void register_classes_ScriptExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ScriptExtension>>("ScriptExtensionRef").constructor<ScriptExtension *>();
}