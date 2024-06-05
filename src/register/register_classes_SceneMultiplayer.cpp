#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/scene_multiplayer.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SceneMultiplayer() {
	qjs::Context::Module &_module = _General;
	_module.class_<SceneMultiplayer>("SceneMultiplayer")
			.constructor<>()
			.property<&SceneMultiplayer::get_root_path, &SceneMultiplayer::set_root_path>("root_path")
			.property<&SceneMultiplayer::get_auth_callback, &SceneMultiplayer::set_auth_callback>("auth_callback")
			.property<&SceneMultiplayer::get_auth_timeout, &SceneMultiplayer::set_auth_timeout>("auth_timeout")
			.property<&SceneMultiplayer::is_object_decoding_allowed, &SceneMultiplayer::set_allow_object_decoding>("allow_object_decoding")
			.property<&SceneMultiplayer::is_refusing_new_connections, &SceneMultiplayer::set_refuse_new_connections>("refuse_new_connections")
			.property<&SceneMultiplayer::is_server_relay_enabled, &SceneMultiplayer::set_server_relay_enabled>("server_relay")
			.property<&SceneMultiplayer::get_max_sync_packet_size, &SceneMultiplayer::set_max_sync_packet_size>("max_sync_packet_size")
			.property<&SceneMultiplayer::get_max_delta_packet_size, &SceneMultiplayer::set_max_delta_packet_size>("max_delta_packet_size")
			.fun<static_cast<void (SceneMultiplayer::*)()>(&SceneMultiplayer::clear)>("clear")
			.fun<static_cast<void (SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::disconnect_peer)>("disconnect_peer")
			.fun<static_cast<PackedInt32Array (SceneMultiplayer::*)()>(&SceneMultiplayer::get_authenticating_peers)>("get_authenticating_peers")
			.fun<static_cast<Error (SceneMultiplayer::*)(int32_t, const PackedByteArray &)>(&SceneMultiplayer::send_auth)>("send_auth")
			.fun<static_cast<Error (SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::complete_auth)>("complete_auth")
			.fun<static_cast<Error (SceneMultiplayer::*)(const PackedByteArray &, int32_t, MultiplayerPeer::TransferMode, int32_t)>(&SceneMultiplayer::send_bytes)>("send_bytes");
}