#include <godot_cpp/classes/editor_feature_profile.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorFeatureProfile() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorFeatureProfile>("EditorFeatureProfile")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (EditorFeatureProfile::*)(const StringName &, bool)>(&EditorFeatureProfile::set_disable_class)>((new std::string("set_disable_class"))->c_str())
			.fun<static_cast<bool (EditorFeatureProfile::*)(const StringName &) const>(&EditorFeatureProfile::is_class_disabled)>((new std::string("is_class_disabled"))->c_str())
			.fun<static_cast<void (EditorFeatureProfile::*)(const StringName &, bool)>(&EditorFeatureProfile::set_disable_class_editor)>((new std::string("set_disable_class_editor"))->c_str())
			.fun<static_cast<bool (EditorFeatureProfile::*)(const StringName &) const>(&EditorFeatureProfile::is_class_editor_disabled)>((new std::string("is_class_editor_disabled"))->c_str())
			.fun<static_cast<void (EditorFeatureProfile::*)(const StringName &, const StringName &, bool)>(&EditorFeatureProfile::set_disable_class_property)>((new std::string("set_disable_class_property"))->c_str())
			.fun<static_cast<bool (EditorFeatureProfile::*)(const StringName &, const StringName &) const>(&EditorFeatureProfile::is_class_property_disabled)>((new std::string("is_class_property_disabled"))->c_str())
			.fun<static_cast<void (EditorFeatureProfile::*)(EditorFeatureProfile::Feature, bool)>(&EditorFeatureProfile::set_disable_feature)>((new std::string("set_disable_feature"))->c_str())
			.fun<static_cast<bool (EditorFeatureProfile::*)(EditorFeatureProfile::Feature) const>(&EditorFeatureProfile::is_feature_disabled)>((new std::string("is_feature_disabled"))->c_str())
			.fun<static_cast<String (EditorFeatureProfile::*)(EditorFeatureProfile::Feature)>(&EditorFeatureProfile::get_feature_name)>((new std::string("get_feature_name"))->c_str())
			.fun<static_cast<Error (EditorFeatureProfile::*)(const String &)>(&EditorFeatureProfile::save_to_file)>((new std::string("save_to_file"))->c_str())
			.fun<static_cast<Error (EditorFeatureProfile::*)(const String &)>(&EditorFeatureProfile::load_from_file)>((new std::string("load_from_file"))->c_str());
	qjs::Value _Feature = context->newObject();
	_Feature[(new std::string("FEATURE_3D"))->c_str()] = EditorFeatureProfile::Feature::FEATURE_3D;
	_Feature[(new std::string("FEATURE_SCRIPT"))->c_str()] = EditorFeatureProfile::Feature::FEATURE_SCRIPT;
	_Feature[(new std::string("FEATURE_ASSET_LIB"))->c_str()] = EditorFeatureProfile::Feature::FEATURE_ASSET_LIB;
	_Feature[(new std::string("FEATURE_SCENE_TREE"))->c_str()] = EditorFeatureProfile::Feature::FEATURE_SCENE_TREE;
	_Feature[(new std::string("FEATURE_NODE_DOCK"))->c_str()] = EditorFeatureProfile::Feature::FEATURE_NODE_DOCK;
	_Feature[(new std::string("FEATURE_FILESYSTEM_DOCK"))->c_str()] = EditorFeatureProfile::Feature::FEATURE_FILESYSTEM_DOCK;
	_Feature[(new std::string("FEATURE_IMPORT_DOCK"))->c_str()] = EditorFeatureProfile::Feature::FEATURE_IMPORT_DOCK;
	_Feature[(new std::string("FEATURE_HISTORY_DOCK"))->c_str()] = EditorFeatureProfile::Feature::FEATURE_HISTORY_DOCK;
	_Feature[(new std::string("FEATURE_MAX"))->c_str()] = EditorFeatureProfile::Feature::FEATURE_MAX;
	_module.add("Feature", std::move(_Feature));
}