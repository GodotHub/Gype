#include <godot_cpp/classes/scene_replication_config.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SceneReplicationConfig() {
	qjs::Context::Module &_module = _General;
	_module.class_<SceneReplicationConfig>("SceneReplicationConfig")
			.constructor<>()
			.fun<static_cast<TypedArray<NodePath> (SceneReplicationConfig::*)() const>(&SceneReplicationConfig::get_properties)>("get_properties")
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, int32_t)>(&SceneReplicationConfig::add_property)>("add_property")
			.fun<static_cast<bool (SceneReplicationConfig::*)(const NodePath &) const>(&SceneReplicationConfig::has_property)>("has_property")
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::remove_property)>("remove_property")
			.fun<static_cast<int32_t (SceneReplicationConfig::*)(const NodePath &) const>(&SceneReplicationConfig::property_get_index)>("property_get_index")
			.fun<static_cast<bool (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::property_get_spawn)>("property_get_spawn")
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, bool)>(&SceneReplicationConfig::property_set_spawn)>("property_set_spawn")
			.fun<static_cast<SceneReplicationConfig::ReplicationMode (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::property_get_replication_mode)>("property_get_replication_mode")
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, SceneReplicationConfig::ReplicationMode)>(&SceneReplicationConfig::property_set_replication_mode)>("property_set_replication_mode")
			.fun<static_cast<bool (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::property_get_sync)>("property_get_sync")
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, bool)>(&SceneReplicationConfig::property_set_sync)>("property_set_sync")
			.fun<static_cast<bool (SceneReplicationConfig::*)(const NodePath &)>(&SceneReplicationConfig::property_get_watch)>("property_get_watch")
			.fun<static_cast<void (SceneReplicationConfig::*)(const NodePath &, bool)>(&SceneReplicationConfig::property_set_watch)>("property_set_watch");
}