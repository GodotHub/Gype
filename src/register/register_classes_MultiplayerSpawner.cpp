#include <godot_cpp/classes/multiplayer_spawner.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MultiplayerSpawner() {
    qjs::Context::Module &_module = get_Node_module();
    _module.class_<MultiplayerSpawner>("MultiplayerSpawner")
            .constructor<>()
            .base<Node>()
            .property<static_cast<NodePath(MultiplayerSpawner::*)()const>(&MultiplayerSpawner::get_spawn_path),static_cast<void(MultiplayerSpawner::*)(const NodePath &)>(&MultiplayerSpawner::set_spawn_path)>("spawn_path")
            .property<static_cast<uint32_t(MultiplayerSpawner::*)()const>(&MultiplayerSpawner::get_spawn_limit),static_cast<void(MultiplayerSpawner::*)(uint32_t)>(&MultiplayerSpawner::set_spawn_limit)>("spawn_limit")
            .property<static_cast<Callable(MultiplayerSpawner::*)()const>(&MultiplayerSpawner::get_spawn_function),static_cast<void(MultiplayerSpawner::*)(const Callable &)>(&MultiplayerSpawner::set_spawn_function)>("spawn_function")
            .fun<static_cast<void(MultiplayerSpawner::*)(const String &)>(&MultiplayerSpawner::add_spawnable_scene)>("add_spawnable_scene")
            .fun<static_cast<int32_t(MultiplayerSpawner::*)()const>(&MultiplayerSpawner::get_spawnable_scene_count)>("get_spawnable_scene_count")
            .fun<static_cast<String(MultiplayerSpawner::*)(int32_t)const>(&MultiplayerSpawner::get_spawnable_scene)>("get_spawnable_scene")
            .fun<static_cast<void(MultiplayerSpawner::*)()>(&MultiplayerSpawner::clear_spawnable_scenes)>("clear_spawnable_scenes")
            .fun<static_cast<Node *(MultiplayerSpawner::*)(const Variant &)>(&MultiplayerSpawner::spawn)>("spawn")
;}