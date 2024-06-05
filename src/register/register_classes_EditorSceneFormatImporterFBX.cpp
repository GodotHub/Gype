#include <godot_cpp/classes/editor_scene_format_importer_fbx.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_EditorSceneFormatImporterFBX() {
	qjs::Context::Module &_module = _General;
	_module.class_<EditorSceneFormatImporterFBX>("EditorSceneFormatImporterFBX")
			.constructor<>();
}