
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_tcp.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StreamPeerTCP() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StreamPeerTCP>("StreamPeerTCP")
			.constructor<>()
			.base<StreamPeer>()
			.fun<static_cast<Error (StreamPeerTCP::*)(int32_t, const String &)>(&StreamPeerTCP::bind)>((new std::string("bind"))->c_str())
			.fun<static_cast<Error (StreamPeerTCP::*)(const String &, int32_t)>(&StreamPeerTCP::connect_to_host)>((new std::string("connect_to_host"))->c_str())
			.fun<static_cast<Error (StreamPeerTCP::*)()>(&StreamPeerTCP::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<StreamPeerTCP::Status (StreamPeerTCP::*)() const>(&StreamPeerTCP::get_status)>((new std::string("get_status"))->c_str())
			.fun<static_cast<String (StreamPeerTCP::*)() const>(&StreamPeerTCP::get_connected_host)>((new std::string("get_connected_host"))->c_str())
			.fun<static_cast<int32_t (StreamPeerTCP::*)() const>(&StreamPeerTCP::get_connected_port)>((new std::string("get_connected_port"))->c_str())
			.fun<static_cast<int32_t (StreamPeerTCP::*)() const>(&StreamPeerTCP::get_local_port)>((new std::string("get_local_port"))->c_str())
			.fun<static_cast<void (StreamPeerTCP::*)()>(&StreamPeerTCP::disconnect_from_host)>((new std::string("disconnect_from_host"))->c_str())
			.fun<static_cast<void (StreamPeerTCP::*)(bool)>(&StreamPeerTCP::set_no_delay)>((new std::string("set_no_delay"))->c_str());
	qjs::Value _Status = context->newObject();
	_Status[(new std::string("STATUS_NONE"))->c_str()] = StreamPeerTCP::Status::STATUS_NONE;
	_Status[(new std::string("STATUS_CONNECTING"))->c_str()] = StreamPeerTCP::Status::STATUS_CONNECTING;
	_Status[(new std::string("STATUS_CONNECTED"))->c_str()] = StreamPeerTCP::Status::STATUS_CONNECTED;
	_Status[(new std::string("STATUS_ERROR"))->c_str()] = StreamPeerTCP::Status::STATUS_ERROR;
	_module.add("Status", std::move(_Status));
}