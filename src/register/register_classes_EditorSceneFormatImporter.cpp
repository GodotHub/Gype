#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorSceneFormatImporter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorSceneFormatImporter>("EditorSceneFormatImporter")
            .constructor<>()
            .base<RefCounted>()
            .static_fun<&EditorSceneFormatImporter::IMPORT_SCENE>("IMPORT_SCENE")
            .static_fun<&EditorSceneFormatImporter::IMPORT_ANIMATION>("IMPORT_ANIMATION")
            .static_fun<&EditorSceneFormatImporter::IMPORT_FAIL_ON_MISSING_DEPENDENCIES>("IMPORT_FAIL_ON_MISSING_DEPENDENCIES")
            .static_fun<&EditorSceneFormatImporter::IMPORT_GENERATE_TANGENT_ARRAYS>("IMPORT_GENERATE_TANGENT_ARRAYS")
            .static_fun<&EditorSceneFormatImporter::IMPORT_USE_NAMED_SKIN_BINDS>("IMPORT_USE_NAMED_SKIN_BINDS")
            .static_fun<&EditorSceneFormatImporter::IMPORT_DISCARD_MESHES_AND_MATERIALS>("IMPORT_DISCARD_MESHES_AND_MATERIALS")
            .static_fun<&EditorSceneFormatImporter::IMPORT_FORCE_DISABLE_MESH_COMPRESSION>("IMPORT_FORCE_DISABLE_MESH_COMPRESSION")
            .fun<static_cast<uint32_t(EditorSceneFormatImporter::*)()const>(&EditorSceneFormatImporter::_get_import_flags)>("_get_import_flags")
            .fun<static_cast<PackedStringArray(EditorSceneFormatImporter::*)()const>(&EditorSceneFormatImporter::_get_extensions)>("_get_extensions")
            .fun<static_cast<Object *(EditorSceneFormatImporter::*)(const String &,uint32_t,const Dictionary &)>(&EditorSceneFormatImporter::_import_scene)>("_import_scene")
            .fun<static_cast<void(EditorSceneFormatImporter::*)(const String &)>(&EditorSceneFormatImporter::_get_import_options)>("_get_import_options")
            .fun<static_cast<Variant(EditorSceneFormatImporter::*)(const String &,bool,const String &)const>(&EditorSceneFormatImporter::_get_option_visibility)>("_get_option_visibility")
;}