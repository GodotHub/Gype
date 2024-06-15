#include <godot_cpp/classes/scene_state.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SceneState() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SceneState>("SceneState")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<int32_t(SceneState::*)()const>(&SceneState::get_node_count)>("get_node_count")
            .fun<static_cast<StringName(SceneState::*)(int32_t)const>(&SceneState::get_node_type)>("get_node_type")
            .fun<static_cast<StringName(SceneState::*)(int32_t)const>(&SceneState::get_node_name)>("get_node_name")
            .fun<static_cast<NodePath(SceneState::*)(int32_t,bool)const>(&SceneState::get_node_path)>("get_node_path")
            .fun<static_cast<NodePath(SceneState::*)(int32_t)const>(&SceneState::get_node_owner_path)>("get_node_owner_path")
            .fun<static_cast<bool(SceneState::*)(int32_t)const>(&SceneState::is_node_instance_placeholder)>("is_node_instance_placeholder")
            .fun<static_cast<String(SceneState::*)(int32_t)const>(&SceneState::get_node_instance_placeholder)>("get_node_instance_placeholder")
            .fun<static_cast<Ref<PackedScene>(SceneState::*)(int32_t)const>(&SceneState::get_node_instance)>("get_node_instance")
            .fun<static_cast<PackedStringArray(SceneState::*)(int32_t)const>(&SceneState::get_node_groups)>("get_node_groups")
            .fun<static_cast<int32_t(SceneState::*)(int32_t)const>(&SceneState::get_node_index)>("get_node_index")
            .fun<static_cast<int32_t(SceneState::*)(int32_t)const>(&SceneState::get_node_property_count)>("get_node_property_count")
            .fun<static_cast<StringName(SceneState::*)(int32_t,int32_t)const>(&SceneState::get_node_property_name)>("get_node_property_name")
            .fun<static_cast<Variant(SceneState::*)(int32_t,int32_t)const>(&SceneState::get_node_property_value)>("get_node_property_value")
            .fun<static_cast<int32_t(SceneState::*)()const>(&SceneState::get_connection_count)>("get_connection_count")
            .fun<static_cast<NodePath(SceneState::*)(int32_t)const>(&SceneState::get_connection_source)>("get_connection_source")
            .fun<static_cast<StringName(SceneState::*)(int32_t)const>(&SceneState::get_connection_signal)>("get_connection_signal")
            .fun<static_cast<NodePath(SceneState::*)(int32_t)const>(&SceneState::get_connection_target)>("get_connection_target")
            .fun<static_cast<StringName(SceneState::*)(int32_t)const>(&SceneState::get_connection_method)>("get_connection_method")
            .fun<static_cast<int32_t(SceneState::*)(int32_t)const>(&SceneState::get_connection_flags)>("get_connection_flags")
            .fun<static_cast<Array(SceneState::*)(int32_t)const>(&SceneState::get_connection_binds)>("get_connection_binds")
            .fun<static_cast<int32_t(SceneState::*)(int32_t)const>(&SceneState::get_connection_unbinds)>("get_connection_unbinds")
;    qjs::Value _GenEditState = context->newObject();
    _GenEditState["GEN_EDIT_STATE_DISABLED"] = SceneState::GenEditState::GEN_EDIT_STATE_DISABLED;
    _GenEditState["GEN_EDIT_STATE_INSTANCE"] = SceneState::GenEditState::GEN_EDIT_STATE_INSTANCE;
    _GenEditState["GEN_EDIT_STATE_MAIN"] = SceneState::GenEditState::GEN_EDIT_STATE_MAIN;
    _GenEditState["GEN_EDIT_STATE_MAIN_INHERITED"] = SceneState::GenEditState::GEN_EDIT_STATE_MAIN_INHERITED;
    _module.add("GenEditState", std::move(_GenEditState));
}