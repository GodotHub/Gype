
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/udp_server.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_UDPServer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<UDPServer>("UDPServer")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<int32_t (UDPServer::*)() const>(&UDPServer::get_max_pending_connections), static_cast<void (UDPServer::*)(int32_t)>(&UDPServer::set_max_pending_connections)>((new std::string("max_pending_connections"))->c_str())
			.fun<static_cast<Error (UDPServer::*)(uint16_t, const String &)>(&UDPServer::listen)>((new std::string("listen"))->c_str())
			.fun<static_cast<Error (UDPServer::*)()>(&UDPServer::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<bool (UDPServer::*)() const>(&UDPServer::is_connection_available)>((new std::string("is_connection_available"))->c_str())
			.fun<static_cast<int32_t (UDPServer::*)() const>(&UDPServer::get_local_port)>((new std::string("get_local_port"))->c_str())
			.fun<static_cast<bool (UDPServer::*)() const>(&UDPServer::is_listening)>((new std::string("is_listening"))->c_str())
			.fun<static_cast<Ref<PacketPeerUDP> (UDPServer::*)()>(&UDPServer::take_connection)>((new std::string("take_connection"))->c_str())
			.fun<static_cast<void (UDPServer::*)()>(&UDPServer::stop)>((new std::string("stop"))->c_str());
}