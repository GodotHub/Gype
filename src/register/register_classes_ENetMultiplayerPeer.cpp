#include <godot_cpp/classes/e_net_connection.hpp>
#include <godot_cpp/classes/e_net_multiplayer_peer.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ENetMultiplayerPeer() {
	qjs::Context::Module &_module = _General;
	_module.class_<ENetMultiplayerPeer>("ENetMultiplayerPeer")
			.constructor<>()
			.property<&ENetMultiplayerPeer::get_host>("host")
			.fun<static_cast<Error (ENetMultiplayerPeer::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&ENetMultiplayerPeer::create_server)>("create_server")
			.fun<static_cast<Error (ENetMultiplayerPeer::*)(const String &, int32_t, int32_t, int32_t, int32_t, int32_t)>(&ENetMultiplayerPeer::create_client)>("create_client")
			.fun<static_cast<Error (ENetMultiplayerPeer::*)(int32_t)>(&ENetMultiplayerPeer::create_mesh)>("create_mesh")
			.fun<static_cast<Error (ENetMultiplayerPeer::*)(int32_t, const Ref<ENetConnection> &)>(&ENetMultiplayerPeer::add_mesh_peer)>("add_mesh_peer")
			.fun<static_cast<void (ENetMultiplayerPeer::*)(const String &)>(&ENetMultiplayerPeer::set_bind_ip)>("set_bind_ip")
			.fun<static_cast<Ref<ENetPacketPeer> (ENetMultiplayerPeer::*)(int32_t) const>(&ENetMultiplayerPeer::get_peer)>("get_peer");
}