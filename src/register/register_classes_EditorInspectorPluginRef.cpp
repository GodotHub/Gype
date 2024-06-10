#include "register/register_classes.h"
#include <godot_cpp/classes/editor_inspector_plugin.hpp>

using namespace godot;

void register_classes_EditorInspectorPluginRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorInspectorPlugin>>("EditorInspectorPluginRef").constructor<EditorInspectorPlugin *>();
}