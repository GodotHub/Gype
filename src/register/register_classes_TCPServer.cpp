
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/stream_peer_tcp.hpp>
#include <godot_cpp/classes/tcp_server.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TCPServer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TCPServer>("TCPServer")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (TCPServer::*)(uint16_t, const String &)>(&TCPServer::listen)>((new std::string("listen"))->c_str())
			.fun<static_cast<bool (TCPServer::*)() const>(&TCPServer::is_connection_available)>((new std::string("is_connection_available"))->c_str())
			.fun<static_cast<bool (TCPServer::*)() const>(&TCPServer::is_listening)>((new std::string("is_listening"))->c_str())
			.fun<static_cast<int32_t (TCPServer::*)() const>(&TCPServer::get_local_port)>((new std::string("get_local_port"))->c_str())
			.fun<static_cast<Ref<StreamPeerTCP> (TCPServer::*)()>(&TCPServer::take_connection)>((new std::string("take_connection"))->c_str())
			.fun<static_cast<void (TCPServer::*)()>(&TCPServer::stop)>((new std::string("stop"))->c_str());
}