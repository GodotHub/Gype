#include "register/register_classes.h"
#include <godot_cpp/classes/web_socket_multiplayer_peer.hpp>

using namespace godot;

void register_classes_WebSocketMultiplayerPeerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WebSocketMultiplayerPeer>>("WebSocketMultiplayerPeerRef").constructor<WebSocketMultiplayerPeer *>();
}