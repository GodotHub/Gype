#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>

using namespace godot;

void register_classes_EditorScenePostImportPlugin() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorScenePostImportPlugin>("EditorScenePostImportPlugin")
           .constructor<>()
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
;}