#include "register/register_classes.h"
#include <godot_cpp/classes/web_rtc_multiplayer_peer.hpp>

using namespace godot;

void register_classes_WebRTCMultiplayerPeerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WebRTCMultiplayerPeer>>("WebRTCMultiplayerPeerRef").constructor<WebRTCMultiplayerPeer *>();
}