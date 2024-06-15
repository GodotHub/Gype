#include <godot_cpp/classes/tcp_server.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/stream_peer_tcp.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TCPServer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TCPServer>("TCPServer")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Error(TCPServer::*)(uint16_t,const String &)>(&TCPServer::listen)>("listen")
            .fun<static_cast<bool(TCPServer::*)()const>(&TCPServer::is_connection_available)>("is_connection_available")
            .fun<static_cast<bool(TCPServer::*)()const>(&TCPServer::is_listening)>("is_listening")
            .fun<static_cast<int32_t(TCPServer::*)()const>(&TCPServer::get_local_port)>("get_local_port")
            .fun<static_cast<Ref<StreamPeerTCP>(TCPServer::*)()>(&TCPServer::take_connection)>("take_connection")
            .fun<static_cast<void(TCPServer::*)()>(&TCPServer::stop)>("stop")
;}