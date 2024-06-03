#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/multiplayer_synchronizer.hpp>

using namespace godot;

void register_classes_MultiplayerSynchronizer() {
    qjs::Context::Module &_module = _Node;
    _module.class_<MultiplayerSynchronizer>("MultiplayerSynchronizer")
           .constructor<>()
           .property<MultiplayerSynchronizer::get_root_path, MultiplayerSynchronizer::set_root_path>("root_path")
           .property<MultiplayerSynchronizer::get_replication_interval, MultiplayerSynchronizer::set_replication_interval>("replication_interval")
           .property<MultiplayerSynchronizer::get_delta_interval, MultiplayerSynchronizer::set_delta_interval>("delta_interval")
           .property<MultiplayerSynchronizer::get_replication_config, MultiplayerSynchronizer::set_replication_config>("replication_config")
           .property<MultiplayerSynchronizer::get_visibility_update_mode, MultiplayerSynchronizer::set_visibility_update_mode>("visibility_update_mode")
           .property<MultiplayerSynchronizer::is_visibility_public, MultiplayerSynchronizer::set_visibility_public>("public_visibility")
		    .fun<static_cast<void(MultiplayerSynchronizer::*)(int32_t)>(&MultiplayerSynchronizer::update_visibility)>("update_visibility")
		    .fun<static_cast<void(MultiplayerSynchronizer::*)(const Callable &)>(&MultiplayerSynchronizer::add_visibility_filter)>("add_visibility_filter")
		    .fun<static_cast<void(MultiplayerSynchronizer::*)(const Callable &)>(&MultiplayerSynchronizer::remove_visibility_filter)>("remove_visibility_filter")
		    .fun<static_cast<void(MultiplayerSynchronizer::*)(int32_t,bool)>(&MultiplayerSynchronizer::set_visibility_for)>("set_visibility_for")
		    .fun<static_cast<bool(MultiplayerSynchronizer::*)(int32_t)const>(&MultiplayerSynchronizer::get_visibility_for)>("get_visibility_for")
;}