
#include <godot_cpp/classes/e_net_connection.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ENetConnection() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ENetConnection>("ENetConnection")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<Error (ENetConnection::*)(const String &, int32_t, int32_t, int32_t, int32_t, int32_t)>(&ENetConnection::create_host_bound)>((new std::string("create_host_bound"))->c_str())
			.fun<static_cast<Error (ENetConnection::*)(int32_t, int32_t, int32_t, int32_t)>(&ENetConnection::create_host)>((new std::string("create_host"))->c_str())
			.fun<static_cast<void (ENetConnection::*)()>(&ENetConnection::destroy)>((new std::string("destroy"))->c_str())
			.fun<static_cast<Ref<ENetPacketPeer> (ENetConnection::*)(const String &, int32_t, int32_t, int32_t)>(&ENetConnection::connect_to_host)>((new std::string("connect_to_host"))->c_str())
			.fun<static_cast<Array (ENetConnection::*)(int32_t)>(&ENetConnection::service)>((new std::string("service"))->c_str())
			.fun<static_cast<void (ENetConnection::*)()>(&ENetConnection::flush)>((new std::string("flush"))->c_str())
			.fun<static_cast<void (ENetConnection::*)(int32_t, int32_t)>(&ENetConnection::bandwidth_limit)>((new std::string("bandwidth_limit"))->c_str())
			.fun<static_cast<void (ENetConnection::*)(int32_t)>(&ENetConnection::channel_limit)>((new std::string("channel_limit"))->c_str())
			.fun<static_cast<void (ENetConnection::*)(int32_t, const PackedByteArray &, int32_t)>(&ENetConnection::broadcast)>((new std::string("broadcast"))->c_str())
			.fun<static_cast<void (ENetConnection::*)(ENetConnection::CompressionMode)>(&ENetConnection::compress)>((new std::string("compress"))->c_str())
			.fun<static_cast<Error (ENetConnection::*)(const Ref<TLSOptions> &)>(&ENetConnection::dtls_server_setup)>((new std::string("dtls_server_setup"))->c_str())
			.fun<static_cast<Error (ENetConnection::*)(const String &, const Ref<TLSOptions> &)>(&ENetConnection::dtls_client_setup)>((new std::string("dtls_client_setup"))->c_str())
			.fun<static_cast<void (ENetConnection::*)(bool)>(&ENetConnection::refuse_new_connections)>((new std::string("refuse_new_connections"))->c_str())
			.fun<static_cast<double (ENetConnection::*)(ENetConnection::HostStatistic)>(&ENetConnection::pop_statistic)>((new std::string("pop_statistic"))->c_str())
			.fun<static_cast<int32_t (ENetConnection::*)() const>(&ENetConnection::get_max_channels)>((new std::string("get_max_channels"))->c_str())
			.fun<static_cast<int32_t (ENetConnection::*)() const>(&ENetConnection::get_local_port)>((new std::string("get_local_port"))->c_str())
			.fun<static_cast<TypedArray<ENetPacketPeer> (ENetConnection::*)()>(&ENetConnection::get_peers)>((new std::string("get_peers"))->c_str())
			.fun<static_cast<void (ENetConnection::*)(const String &, int32_t, const PackedByteArray &)>(&ENetConnection::socket_send)>((new std::string("socket_send"))->c_str());
	qjs::Value _CompressionMode = context->newObject();
	_CompressionMode[(new std::string("COMPRESS_NONE"))->c_str()] = ENetConnection::CompressionMode::COMPRESS_NONE;
	_CompressionMode[(new std::string("COMPRESS_RANGE_CODER"))->c_str()] = ENetConnection::CompressionMode::COMPRESS_RANGE_CODER;
	_CompressionMode[(new std::string("COMPRESS_FASTLZ"))->c_str()] = ENetConnection::CompressionMode::COMPRESS_FASTLZ;
	_CompressionMode[(new std::string("COMPRESS_ZLIB"))->c_str()] = ENetConnection::CompressionMode::COMPRESS_ZLIB;
	_CompressionMode[(new std::string("COMPRESS_ZSTD"))->c_str()] = ENetConnection::CompressionMode::COMPRESS_ZSTD;
	_module.add("CompressionMode", std::move(_CompressionMode));
	qjs::Value _EventType = context->newObject();
	_EventType[(new std::string("EVENT_ERROR"))->c_str()] = ENetConnection::EventType::EVENT_ERROR;
	_EventType[(new std::string("EVENT_NONE"))->c_str()] = ENetConnection::EventType::EVENT_NONE;
	_EventType[(new std::string("EVENT_CONNECT"))->c_str()] = ENetConnection::EventType::EVENT_CONNECT;
	_EventType[(new std::string("EVENT_DISCONNECT"))->c_str()] = ENetConnection::EventType::EVENT_DISCONNECT;
	_EventType[(new std::string("EVENT_RECEIVE"))->c_str()] = ENetConnection::EventType::EVENT_RECEIVE;
	_module.add("EventType", std::move(_EventType));
	qjs::Value _HostStatistic = context->newObject();
	_HostStatistic[(new std::string("HOST_TOTAL_SENT_DATA"))->c_str()] = ENetConnection::HostStatistic::HOST_TOTAL_SENT_DATA;
	_HostStatistic[(new std::string("HOST_TOTAL_SENT_PACKETS"))->c_str()] = ENetConnection::HostStatistic::HOST_TOTAL_SENT_PACKETS;
	_HostStatistic[(new std::string("HOST_TOTAL_RECEIVED_DATA"))->c_str()] = ENetConnection::HostStatistic::HOST_TOTAL_RECEIVED_DATA;
	_HostStatistic[(new std::string("HOST_TOTAL_RECEIVED_PACKETS"))->c_str()] = ENetConnection::HostStatistic::HOST_TOTAL_RECEIVED_PACKETS;
	_module.add("HostStatistic", std::move(_HostStatistic));
}