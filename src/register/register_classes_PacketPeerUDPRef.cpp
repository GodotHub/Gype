#include "register/register_classes.h"
#include <godot_cpp/classes/packet_peer_udp.hpp>

using namespace godot;

void register_classes_PacketPeerUDPRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PacketPeerUDP>>("PacketPeerUDPRef").constructor<PacketPeerUDP *>();
}