#include "register/register_classes.h"
#include <godot_cpp/classes/packet_peer_dtls.hpp>

using namespace godot;

void register_classes_PacketPeerDTLSRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PacketPeerDTLS>>("PacketPeerDTLSRef").constructor<PacketPeerDTLS *>();
}