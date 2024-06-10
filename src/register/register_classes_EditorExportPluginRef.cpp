#include "register/register_classes.h"
#include <godot_cpp/classes/editor_export_plugin.hpp>

using namespace godot;

void register_classes_EditorExportPluginRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorExportPlugin>>("EditorExportPluginRef").constructor<EditorExportPlugin *>();
}