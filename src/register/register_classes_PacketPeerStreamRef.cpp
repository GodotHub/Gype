#include "register/register_classes.h"
#include <godot_cpp/classes/packet_peer_stream.hpp>

using namespace godot;

void register_classes_PacketPeerStreamRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PacketPeerStream>>("PacketPeerStreamRef").constructor<PacketPeerStream *>();
}