#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/editor_feature_profile.hpp>

using namespace godot;

void register_classes_EditorFeatureProfile() {
    qjs::Context::Module &_module = _General;
    _module.class_<EditorFeatureProfile>("EditorFeatureProfile")
           .constructor<>()
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
;}