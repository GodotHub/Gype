#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_scene_format_importer_gltf.hpp>

using namespace godot;

void register_classes_EditorSceneFormatImporterGLTF() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorSceneFormatImporterGLTF>("EditorSceneFormatImporterGLTF")
           .constructor<>()
;}