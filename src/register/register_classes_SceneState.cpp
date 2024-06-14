
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/scene_state.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SceneState() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SceneState>("SceneState")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<int32_t (SceneState::*)() const>(&SceneState::get_node_count)>((new std::string("get_node_count"))->c_str())
			.fun<static_cast<StringName (SceneState::*)(int32_t) const>(&SceneState::get_node_type)>((new std::string("get_node_type"))->c_str())
			.fun<static_cast<StringName (SceneState::*)(int32_t) const>(&SceneState::get_node_name)>((new std::string("get_node_name"))->c_str())
			.fun<static_cast<NodePath (SceneState::*)(int32_t, bool) const>(&SceneState::get_node_path)>((new std::string("get_node_path"))->c_str())
			.fun<static_cast<NodePath (SceneState::*)(int32_t) const>(&SceneState::get_node_owner_path)>((new std::string("get_node_owner_path"))->c_str())
			.fun<static_cast<bool (SceneState::*)(int32_t) const>(&SceneState::is_node_instance_placeholder)>((new std::string("is_node_instance_placeholder"))->c_str())
			.fun<static_cast<String (SceneState::*)(int32_t) const>(&SceneState::get_node_instance_placeholder)>((new std::string("get_node_instance_placeholder"))->c_str())
			.fun<static_cast<Ref<PackedScene> (SceneState::*)(int32_t) const>(&SceneState::get_node_instance)>((new std::string("get_node_instance"))->c_str())
			.fun<static_cast<PackedStringArray (SceneState::*)(int32_t) const>(&SceneState::get_node_groups)>((new std::string("get_node_groups"))->c_str())
			.fun<static_cast<int32_t (SceneState::*)(int32_t) const>(&SceneState::get_node_index)>((new std::string("get_node_index"))->c_str())
			.fun<static_cast<int32_t (SceneState::*)(int32_t) const>(&SceneState::get_node_property_count)>((new std::string("get_node_property_count"))->c_str())
			.fun<static_cast<StringName (SceneState::*)(int32_t, int32_t) const>(&SceneState::get_node_property_name)>((new std::string("get_node_property_name"))->c_str())
			.fun<static_cast<Variant (SceneState::*)(int32_t, int32_t) const>(&SceneState::get_node_property_value)>((new std::string("get_node_property_value"))->c_str())
			.fun<static_cast<int32_t (SceneState::*)() const>(&SceneState::get_connection_count)>((new std::string("get_connection_count"))->c_str())
			.fun<static_cast<NodePath (SceneState::*)(int32_t) const>(&SceneState::get_connection_source)>((new std::string("get_connection_source"))->c_str())
			.fun<static_cast<StringName (SceneState::*)(int32_t) const>(&SceneState::get_connection_signal)>((new std::string("get_connection_signal"))->c_str())
			.fun<static_cast<NodePath (SceneState::*)(int32_t) const>(&SceneState::get_connection_target)>((new std::string("get_connection_target"))->c_str())
			.fun<static_cast<StringName (SceneState::*)(int32_t) const>(&SceneState::get_connection_method)>((new std::string("get_connection_method"))->c_str())
			.fun<static_cast<int32_t (SceneState::*)(int32_t) const>(&SceneState::get_connection_flags)>((new std::string("get_connection_flags"))->c_str())
			.fun<static_cast<Array (SceneState::*)(int32_t) const>(&SceneState::get_connection_binds)>((new std::string("get_connection_binds"))->c_str())
			.fun<static_cast<int32_t (SceneState::*)(int32_t) const>(&SceneState::get_connection_unbinds)>((new std::string("get_connection_unbinds"))->c_str());
	qjs::Value _GenEditState = context->newObject();
	_GenEditState[(new std::string("GEN_EDIT_STATE_DISABLED"))->c_str()] = SceneState::GenEditState::GEN_EDIT_STATE_DISABLED;
	_GenEditState[(new std::string("GEN_EDIT_STATE_INSTANCE"))->c_str()] = SceneState::GenEditState::GEN_EDIT_STATE_INSTANCE;
	_GenEditState[(new std::string("GEN_EDIT_STATE_MAIN"))->c_str()] = SceneState::GenEditState::GEN_EDIT_STATE_MAIN;
	_GenEditState[(new std::string("GEN_EDIT_STATE_MAIN_INHERITED"))->c_str()] = SceneState::GenEditState::GEN_EDIT_STATE_MAIN_INHERITED;
	_module.add("GenEditState", std::move(_GenEditState));
}