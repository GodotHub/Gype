#include <godot_cpp/classes/scene_multiplayer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_SceneMultiplayer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<SceneMultiplayer>("SceneMultiplayer")
            .constructor<>()
            .base<MultiplayerAPI>()
            .property<static_cast<NodePath(SceneMultiplayer::*)()const>(&SceneMultiplayer::get_root_path),static_cast<void(SceneMultiplayer::*)(const NodePath &)>(&SceneMultiplayer::set_root_path)>("root_path")
            .property<static_cast<Callable(SceneMultiplayer::*)()const>(&SceneMultiplayer::get_auth_callback),static_cast<void(SceneMultiplayer::*)(const Callable &)>(&SceneMultiplayer::set_auth_callback)>("auth_callback")
            .property<static_cast<double(SceneMultiplayer::*)()const>(&SceneMultiplayer::get_auth_timeout),static_cast<void(SceneMultiplayer::*)(double)>(&SceneMultiplayer::set_auth_timeout)>("auth_timeout")
            .property<static_cast<bool(SceneMultiplayer::*)()const>(&SceneMultiplayer::is_object_decoding_allowed),static_cast<void(SceneMultiplayer::*)(bool)>(&SceneMultiplayer::set_allow_object_decoding)>("allow_object_decoding")
            .property<static_cast<bool(SceneMultiplayer::*)()const>(&SceneMultiplayer::is_refusing_new_connections),static_cast<void(SceneMultiplayer::*)(bool)>(&SceneMultiplayer::set_refuse_new_connections)>("refuse_new_connections")
            .property<static_cast<bool(SceneMultiplayer::*)()const>(&SceneMultiplayer::is_server_relay_enabled),static_cast<void(SceneMultiplayer::*)(bool)>(&SceneMultiplayer::set_server_relay_enabled)>("server_relay")
            .property<static_cast<int32_t(SceneMultiplayer::*)()const>(&SceneMultiplayer::get_max_sync_packet_size),static_cast<void(SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::set_max_sync_packet_size)>("max_sync_packet_size")
            .property<static_cast<int32_t(SceneMultiplayer::*)()const>(&SceneMultiplayer::get_max_delta_packet_size),static_cast<void(SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::set_max_delta_packet_size)>("max_delta_packet_size")
            .fun<static_cast<void(SceneMultiplayer::*)()>(&SceneMultiplayer::clear)>("clear")
            .fun<static_cast<void(SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::disconnect_peer)>("disconnect_peer")
            .fun<static_cast<PackedInt32Array(SceneMultiplayer::*)()>(&SceneMultiplayer::get_authenticating_peers)>("get_authenticating_peers")
            .fun<static_cast<Error(SceneMultiplayer::*)(int32_t,const PackedByteArray &)>(&SceneMultiplayer::send_auth)>("send_auth")
            .fun<static_cast<Error(SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::complete_auth)>("complete_auth")
            .fun<static_cast<Error(SceneMultiplayer::*)(const PackedByteArray &,int32_t,MultiplayerPeer::TransferMode,int32_t)>(&SceneMultiplayer::send_bytes)>("send_bytes")
;}