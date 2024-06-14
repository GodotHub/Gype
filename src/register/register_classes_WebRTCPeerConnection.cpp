
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WebRTCPeerConnection() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<WebRTCPeerConnection>("WebRTCPeerConnection")
			.constructor<>()
			.base<RefCounted>()
			.static_fun<static_cast<void (*)(const StringName &)>(&WebRTCPeerConnection::set_default_extension)>((new std::string("set_default_extension"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnection::*)(const Dictionary &)>(&WebRTCPeerConnection::initialize)>((new std::string("initialize"))->c_str())
			.fun<static_cast<Ref<WebRTCDataChannel> (WebRTCPeerConnection::*)(const String &, const Dictionary &)>(&WebRTCPeerConnection::create_data_channel)>((new std::string("create_data_channel"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnection::*)()>(&WebRTCPeerConnection::create_offer)>((new std::string("create_offer"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnection::*)(const String &, const String &)>(&WebRTCPeerConnection::set_local_description)>((new std::string("set_local_description"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnection::*)(const String &, const String &)>(&WebRTCPeerConnection::set_remote_description)>((new std::string("set_remote_description"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnection::*)(const String &, int32_t, const String &)>(&WebRTCPeerConnection::add_ice_candidate)>((new std::string("add_ice_candidate"))->c_str())
			.fun<static_cast<Error (WebRTCPeerConnection::*)()>(&WebRTCPeerConnection::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<void (WebRTCPeerConnection::*)()>(&WebRTCPeerConnection::close)>((new std::string("close"))->c_str())
			.fun<static_cast<WebRTCPeerConnection::ConnectionState (WebRTCPeerConnection::*)() const>(&WebRTCPeerConnection::get_connection_state)>((new std::string("get_connection_state"))->c_str())
			.fun<static_cast<WebRTCPeerConnection::GatheringState (WebRTCPeerConnection::*)() const>(&WebRTCPeerConnection::get_gathering_state)>((new std::string("get_gathering_state"))->c_str())
			.fun<static_cast<WebRTCPeerConnection::SignalingState (WebRTCPeerConnection::*)() const>(&WebRTCPeerConnection::get_signaling_state)>((new std::string("get_signaling_state"))->c_str());
	qjs::Value _ConnectionState = context->newObject();
	_ConnectionState[(new std::string("STATE_NEW"))->c_str()] = WebRTCPeerConnection::ConnectionState::STATE_NEW;
	_ConnectionState[(new std::string("STATE_CONNECTING"))->c_str()] = WebRTCPeerConnection::ConnectionState::STATE_CONNECTING;
	_ConnectionState[(new std::string("STATE_CONNECTED"))->c_str()] = WebRTCPeerConnection::ConnectionState::STATE_CONNECTED;
	_ConnectionState[(new std::string("STATE_DISCONNECTED"))->c_str()] = WebRTCPeerConnection::ConnectionState::STATE_DISCONNECTED;
	_ConnectionState[(new std::string("STATE_FAILED"))->c_str()] = WebRTCPeerConnection::ConnectionState::STATE_FAILED;
	_ConnectionState[(new std::string("STATE_CLOSED"))->c_str()] = WebRTCPeerConnection::ConnectionState::STATE_CLOSED;
	_module.add("ConnectionState", std::move(_ConnectionState));
	qjs::Value _GatheringState = context->newObject();
	_GatheringState[(new std::string("GATHERING_STATE_NEW"))->c_str()] = WebRTCPeerConnection::GatheringState::GATHERING_STATE_NEW;
	_GatheringState[(new std::string("GATHERING_STATE_GATHERING"))->c_str()] = WebRTCPeerConnection::GatheringState::GATHERING_STATE_GATHERING;
	_GatheringState[(new std::string("GATHERING_STATE_COMPLETE"))->c_str()] = WebRTCPeerConnection::GatheringState::GATHERING_STATE_COMPLETE;
	_module.add("GatheringState", std::move(_GatheringState));
	qjs::Value _SignalingState = context->newObject();
	_SignalingState[(new std::string("SIGNALING_STATE_STABLE"))->c_str()] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_STABLE;
	_SignalingState[(new std::string("SIGNALING_STATE_HAVE_LOCAL_OFFER"))->c_str()] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_HAVE_LOCAL_OFFER;
	_SignalingState[(new std::string("SIGNALING_STATE_HAVE_REMOTE_OFFER"))->c_str()] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_HAVE_REMOTE_OFFER;
	_SignalingState[(new std::string("SIGNALING_STATE_HAVE_LOCAL_PRANSWER"))->c_str()] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_HAVE_LOCAL_PRANSWER;
	_SignalingState[(new std::string("SIGNALING_STATE_HAVE_REMOTE_PRANSWER"))->c_str()] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_HAVE_REMOTE_PRANSWER;
	_SignalingState[(new std::string("SIGNALING_STATE_CLOSED"))->c_str()] = WebRTCPeerConnection::SignalingState::SIGNALING_STATE_CLOSED;
	_module.add("SignalingState", std::move(_SignalingState));
}