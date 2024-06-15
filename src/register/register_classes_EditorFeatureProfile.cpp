#include <godot_cpp/classes/editor_feature_profile.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_EditorFeatureProfile() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<EditorFeatureProfile>("EditorFeatureProfile")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<void(EditorFeatureProfile::*)(const StringName &,bool)>(&EditorFeatureProfile::set_disable_class)>("set_disable_class")
            .fun<static_cast<bool(EditorFeatureProfile::*)(const StringName &)const>(&EditorFeatureProfile::is_class_disabled)>("is_class_disabled")
            .fun<static_cast<void(EditorFeatureProfile::*)(const StringName &,bool)>(&EditorFeatureProfile::set_disable_class_editor)>("set_disable_class_editor")
            .fun<static_cast<bool(EditorFeatureProfile::*)(const StringName &)const>(&EditorFeatureProfile::is_class_editor_disabled)>("is_class_editor_disabled")
            .fun<static_cast<void(EditorFeatureProfile::*)(const StringName &,const StringName &,bool)>(&EditorFeatureProfile::set_disable_class_property)>("set_disable_class_property")
            .fun<static_cast<bool(EditorFeatureProfile::*)(const StringName &,const StringName &)const>(&EditorFeatureProfile::is_class_property_disabled)>("is_class_property_disabled")
            .fun<static_cast<void(EditorFeatureProfile::*)(EditorFeatureProfile::Feature,bool)>(&EditorFeatureProfile::set_disable_feature)>("set_disable_feature")
            .fun<static_cast<bool(EditorFeatureProfile::*)(EditorFeatureProfile::Feature)const>(&EditorFeatureProfile::is_feature_disabled)>("is_feature_disabled")
            .fun<static_cast<String(EditorFeatureProfile::*)(EditorFeatureProfile::Feature)>(&EditorFeatureProfile::get_feature_name)>("get_feature_name")
            .fun<static_cast<Error(EditorFeatureProfile::*)(const String &)>(&EditorFeatureProfile::save_to_file)>("save_to_file")
            .fun<static_cast<Error(EditorFeatureProfile::*)(const String &)>(&EditorFeatureProfile::load_from_file)>("load_from_file")
;    qjs::Value _Feature = context->newObject();
    _Feature["FEATURE_3D"] = EditorFeatureProfile::Feature::FEATURE_3D;
    _Feature["FEATURE_SCRIPT"] = EditorFeatureProfile::Feature::FEATURE_SCRIPT;
    _Feature["FEATURE_ASSET_LIB"] = EditorFeatureProfile::Feature::FEATURE_ASSET_LIB;
    _Feature["FEATURE_SCENE_TREE"] = EditorFeatureProfile::Feature::FEATURE_SCENE_TREE;
    _Feature["FEATURE_NODE_DOCK"] = EditorFeatureProfile::Feature::FEATURE_NODE_DOCK;
    _Feature["FEATURE_FILESYSTEM_DOCK"] = EditorFeatureProfile::Feature::FEATURE_FILESYSTEM_DOCK;
    _Feature["FEATURE_IMPORT_DOCK"] = EditorFeatureProfile::Feature::FEATURE_IMPORT_DOCK;
    _Feature["FEATURE_HISTORY_DOCK"] = EditorFeatureProfile::Feature::FEATURE_HISTORY_DOCK;
    _Feature["FEATURE_MAX"] = EditorFeatureProfile::Feature::FEATURE_MAX;
    _module.add("Feature", std::move(_Feature));
}