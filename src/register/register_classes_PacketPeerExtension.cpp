#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/packet_peer_extension.hpp>

using namespace godot;

void register_classes_PacketPeerExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<PacketPeerExtension>("PacketPeerExtension")
           .constructor<>()
		    .fun<static_cast<Error(PacketPeerExtension::*)(const uint8_t **,int32_t*)>(&PacketPeerExtension::_get_packet)>("_get_packet")
		    .fun<static_cast<Error(PacketPeerExtension::*)(const uint8_t*,int32_t)>(&PacketPeerExtension::_put_packet)>("_put_packet")
		    .fun<static_cast<int32_t(PacketPeerExtension::*)()const>(&PacketPeerExtension::_get_available_packet_count)>("_get_available_packet_count")
		    .fun<static_cast<int32_t(PacketPeerExtension::*)()const>(&PacketPeerExtension::_get_max_packet_size)>("_get_max_packet_size")
;}