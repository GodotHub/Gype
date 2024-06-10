#include "register/register_classes.h"
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>

using namespace godot;

void register_classes_WebRTCPeerConnectionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WebRTCPeerConnection>>("WebRTCPeerConnectionRef").constructor<WebRTCPeerConnection *>();
}