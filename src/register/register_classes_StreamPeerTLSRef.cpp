#include "register/register_classes.h"
#include <godot_cpp/classes/stream_peer_tls.hpp>

using namespace godot;

void register_classes_StreamPeerTLSRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<StreamPeerTLS>>("StreamPeerTLSRef").constructor<StreamPeerTLS *>();
}