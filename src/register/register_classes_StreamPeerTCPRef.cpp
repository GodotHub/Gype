#include "register/register_classes.h"
#include <godot_cpp/classes/stream_peer_tcp.hpp>

using namespace godot;

void register_classes_StreamPeerTCPRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StreamPeerTCP>>("StreamPeerTCPRef").constructor<StreamPeerTCP *>();
}