#include <godot_cpp/classes/editor_scene_format_importer_gltf.hpp>
#include <godot_cpp/classes/editor_scene_format_importer.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorSceneFormatImporterGLTF() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorSceneFormatImporterGLTF>("EditorSceneFormatImporterGLTF")
            .constructor<>()
            .base<EditorSceneFormatImporter>()
;}