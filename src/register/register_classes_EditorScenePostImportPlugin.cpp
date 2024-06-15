#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorScenePostImportPlugin() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorScenePostImportPlugin>("EditorScenePostImportPlugin")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<void(EditorScenePostImportPlugin::*)(int32_t)>(&EditorScenePostImportPlugin::_get_internal_import_options)>("_get_internal_import_options")
            .fun<static_cast<Variant(EditorScenePostImportPlugin::*)(int32_t,bool,const String &)const>(&EditorScenePostImportPlugin::_get_internal_option_visibility)>("_get_internal_option_visibility")
            .fun<static_cast<Variant(EditorScenePostImportPlugin::*)(int32_t,const String &)const>(&EditorScenePostImportPlugin::_get_internal_option_update_view_required)>("_get_internal_option_update_view_required")
            .fun<static_cast<void(EditorScenePostImportPlugin::*)(int32_t,Node *,Node *,const Ref<Resource> &)>(&EditorScenePostImportPlugin::_internal_process)>("_internal_process")
            .fun<static_cast<void(EditorScenePostImportPlugin::*)(const String &)>(&EditorScenePostImportPlugin::_get_import_options)>("_get_import_options")
            .fun<static_cast<Variant(EditorScenePostImportPlugin::*)(const String &,bool,const String &)const>(&EditorScenePostImportPlugin::_get_option_visibility)>("_get_option_visibility")
            .fun<static_cast<void(EditorScenePostImportPlugin::*)(Node *)>(&EditorScenePostImportPlugin::_pre_process)>("_pre_process")
            .fun<static_cast<void(EditorScenePostImportPlugin::*)(Node *)>(&EditorScenePostImportPlugin::_post_process)>("_post_process")
            .fun<static_cast<Variant(EditorScenePostImportPlugin::*)(const StringName &)const>(&EditorScenePostImportPlugin::get_option_value)>("get_option_value")
            .fun<static_cast<void(EditorScenePostImportPlugin::*)(const String &,const Variant &)>(&EditorScenePostImportPlugin::add_import_option)>("add_import_option")
            .fun<static_cast<void(EditorScenePostImportPlugin::*)(Variant::Type,const String &,const Variant &,PropertyHint,const String &,int32_t)>(&EditorScenePostImportPlugin::add_import_option_advanced)>("add_import_option_advanced")
;    qjs::Value _InternalImportCategory = context->newObject();
    _InternalImportCategory["INTERNAL_IMPORT_CATEGORY_NODE"] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_NODE;
    _InternalImportCategory["INTERNAL_IMPORT_CATEGORY_MESH_3D_NODE"] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_MESH_3D_NODE;
    _InternalImportCategory["INTERNAL_IMPORT_CATEGORY_MESH"] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_MESH;
    _InternalImportCategory["INTERNAL_IMPORT_CATEGORY_MATERIAL"] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_MATERIAL;
    _InternalImportCategory["INTERNAL_IMPORT_CATEGORY_ANIMATION"] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_ANIMATION;
    _InternalImportCategory["INTERNAL_IMPORT_CATEGORY_ANIMATION_NODE"] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_ANIMATION_NODE;
    _InternalImportCategory["INTERNAL_IMPORT_CATEGORY_SKELETON_3D_NODE"] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_SKELETON_3D_NODE;
    _InternalImportCategory["INTERNAL_IMPORT_CATEGORY_MAX"] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_MAX;
    _module.add("InternalImportCategory", std::move(_InternalImportCategory));
}