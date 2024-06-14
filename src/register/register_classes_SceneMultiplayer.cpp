
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/scene_multiplayer.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SceneMultiplayer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SceneMultiplayer>("SceneMultiplayer")
			.constructor<>()
			.base<MultiplayerAPI>()
			.property<static_cast<NodePath (SceneMultiplayer::*)() const>(&SceneMultiplayer::get_root_path), static_cast<void (SceneMultiplayer::*)(const NodePath &)>(&SceneMultiplayer::set_root_path)>((new std::string("root_path"))->c_str())
			.property<static_cast<Callable (SceneMultiplayer::*)() const>(&SceneMultiplayer::get_auth_callback), static_cast<void (SceneMultiplayer::*)(const Callable &)>(&SceneMultiplayer::set_auth_callback)>((new std::string("auth_callback"))->c_str())
			.property<static_cast<double (SceneMultiplayer::*)() const>(&SceneMultiplayer::get_auth_timeout), static_cast<void (SceneMultiplayer::*)(double)>(&SceneMultiplayer::set_auth_timeout)>((new std::string("auth_timeout"))->c_str())
			.property<static_cast<bool (SceneMultiplayer::*)() const>(&SceneMultiplayer::is_object_decoding_allowed), static_cast<void (SceneMultiplayer::*)(bool)>(&SceneMultiplayer::set_allow_object_decoding)>((new std::string("allow_object_decoding"))->c_str())
			.property<static_cast<bool (SceneMultiplayer::*)() const>(&SceneMultiplayer::is_refusing_new_connections), static_cast<void (SceneMultiplayer::*)(bool)>(&SceneMultiplayer::set_refuse_new_connections)>((new std::string("refuse_new_connections"))->c_str())
			.property<static_cast<bool (SceneMultiplayer::*)() const>(&SceneMultiplayer::is_server_relay_enabled), static_cast<void (SceneMultiplayer::*)(bool)>(&SceneMultiplayer::set_server_relay_enabled)>((new std::string("server_relay"))->c_str())
			.property<static_cast<int32_t (SceneMultiplayer::*)() const>(&SceneMultiplayer::get_max_sync_packet_size), static_cast<void (SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::set_max_sync_packet_size)>((new std::string("max_sync_packet_size"))->c_str())
			.property<static_cast<int32_t (SceneMultiplayer::*)() const>(&SceneMultiplayer::get_max_delta_packet_size), static_cast<void (SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::set_max_delta_packet_size)>((new std::string("max_delta_packet_size"))->c_str())
			.fun<static_cast<void (SceneMultiplayer::*)()>(&SceneMultiplayer::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::disconnect_peer)>((new std::string("disconnect_peer"))->c_str())
			.fun<static_cast<PackedInt32Array (SceneMultiplayer::*)()>(&SceneMultiplayer::get_authenticating_peers)>((new std::string("get_authenticating_peers"))->c_str())
			.fun<static_cast<Error (SceneMultiplayer::*)(int32_t, const PackedByteArray &)>(&SceneMultiplayer::send_auth)>((new std::string("send_auth"))->c_str())
			.fun<static_cast<Error (SceneMultiplayer::*)(int32_t)>(&SceneMultiplayer::complete_auth)>((new std::string("complete_auth"))->c_str())
			.fun<static_cast<Error (SceneMultiplayer::*)(const PackedByteArray &, int32_t, MultiplayerPeer::TransferMode, int32_t)>(&SceneMultiplayer::send_bytes)>((new std::string("send_bytes"))->c_str());
}