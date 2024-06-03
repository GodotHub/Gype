#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/tcp_server.hpp>

using namespace godot;

void register_classes_TCPServer() {
    qjs::Context::Module &_module = _General;
    _module.class_<TCPServer>("TCPServer")
           .constructor<>()
		    .fun<static_cast<Error(TCPServer::*)(uint16 *,const String &)>(&TCPServer::listen)>("listen")
		    .fun<static_cast<bool(TCPServer::*)()const>(&TCPServer::is_connection_available)>("is_connection_available")
		    .fun<static_cast<bool(TCPServer::*)()const>(&TCPServer::is_listening)>("is_listening")
		    .fun<static_cast<int32_t(TCPServer::*)()const>(&TCPServer::get_local_port)>("get_local_port")
		    .fun<static_cast<Ref<StreamPeerTCP>(TCPServer::*)()>(&TCPServer::take_connection)>("take_connection")
		    .fun<static_cast<void(TCPServer::*)()>(&TCPServer::stop)>("stop")
;}