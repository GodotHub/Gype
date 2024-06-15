#include <godot_cpp/classes/multiplayer_synchronizer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/scene_replication_config.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MultiplayerSynchronizer() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<MultiplayerSynchronizer>("MultiplayerSynchronizer")
            .constructor<>()
            .base<Node>()
            .property<static_cast<NodePath(MultiplayerSynchronizer::*)()const>(&MultiplayerSynchronizer::get_root_path),static_cast<void(MultiplayerSynchronizer::*)(const NodePath &)>(&MultiplayerSynchronizer::set_root_path)>("root_path")
            .property<static_cast<double(MultiplayerSynchronizer::*)()const>(&MultiplayerSynchronizer::get_replication_interval),static_cast<void(MultiplayerSynchronizer::*)(double)>(&MultiplayerSynchronizer::set_replication_interval)>("replication_interval")
            .property<static_cast<double(MultiplayerSynchronizer::*)()const>(&MultiplayerSynchronizer::get_delta_interval),static_cast<void(MultiplayerSynchronizer::*)(double)>(&MultiplayerSynchronizer::set_delta_interval)>("delta_interval")
            .property<static_cast<Ref<SceneReplicationConfig>(MultiplayerSynchronizer::*)()>(&MultiplayerSynchronizer::get_replication_config),static_cast<void(MultiplayerSynchronizer::*)(const Ref<SceneReplicationConfig> &)>(&MultiplayerSynchronizer::set_replication_config)>("replication_config")
            .property<static_cast<MultiplayerSynchronizer::VisibilityUpdateMode(MultiplayerSynchronizer::*)()const>(&MultiplayerSynchronizer::get_visibility_update_mode),static_cast<void(MultiplayerSynchronizer::*)(MultiplayerSynchronizer::VisibilityUpdateMode)>(&MultiplayerSynchronizer::set_visibility_update_mode)>("visibility_update_mode")
            .property<static_cast<bool(MultiplayerSynchronizer::*)()const>(&MultiplayerSynchronizer::is_visibility_public),static_cast<void(MultiplayerSynchronizer::*)(bool)>(&MultiplayerSynchronizer::set_visibility_public)>("public_visibility")
            .fun<static_cast<void(MultiplayerSynchronizer::*)(int32_t)>(&MultiplayerSynchronizer::update_visibility)>("update_visibility")
            .fun<static_cast<void(MultiplayerSynchronizer::*)(const Callable &)>(&MultiplayerSynchronizer::add_visibility_filter)>("add_visibility_filter")
            .fun<static_cast<void(MultiplayerSynchronizer::*)(const Callable &)>(&MultiplayerSynchronizer::remove_visibility_filter)>("remove_visibility_filter")
            .fun<static_cast<void(MultiplayerSynchronizer::*)(int32_t,bool)>(&MultiplayerSynchronizer::set_visibility_for)>("set_visibility_for")
            .fun<static_cast<bool(MultiplayerSynchronizer::*)(int32_t)const>(&MultiplayerSynchronizer::get_visibility_for)>("get_visibility_for")
;    qjs::Value _VisibilityUpdateMode = context->newObject();
    _VisibilityUpdateMode["VISIBILITY_PROCESS_IDLE"] = MultiplayerSynchronizer::VisibilityUpdateMode::VISIBILITY_PROCESS_IDLE;
    _VisibilityUpdateMode["VISIBILITY_PROCESS_PHYSICS"] = MultiplayerSynchronizer::VisibilityUpdateMode::VISIBILITY_PROCESS_PHYSICS;
    _VisibilityUpdateMode["VISIBILITY_PROCESS_NONE"] = MultiplayerSynchronizer::VisibilityUpdateMode::VISIBILITY_PROCESS_NONE;
    _module.add("VisibilityUpdateMode", std::move(_VisibilityUpdateMode));
}