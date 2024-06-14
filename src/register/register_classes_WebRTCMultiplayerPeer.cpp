
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/web_rtc_multiplayer_peer.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_WebRTCMultiplayerPeer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<WebRTCMultiplayerPeer>("WebRTCMultiplayerPeer")
			.constructor<>()
			.base<MultiplayerPeer>()
			.fun<static_cast<Error (WebRTCMultiplayerPeer::*)(const Array &)>(&WebRTCMultiplayerPeer::create_server)>((new std::string("create_server"))->c_str())
			.fun<static_cast<Error (WebRTCMultiplayerPeer::*)(int32_t, const Array &)>(&WebRTCMultiplayerPeer::create_client)>((new std::string("create_client"))->c_str())
			.fun<static_cast<Error (WebRTCMultiplayerPeer::*)(int32_t, const Array &)>(&WebRTCMultiplayerPeer::create_mesh)>((new std::string("create_mesh"))->c_str())
			.fun<static_cast<Error (WebRTCMultiplayerPeer::*)(const Ref<WebRTCPeerConnection> &, int32_t, int32_t)>(&WebRTCMultiplayerPeer::add_peer)>((new std::string("add_peer"))->c_str())
			.fun<static_cast<void (WebRTCMultiplayerPeer::*)(int32_t)>(&WebRTCMultiplayerPeer::remove_peer)>((new std::string("remove_peer"))->c_str())
			.fun<static_cast<bool (WebRTCMultiplayerPeer::*)(int32_t)>(&WebRTCMultiplayerPeer::has_peer)>((new std::string("has_peer"))->c_str())
			.fun<static_cast<Dictionary (WebRTCMultiplayerPeer::*)(int32_t)>(&WebRTCMultiplayerPeer::get_peer)>((new std::string("get_peer"))->c_str())
			.fun<static_cast<Dictionary (WebRTCMultiplayerPeer::*)()>(&WebRTCMultiplayerPeer::get_peers)>((new std::string("get_peers"))->c_str());
}