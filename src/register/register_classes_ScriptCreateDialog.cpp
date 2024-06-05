#include <godot_cpp/classes/script_create_dialog.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_ScriptCreateDialog() {
	qjs::Context::Module &_module = _Node;
	_module.class_<ScriptCreateDialog>("ScriptCreateDialog")
			.constructor<>()
			.fun<static_cast<void (ScriptCreateDialog::*)(const String &, const String &, bool, bool)>(&ScriptCreateDialog::config)>("config");
}