#include "register/register_classes.h"
#include <godot_cpp/classes/editor_scene_format_importer.hpp>

using namespace godot;

void register_classes_EditorSceneFormatImporterRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<EditorSceneFormatImporter>>("EditorSceneFormatImporterRef").constructor<EditorSceneFormatImporter *>();
}