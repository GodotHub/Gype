
#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_EditorScenePostImportPlugin() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<EditorScenePostImportPlugin>("EditorScenePostImportPlugin")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (EditorScenePostImportPlugin::*)(int32_t)>(&EditorScenePostImportPlugin::_get_internal_import_options)>((new std::string("_get_internal_import_options"))->c_str())
			.fun<static_cast<Variant (EditorScenePostImportPlugin::*)(int32_t, bool, const String &) const>(&EditorScenePostImportPlugin::_get_internal_option_visibility)>((new std::string("_get_internal_option_visibility"))->c_str())
			.fun<static_cast<Variant (EditorScenePostImportPlugin::*)(int32_t, const String &) const>(&EditorScenePostImportPlugin::_get_internal_option_update_view_required)>((new std::string("_get_internal_option_update_view_required"))->c_str())
			.fun<static_cast<void (EditorScenePostImportPlugin::*)(int32_t, Node *, Node *, const Ref<Resource> &)>(&EditorScenePostImportPlugin::_internal_process)>((new std::string("_internal_process"))->c_str())
			.fun<static_cast<void (EditorScenePostImportPlugin::*)(const String &)>(&EditorScenePostImportPlugin::_get_import_options)>((new std::string("_get_import_options"))->c_str())
			.fun<static_cast<Variant (EditorScenePostImportPlugin::*)(const String &, bool, const String &) const>(&EditorScenePostImportPlugin::_get_option_visibility)>((new std::string("_get_option_visibility"))->c_str())
			.fun<static_cast<void (EditorScenePostImportPlugin::*)(Node *)>(&EditorScenePostImportPlugin::_pre_process)>((new std::string("_pre_process"))->c_str())
			.fun<static_cast<void (EditorScenePostImportPlugin::*)(Node *)>(&EditorScenePostImportPlugin::_post_process)>((new std::string("_post_process"))->c_str())
			.fun<static_cast<Variant (EditorScenePostImportPlugin::*)(const StringName &) const>(&EditorScenePostImportPlugin::get_option_value)>((new std::string("get_option_value"))->c_str())
			.fun<static_cast<void (EditorScenePostImportPlugin::*)(const String &, const Variant &)>(&EditorScenePostImportPlugin::add_import_option)>((new std::string("add_import_option"))->c_str())
			.fun<static_cast<void (EditorScenePostImportPlugin::*)(Variant::Type, const String &, const Variant &, PropertyHint, const String &, int32_t)>(&EditorScenePostImportPlugin::add_import_option_advanced)>((new std::string("add_import_option_advanced"))->c_str());
	qjs::Value _InternalImportCategory = context->newObject();
	_InternalImportCategory[(new std::string("INTERNAL_IMPORT_CATEGORY_NODE"))->c_str()] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_NODE;
	_InternalImportCategory[(new std::string("INTERNAL_IMPORT_CATEGORY_MESH_3D_NODE"))->c_str()] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_MESH_3D_NODE;
	_InternalImportCategory[(new std::string("INTERNAL_IMPORT_CATEGORY_MESH"))->c_str()] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_MESH;
	_InternalImportCategory[(new std::string("INTERNAL_IMPORT_CATEGORY_MATERIAL"))->c_str()] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_MATERIAL;
	_InternalImportCategory[(new std::string("INTERNAL_IMPORT_CATEGORY_ANIMATION"))->c_str()] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_ANIMATION;
	_InternalImportCategory[(new std::string("INTERNAL_IMPORT_CATEGORY_ANIMATION_NODE"))->c_str()] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_ANIMATION_NODE;
	_InternalImportCategory[(new std::string("INTERNAL_IMPORT_CATEGORY_SKELETON_3D_NODE"))->c_str()] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_SKELETON_3D_NODE;
	_InternalImportCategory[(new std::string("INTERNAL_IMPORT_CATEGORY_MAX"))->c_str()] = EditorScenePostImportPlugin::InternalImportCategory::INTERNAL_IMPORT_CATEGORY_MAX;
	_module.add("InternalImportCategory", std::move(_InternalImportCategory));
}