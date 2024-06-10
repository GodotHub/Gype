#include "register/register_classes.h"
#include <godot_cpp/classes/editor_debugger_plugin.hpp>

using namespace godot;

void register_classes_EditorDebuggerPluginRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorDebuggerPlugin>>("EditorDebuggerPluginRef").constructor<EditorDebuggerPlugin *>();
}