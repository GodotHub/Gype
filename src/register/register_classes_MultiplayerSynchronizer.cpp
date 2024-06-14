
#include <godot_cpp/classes/multiplayer_synchronizer.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/scene_replication_config.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiplayerSynchronizer() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<MultiplayerSynchronizer>("MultiplayerSynchronizer")
			.constructor<>()
			.base<Node>()
			.property<static_cast<NodePath (MultiplayerSynchronizer::*)() const>(&MultiplayerSynchronizer::get_root_path), static_cast<void (MultiplayerSynchronizer::*)(const NodePath &)>(&MultiplayerSynchronizer::set_root_path)>((new std::string("root_path"))->c_str())
			.property<static_cast<double (MultiplayerSynchronizer::*)() const>(&MultiplayerSynchronizer::get_replication_interval), static_cast<void (MultiplayerSynchronizer::*)(double)>(&MultiplayerSynchronizer::set_replication_interval)>((new std::string("replication_interval"))->c_str())
			.property<static_cast<double (MultiplayerSynchronizer::*)() const>(&MultiplayerSynchronizer::get_delta_interval), static_cast<void (MultiplayerSynchronizer::*)(double)>(&MultiplayerSynchronizer::set_delta_interval)>((new std::string("delta_interval"))->c_str())
			.property<static_cast<Ref<SceneReplicationConfig> (MultiplayerSynchronizer::*)()>(&MultiplayerSynchronizer::get_replication_config), static_cast<void (MultiplayerSynchronizer::*)(const Ref<SceneReplicationConfig> &)>(&MultiplayerSynchronizer::set_replication_config)>((new std::string("replication_config"))->c_str())
			.property<static_cast<MultiplayerSynchronizer::VisibilityUpdateMode (MultiplayerSynchronizer::*)() const>(&MultiplayerSynchronizer::get_visibility_update_mode), static_cast<void (MultiplayerSynchronizer::*)(MultiplayerSynchronizer::VisibilityUpdateMode)>(&MultiplayerSynchronizer::set_visibility_update_mode)>((new std::string("visibility_update_mode"))->c_str())
			.property<static_cast<bool (MultiplayerSynchronizer::*)() const>(&MultiplayerSynchronizer::is_visibility_public), static_cast<void (MultiplayerSynchronizer::*)(bool)>(&MultiplayerSynchronizer::set_visibility_public)>((new std::string("public_visibility"))->c_str())
			.fun<static_cast<void (MultiplayerSynchronizer::*)(int32_t)>(&MultiplayerSynchronizer::update_visibility)>((new std::string("update_visibility"))->c_str())
			.fun<static_cast<void (MultiplayerSynchronizer::*)(const Callable &)>(&MultiplayerSynchronizer::add_visibility_filter)>((new std::string("add_visibility_filter"))->c_str())
			.fun<static_cast<void (MultiplayerSynchronizer::*)(const Callable &)>(&MultiplayerSynchronizer::remove_visibility_filter)>((new std::string("remove_visibility_filter"))->c_str())
			.fun<static_cast<void (MultiplayerSynchronizer::*)(int32_t, bool)>(&MultiplayerSynchronizer::set_visibility_for)>((new std::string("set_visibility_for"))->c_str())
			.fun<static_cast<bool (MultiplayerSynchronizer::*)(int32_t) const>(&MultiplayerSynchronizer::get_visibility_for)>((new std::string("get_visibility_for"))->c_str());
	qjs::Value _VisibilityUpdateMode = context->newObject();
	_VisibilityUpdateMode[(new std::string("VISIBILITY_PROCESS_IDLE"))->c_str()] = MultiplayerSynchronizer::VisibilityUpdateMode::VISIBILITY_PROCESS_IDLE;
	_VisibilityUpdateMode[(new std::string("VISIBILITY_PROCESS_PHYSICS"))->c_str()] = MultiplayerSynchronizer::VisibilityUpdateMode::VISIBILITY_PROCESS_PHYSICS;
	_VisibilityUpdateMode[(new std::string("VISIBILITY_PROCESS_NONE"))->c_str()] = MultiplayerSynchronizer::VisibilityUpdateMode::VISIBILITY_PROCESS_NONE;
	_module.add("VisibilityUpdateMode", std::move(_VisibilityUpdateMode));
}