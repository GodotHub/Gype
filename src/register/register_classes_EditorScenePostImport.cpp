#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_scene_post_import.hpp>

using namespace godot;

void register_classes_EditorScenePostImport() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorScenePostImport>("EditorScenePostImport")
           .constructor<>()
		    .fun<static_cast<Object *(EditorScenePostImport::*)(Node *)>(&EditorScenePostImport::_post_import)>("_post_import")
		    .fun<static_cast<String(EditorScenePostImport::*)()const>(&EditorScenePostImport::get_source_file)>("get_source_file")
;}