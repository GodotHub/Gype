#include "register/register_classes.h"
#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>

using namespace godot;

void register_classes_EditorScenePostImportPluginRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorScenePostImportPlugin>>("EditorScenePostImportPluginRef").constructor<EditorScenePostImportPlugin *>();
}