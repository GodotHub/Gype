
#include <godot_cpp/classes/e_net_connection.hpp>
#include <godot_cpp/classes/e_net_multiplayer_peer.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ENetMultiplayerPeer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ENetMultiplayerPeer>("ENetMultiplayerPeer")
			.constructor<>()
			.base<MultiplayerPeer>()
			.property<static_cast<Ref<ENetConnection> (ENetMultiplayerPeer::*)() const>(&ENetMultiplayerPeer::get_host)>((new std::string("host"))->c_str())
			.fun<static_cast<Error (ENetMultiplayerPeer::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&ENetMultiplayerPeer::create_server)>((new std::string("create_server"))->c_str())
			.fun<static_cast<Error (ENetMultiplayerPeer::*)(const String &, int32_t, int32_t, int32_t, int32_t, int32_t)>(&ENetMultiplayerPeer::create_client)>((new std::string("create_client"))->c_str())
			.fun<static_cast<Error (ENetMultiplayerPeer::*)(int32_t)>(&ENetMultiplayerPeer::create_mesh)>((new std::string("create_mesh"))->c_str())
			.fun<static_cast<Error (ENetMultiplayerPeer::*)(int32_t, const Ref<ENetConnection> &)>(&ENetMultiplayerPeer::add_mesh_peer)>((new std::string("add_mesh_peer"))->c_str())
			.fun<static_cast<void (ENetMultiplayerPeer::*)(const String &)>(&ENetMultiplayerPeer::set_bind_ip)>((new std::string("set_bind_ip"))->c_str())
			.fun<static_cast<Ref<ENetPacketPeer> (ENetMultiplayerPeer::*)(int32_t) const>(&ENetMultiplayerPeer::get_peer)>((new std::string("get_peer"))->c_str());
}