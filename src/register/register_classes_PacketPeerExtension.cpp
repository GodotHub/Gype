
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_extension.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PacketPeerExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PacketPeerExtension>("PacketPeerExtension")
			.constructor<>()
			.base<PacketPeer>()
			.fun<static_cast<Error (PacketPeerExtension::*)(const uint8_t **, int32_t *)>(&PacketPeerExtension::_get_packet)>((new std::string("_get_packet"))->c_str())
			.fun<static_cast<Error (PacketPeerExtension::*)(const uint8_t *, int32_t)>(&PacketPeerExtension::_put_packet)>((new std::string("_put_packet"))->c_str())
			.fun<static_cast<int32_t (PacketPeerExtension::*)() const>(&PacketPeerExtension::_get_available_packet_count)>((new std::string("_get_available_packet_count"))->c_str())
			.fun<static_cast<int32_t (PacketPeerExtension::*)() const>(&PacketPeerExtension::_get_max_packet_size)>((new std::string("_get_max_packet_size"))->c_str());
}