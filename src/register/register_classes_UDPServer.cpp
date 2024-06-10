#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/udp_server.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_UDPServer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<UDPServer>("UDPServer")
			.constructor<>()
			.property<&UDPServer::get_max_pending_connections, &UDPServer::set_max_pending_connections>("max_pending_connections")
			.fun<static_cast<Error (UDPServer::*)(uint16_t, const String &)>(&UDPServer::listen)>("listen")
			.fun<static_cast<Error (UDPServer::*)()>(&UDPServer::poll)>("poll")
			.fun<static_cast<bool (UDPServer::*)() const>(&UDPServer::is_connection_available)>("is_connection_available")
			.fun<static_cast<int32_t (UDPServer::*)() const>(&UDPServer::get_local_port)>("get_local_port")
			.fun<static_cast<bool (UDPServer::*)() const>(&UDPServer::is_listening)>("is_listening")
			.fun<static_cast<Ref<PacketPeerUDP> (UDPServer::*)()>(&UDPServer::take_connection)>("take_connection")
			.fun<static_cast<void (UDPServer::*)()>(&UDPServer::stop)>("stop");
}