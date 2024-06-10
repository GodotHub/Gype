#include <godot_cpp/classes/editor_scene_format_importer_gltf.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorSceneFormatImporterGLTF() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorSceneFormatImporterGLTF>("EditorSceneFormatImporterGLTF")
			.constructor<>();
}