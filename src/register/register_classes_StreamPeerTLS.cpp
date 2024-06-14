#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_tls.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StreamPeerTLS() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StreamPeerTLS>("StreamPeerTLS")
			.constructor<>()
			.base<StreamPeer>()
			.fun<static_cast<void (StreamPeerTLS::*)()>(&StreamPeerTLS::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<Error (StreamPeerTLS::*)(const Ref<StreamPeer> &, const Ref<TLSOptions> &)>(&StreamPeerTLS::accept_stream)>((new std::string("accept_stream"))->c_str())
			.fun<static_cast<Error (StreamPeerTLS::*)(const Ref<StreamPeer> &, const String &, const Ref<TLSOptions> &)>(&StreamPeerTLS::connect_to_stream)>((new std::string("connect_to_stream"))->c_str())
			.fun<static_cast<StreamPeerTLS::Status (StreamPeerTLS::*)() const>(&StreamPeerTLS::get_status)>((new std::string("get_status"))->c_str())
			.fun<static_cast<Ref<StreamPeer> (StreamPeerTLS::*)() const>(&StreamPeerTLS::get_stream)>((new std::string("get_stream"))->c_str())
			.fun<static_cast<void (StreamPeerTLS::*)()>(&StreamPeerTLS::disconnect_from_stream)>((new std::string("disconnect_from_stream"))->c_str());
	qjs::Value _Status = context->newObject();
	_Status[(new std::string("STATUS_DISCONNECTED"))->c_str()] = StreamPeerTLS::Status::STATUS_DISCONNECTED;
	_Status[(new std::string("STATUS_HANDSHAKING"))->c_str()] = StreamPeerTLS::Status::STATUS_HANDSHAKING;
	_Status[(new std::string("STATUS_CONNECTED"))->c_str()] = StreamPeerTLS::Status::STATUS_CONNECTED;
	_Status[(new std::string("STATUS_ERROR"))->c_str()] = StreamPeerTLS::Status::STATUS_ERROR;
	_Status[(new std::string("STATUS_ERROR_HOSTNAME_MISMATCH"))->c_str()] = StreamPeerTLS::Status::STATUS_ERROR_HOSTNAME_MISMATCH;
	_module.add("Status", std::move(_Status));
}