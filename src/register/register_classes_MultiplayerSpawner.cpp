
#include <godot_cpp/classes/multiplayer_spawner.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiplayerSpawner() {
	qjs::Context::Module &_module = get_Node_module();
	_module.class_<MultiplayerSpawner>("MultiplayerSpawner")
			.constructor<>()
			.base<Node>()
			.property<static_cast<NodePath (MultiplayerSpawner::*)() const>(&MultiplayerSpawner::get_spawn_path), static_cast<void (MultiplayerSpawner::*)(const NodePath &)>(&MultiplayerSpawner::set_spawn_path)>((new std::string("spawn_path"))->c_str())
			.property<static_cast<uint32_t (MultiplayerSpawner::*)() const>(&MultiplayerSpawner::get_spawn_limit), static_cast<void (MultiplayerSpawner::*)(uint32_t)>(&MultiplayerSpawner::set_spawn_limit)>((new std::string("spawn_limit"))->c_str())
			.property<static_cast<Callable (MultiplayerSpawner::*)() const>(&MultiplayerSpawner::get_spawn_function), static_cast<void (MultiplayerSpawner::*)(const Callable &)>(&MultiplayerSpawner::set_spawn_function)>((new std::string("spawn_function"))->c_str())
			.fun<static_cast<void (MultiplayerSpawner::*)(const String &)>(&MultiplayerSpawner::add_spawnable_scene)>((new std::string("add_spawnable_scene"))->c_str())
			.fun<static_cast<int32_t (MultiplayerSpawner::*)() const>(&MultiplayerSpawner::get_spawnable_scene_count)>((new std::string("get_spawnable_scene_count"))->c_str())
			.fun<static_cast<String (MultiplayerSpawner::*)(int32_t) const>(&MultiplayerSpawner::get_spawnable_scene)>((new std::string("get_spawnable_scene"))->c_str())
			.fun<static_cast<void (MultiplayerSpawner::*)()>(&MultiplayerSpawner::clear_spawnable_scenes)>((new std::string("clear_spawnable_scenes"))->c_str())
			.fun<static_cast<Node *(MultiplayerSpawner::*)(const Variant &)>(&MultiplayerSpawner::spawn)>((new std::string("spawn"))->c_str());
}