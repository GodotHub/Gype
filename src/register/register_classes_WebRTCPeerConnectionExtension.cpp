
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection_extension.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WebRTCPeerConnectionExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<WebRTCPeerConnectionExtension>("WebRTCPeerConnectionExtension")
			.constructor<>()
			.base<WebRTCPeerConnection>()
			.fun<static_cast<WebRTCPeerConnection::ConnectionState (WebRTCPeerConnectionExtension::*)() const>(&WebRTCPeerConnectionExtension::_get_connection_state)>((new std::string("_get_connection_state"))->c_str())
			.fun<static_cast<WebRTCPeerConnection::GatheringState (WebRTCPeerConnectionExtension::*)() const>(&WebRTCPeerConnectionExtension::_get_gathering_state)>((new std::string("_get_gathering_state"))->c_str())
			.fun<static_cast<WebRTCPeerConnection::SignalingState (WebRTCPeerConnectionExtension::*)() const>(&WebRTCPeerConnectionExtension::_get_signaling_state)>((new std::string("_get_signaling_state"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnectionExtension::*)(const Dictionary &)>(&WebRTCPeerConnectionExtension::_initialize)>((new std::string("_initialize"))->c_str())
			.fun<static_cast<Ref<WebRTCDataChannel> (WebRTCPeerConnectionExtension::*)(const String &, const Dictionary &)>(&WebRTCPeerConnectionExtension::_create_data_channel)>((new std::string("_create_data_channel"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnectionExtension::*)()>(&WebRTCPeerConnectionExtension::_create_offer)>((new std::string("_create_offer"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnectionExtension::*)(const String &, const String &)>(&WebRTCPeerConnectionExtension::_set_remote_description)>((new std::string("_set_remote_description"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnectionExtension::*)(const String &, const String &)>(&WebRTCPeerConnectionExtension::_set_local_description)>((new std::string("_set_local_description"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnectionExtension::*)(const String &, int32_t, const String &)>(&WebRTCPeerConnectionExtension::_add_ice_candidate)>((new std::string("_add_ice_candidate"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnectionExtension::*)()>(&WebRTCPeerConnectionExtension::_poll)>((new std::string("_poll"))->c_str())
			.fun<static_cast<void (WebRTCPeerConnectionExtension::*)()>(&WebRTCPeerConnectionExtension::_close)>((new std::string("_close"))->c_str());
}