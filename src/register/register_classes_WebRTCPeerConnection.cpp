#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WebRTCPeerConnection() {
	qjs::Context::Module &_module = _General;
	_module.class_<WebRTCPeerConnection>("WebRTCPeerConnection")
			.constructor<>()
			.static_fun<&WebRTCPeerConnection::set_default_extension>("set_default_extension")
			.fun<static_cast<Error (WebRTCPeerConnection::*)(const Dictionary &)>(&WebRTCPeerConnection::initialize)>("initialize")
			.fun<static_cast<Ref<WebRTCDataChannel> (WebRTCPeerConnection::*)(const String &, const Dictionary &)>(&WebRTCPeerConnection::create_data_channel)>("create_data_channel")
			.fun<static_cast<Error (WebRTCPeerConnection::*)()>(&WebRTCPeerConnection::create_offer)>("create_offer")
			.fun<static_cast<Error (WebRTCPeerConnection::*)(const String &, const String &)>(&WebRTCPeerConnection::set_local_description)>("set_local_description")
			.fun<static_cast<Error (WebRTCPeerConnection::*)(const String &, const String &)>(&WebRTCPeerConnection::set_remote_description)>("set_remote_description")
			.fun<static_cast<Error (WebRTCPeerConnection::*)(const String &, int32_t, const String &)>(&WebRTCPeerConnection::add_ice_candidate)>("add_ice_candidate")
			.fun<static_cast<Error (WebRTCPeerConnection::*)()>(&WebRTCPeerConnection::poll)>("poll")
			.fun<static_cast<void (WebRTCPeerConnection::*)()>(&WebRTCPeerConnection::close)>("close")
			.fun<static_cast<WebRTCPeerConnection::ConnectionState (WebRTCPeerConnection::*)() const>(&WebRTCPeerConnection::get_connection_state)>("get_connection_state")
			.fun<static_cast<WebRTCPeerConnection::GatheringState (WebRTCPeerConnection::*)() const>(&WebRTCPeerConnection::get_gathering_state)>("get_gathering_state")
			.fun<static_cast<WebRTCPeerConnection::SignalingState (WebRTCPeerConnection::*)() const>(&WebRTCPeerConnection::get_signaling_state)>("get_signaling_state");
}