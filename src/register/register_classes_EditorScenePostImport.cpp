#include <godot_cpp/classes/editor_scene_post_import.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorScenePostImport() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorScenePostImport>("EditorScenePostImport")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Object *(EditorScenePostImport::*)(Node *)>(&EditorScenePostImport::_post_import)>("_post_import")
            .fun<static_cast<String(EditorScenePostImport::*)()const>(&EditorScenePostImport::get_source_file)>("get_source_file")
;}