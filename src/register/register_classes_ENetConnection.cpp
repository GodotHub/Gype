#include <godot_cpp/classes/e_net_connection.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ENetConnection() {
	qjs::Context::Module &_module = _General;
	_module.class_<ENetConnection>("ENetConnection")
			.constructor<>()
			.fun<static_cast<Error (ENetConnection::*)(const String &, int32_t, int32_t, int32_t, int32_t, int32_t)>(&ENetConnection::create_host_bound)>("create_host_bound")
			.fun<static_cast<Error (ENetConnection::*)(int32_t, int32_t, int32_t, int32_t)>(&ENetConnection::create_host)>("create_host")
			.fun<static_cast<void (ENetConnection::*)()>(&ENetConnection::destroy)>("destroy")
			.fun<static_cast<Ref<ENetPacketPeer> (ENetConnection::*)(const String &, int32_t, int32_t, int32_t)>(&ENetConnection::connect_to_host)>("connect_to_host")
			.fun<static_cast<Array (ENetConnection::*)(int32_t)>(&ENetConnection::service)>("service")
			.fun<static_cast<void (ENetConnection::*)()>(&ENetConnection::flush)>("flush")
			.fun<static_cast<void (ENetConnection::*)(int32_t, int32_t)>(&ENetConnection::bandwidth_limit)>("bandwidth_limit")
			.fun<static_cast<void (ENetConnection::*)(int32_t)>(&ENetConnection::channel_limit)>("channel_limit")
			.fun<static_cast<void (ENetConnection::*)(int32_t, const PackedByteArray &, int32_t)>(&ENetConnection::broadcast)>("broadcast")
			.fun<static_cast<void (ENetConnection::*)(ENetConnection::CompressionMode)>(&ENetConnection::compress)>("compress")
			.fun<static_cast<Error (ENetConnection::*)(const Ref<TLSOptions> &)>(&ENetConnection::dtls_server_setup)>("dtls_server_setup")
			.fun<static_cast<Error (ENetConnection::*)(const String &, const Ref<TLSOptions> &)>(&ENetConnection::dtls_client_setup)>("dtls_client_setup")
			.fun<static_cast<void (ENetConnection::*)(bool)>(&ENetConnection::refuse_new_connections)>("refuse_new_connections")
			.fun<static_cast<double (ENetConnection::*)(ENetConnection::HostStatistic)>(&ENetConnection::pop_statistic)>("pop_statistic")
			.fun<static_cast<int32_t (ENetConnection::*)() const>(&ENetConnection::get_max_channels)>("get_max_channels")
			.fun<static_cast<int32_t (ENetConnection::*)() const>(&ENetConnection::get_local_port)>("get_local_port")
			.fun<static_cast<TypedArray<ENetPacketPeer> (ENetConnection::*)()>(&ENetConnection::get_peers)>("get_peers")
			.fun<static_cast<void (ENetConnection::*)(const String &, int32_t, const PackedByteArray &)>(&ENetConnection::socket_send)>("socket_send");
}