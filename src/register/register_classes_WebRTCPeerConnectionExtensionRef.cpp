#include "register/register_classes.h"
#include <godot_cpp/classes/web_rtc_peer_connection_extension.hpp>

using namespace godot;

void register_classes_WebRTCPeerConnectionExtensionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<WebRTCPeerConnectionExtension>>("WebRTCPeerConnectionExtensionRef").constructor<WebRTCPeerConnectionExtension *>();
}