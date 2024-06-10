#include "register/register_classes.h"
#include <godot_cpp/classes/editor_script.hpp>

using namespace godot;

void register_classes_EditorScriptRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorScript>>("EditorScriptRef").constructor<EditorScript *>();
}