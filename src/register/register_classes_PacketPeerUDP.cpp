
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PacketPeerUDP() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PacketPeerUDP>("PacketPeerUDP")
			.constructor<>()
			.base<PacketPeer>()
			.fun<static_cast<Error (PacketPeerUDP::*)(int32_t, const String &, int32_t)>(&PacketPeerUDP::bind)>((new std::string("bind"))->c_str())
			.fun<static_cast<void (PacketPeerUDP::*)()>(&PacketPeerUDP::close)>((new std::string("close"))->c_str())
			.fun<static_cast<Error (PacketPeerUDP::*)()>(&PacketPeerUDP::wait)>((new std::string("wait"))->c_str())
			.fun<static_cast<bool (PacketPeerUDP::*)() const>(&PacketPeerUDP::is_bound)>((new std::string("is_bound"))->c_str())
			.fun<static_cast<Error (PacketPeerUDP::*)(const String &, int32_t)>(&PacketPeerUDP::connect_to_host)>((new std::string("connect_to_host"))->c_str())
			.fun<static_cast<bool (PacketPeerUDP::*)() const>(&PacketPeerUDP::is_socket_connected)>((new std::string("is_socket_connected"))->c_str())
			.fun<static_cast<String (PacketPeerUDP::*)() const>(&PacketPeerUDP::get_packet_ip)>((new std::string("get_packet_ip"))->c_str())
			.fun<static_cast<int32_t (PacketPeerUDP::*)() const>(&PacketPeerUDP::get_packet_port)>((new std::string("get_packet_port"))->c_str())
			.fun<static_cast<int32_t (PacketPeerUDP::*)() const>(&PacketPeerUDP::get_local_port)>((new std::string("get_local_port"))->c_str())
			.fun<static_cast<Error (PacketPeerUDP::*)(const String &, int32_t)>(&PacketPeerUDP::set_dest_address)>((new std::string("set_dest_address"))->c_str())
			.fun<static_cast<void (PacketPeerUDP::*)(bool)>(&PacketPeerUDP::set_broadcast_enabled)>((new std::string("set_broadcast_enabled"))->c_str())
			.fun<static_cast<Error (PacketPeerUDP::*)(const String &, const String &)>(&PacketPeerUDP::join_multicast_group)>((new std::string("join_multicast_group"))->c_str())
			.fun<static_cast<Error (PacketPeerUDP::*)(const String &, const String &)>(&PacketPeerUDP::leave_multicast_group)>((new std::string("leave_multicast_group"))->c_str());
}