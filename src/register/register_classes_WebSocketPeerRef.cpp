#include "register/register_classes.h"
#include <godot_cpp/classes/web_socket_peer.hpp>

using namespace godot;

void register_classes_WebSocketPeerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WebSocketPeer>>("WebSocketPeerRef").constructor<WebSocketPeer *>();
}