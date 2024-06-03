#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/multiplayer_spawner.hpp>

using namespace godot;

void register_classes_MultiplayerSpawner() {
    qjs::Context::Module &_module = _Node;
    _module.class_<MultiplayerSpawner>("MultiplayerSpawner")
           .constructor<>()
           .property<MultiplayerSpawner::get_spawn_path, MultiplayerSpawner::set_spawn_path>("spawn_path")
           .property<MultiplayerSpawner::get_spawn_limit, MultiplayerSpawner::set_spawn_limit>("spawn_limit")
           .property<MultiplayerSpawner::get_spawn_function, MultiplayerSpawner::set_spawn_function>("spawn_function")
		    .fun<static_cast<void(MultiplayerSpawner::*)(const String &)>(&MultiplayerSpawner::add_spawnable_scene)>("add_spawnable_scene")
		    .fun<static_cast<int32_t(MultiplayerSpawner::*)()const>(&MultiplayerSpawner::get_spawnable_scene_count)>("get_spawnable_scene_count")
		    .fun<static_cast<String(MultiplayerSpawner::*)(int32_t)const>(&MultiplayerSpawner::get_spawnable_scene)>("get_spawnable_scene")
		    .fun<static_cast<void(MultiplayerSpawner::*)()>(&MultiplayerSpawner::clear_spawnable_scenes)>("clear_spawnable_scenes")
		    .fun<static_cast<Node *(MultiplayerSpawner::*)(const Variant &)>(&MultiplayerSpawner::spawn)>("spawn")
;}