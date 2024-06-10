#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PacketPeerUDP() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PacketPeerUDP>("PacketPeerUDP")
			.constructor<>()
			.fun<static_cast<Error (PacketPeerUDP::*)(int32_t, const String &, int32_t)>(&PacketPeerUDP::bind)>("bind")
			.fun<static_cast<void (PacketPeerUDP::*)()>(&PacketPeerUDP::close)>("close")
			.fun<static_cast<Error (PacketPeerUDP::*)()>(&PacketPeerUDP::wait)>("wait")
			.fun<static_cast<bool (PacketPeerUDP::*)() const>(&PacketPeerUDP::is_bound)>("is_bound")
			.fun<static_cast<Error (PacketPeerUDP::*)(const String &, int32_t)>(&PacketPeerUDP::connect_to_host)>("connect_to_host")
			.fun<static_cast<bool (PacketPeerUDP::*)() const>(&PacketPeerUDP::is_socket_connected)>("is_socket_connected")
			.fun<static_cast<String (PacketPeerUDP::*)() const>(&PacketPeerUDP::get_packet_ip)>("get_packet_ip")
			.fun<static_cast<int32_t (PacketPeerUDP::*)() const>(&PacketPeerUDP::get_packet_port)>("get_packet_port")
			.fun<static_cast<int32_t (PacketPeerUDP::*)() const>(&PacketPeerUDP::get_local_port)>("get_local_port")
			.fun<static_cast<Error (PacketPeerUDP::*)(const String &, int32_t)>(&PacketPeerUDP::set_dest_address)>("set_dest_address")
			.fun<static_cast<void (PacketPeerUDP::*)(bool)>(&PacketPeerUDP::set_broadcast_enabled)>("set_broadcast_enabled")
			.fun<static_cast<Error (PacketPeerUDP::*)(const String &, const String &)>(&PacketPeerUDP::join_multicast_group)>("join_multicast_group")
			.fun<static_cast<Error (PacketPeerUDP::*)(const String &, const String &)>(&PacketPeerUDP::leave_multicast_group)>("leave_multicast_group");
}