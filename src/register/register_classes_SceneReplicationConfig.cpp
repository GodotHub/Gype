
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/scene_replication_config.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SceneReplicationConfig() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SceneReplicationConfig>("SceneReplicationConfig")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<TypedArray<NodePath> (SceneReplicationConfig::*)() const>(&SceneReplicationConfig::get_properties)>((new std::string("get_properties"))->c_str())
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, int32_t)>(&SceneReplicationConfig::add_property)>((new std::string("add_property"))->c_str())
			.fun<static_cast<bool (SceneReplicationConfig::*)(const NodePath &) const>(&SceneReplicationConfig::has_property)>((new std::string("has_property"))->c_str())
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::remove_property)>((new std::string("remove_property"))->c_str())
			.fun<static_cast<int32_t (SceneReplicationConfig::*)(const NodePath &) const>(&SceneReplicationConfig::property_get_index)>((new std::string("property_get_index"))->c_str())
			.fun<static_cast<bool (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::property_get_spawn)>((new std::string("property_get_spawn"))->c_str())
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, bool)>(&SceneReplicationConfig::property_set_spawn)>((new std::string("property_set_spawn"))->c_str())
			.fun<static_cast<SceneReplicationConfig::ReplicationMode (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::property_get_replication_mode)>((new std::string("property_get_replication_mode"))->c_str())
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, SceneReplicationConfig::ReplicationMode)>(&SceneReplicationConfig::property_set_replication_mode)>((new std::string("property_set_replication_mode"))->c_str())
			.fun<static_cast<bool (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::property_get_sync)>((new std::string("property_get_sync"))->c_str())
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, bool)>(&SceneReplicationConfig::property_set_sync)>((new std::string("property_set_sync"))->c_str())
			.fun<static_cast<bool (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::property_get_watch)>((new std::string("property_get_watch"))->c_str())
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, bool)>(&SceneReplicationConfig::property_set_watch)>((new std::string("property_set_watch"))->c_str());
	qjs::Value _ReplicationMode = context->newObject();
	_ReplicationMode[(new std::string("REPLICATION_MODE_NEVER"))->c_str()] = SceneReplicationConfig::ReplicationMode::REPLICATION_MODE_NEVER;
	_ReplicationMode[(new std::string("REPLICATION_MODE_ALWAYS"))->c_str()] = SceneReplicationConfig::ReplicationMode::REPLICATION_MODE_ALWAYS;
	_ReplicationMode[(new std::string("REPLICATION_MODE_ON_CHANGE"))->c_str()] = SceneReplicationConfig::ReplicationMode::REPLICATION_MODE_ON_CHANGE;
	_module.add("ReplicationMode", std::move(_ReplicationMode));
}