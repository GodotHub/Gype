#include <godot_cpp/classes/e_net_connection.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_ENetConnection() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<ENetConnection>("ENetConnection")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<Error(ENetConnection::*)(const String &,int32_t,int32_t,int32_t,int32_t,int32_t)>(&ENetConnection::create_host_bound)>("create_host_bound")
            .fun<static_cast<Error(ENetConnection::*)(int32_t,int32_t,int32_t,int32_t)>(&ENetConnection::create_host)>("create_host")
            .fun<static_cast<void(ENetConnection::*)()>(&ENetConnection::destroy)>("destroy")
            .fun<static_cast<Ref<ENetPacketPeer>(ENetConnection::*)(const String &,int32_t,int32_t,int32_t)>(&ENetConnection::connect_to_host)>("connect_to_host")
            .fun<static_cast<Array(ENetConnection::*)(int32_t)>(&ENetConnection::service)>("service")
            .fun<static_cast<void(ENetConnection::*)()>(&ENetConnection::flush)>("flush")
            .fun<static_cast<void(ENetConnection::*)(int32_t,int32_t)>(&ENetConnection::bandwidth_limit)>("bandwidth_limit")
            .fun<static_cast<void(ENetConnection::*)(int32_t)>(&ENetConnection::channel_limit)>("channel_limit")
            .fun<static_cast<void(ENetConnection::*)(int32_t,const PackedByteArray &,int32_t)>(&ENetConnection::broadcast)>("broadcast")
            .fun<static_cast<void(ENetConnection::*)(ENetConnection::CompressionMode)>(&ENetConnection::compress)>("compress")
            .fun<static_cast<Error(ENetConnection::*)(const Ref<TLSOptions> &)>(&ENetConnection::dtls_server_setup)>("dtls_server_setup")
            .fun<static_cast<Error(ENetConnection::*)(const String &,const Ref<TLSOptions> &)>(&ENetConnection::dtls_client_setup)>("dtls_client_setup")
            .fun<static_cast<void(ENetConnection::*)(bool)>(&ENetConnection::refuse_new_connections)>("refuse_new_connections")
            .fun<static_cast<double(ENetConnection::*)(ENetConnection::HostStatistic)>(&ENetConnection::pop_statistic)>("pop_statistic")
            .fun<static_cast<int32_t(ENetConnection::*)()const>(&ENetConnection::get_max_channels)>("get_max_channels")
            .fun<static_cast<int32_t(ENetConnection::*)()const>(&ENetConnection::get_local_port)>("get_local_port")
            .fun<static_cast<TypedArray<ENetPacketPeer>(ENetConnection::*)()>(&ENetConnection::get_peers)>("get_peers")
            .fun<static_cast<void(ENetConnection::*)(const String &,int32_t,const PackedByteArray &)>(&ENetConnection::socket_send)>("socket_send")
;    qjs::Value _CompressionMode = context->newObject();
    _CompressionMode["COMPRESS_NONE"] = ENetConnection::CompressionMode::COMPRESS_NONE;
    _CompressionMode["COMPRESS_RANGE_CODER"] = ENetConnection::CompressionMode::COMPRESS_RANGE_CODER;
    _CompressionMode["COMPRESS_FASTLZ"] = ENetConnection::CompressionMode::COMPRESS_FASTLZ;
    _CompressionMode["COMPRESS_ZLIB"] = ENetConnection::CompressionMode::COMPRESS_ZLIB;
    _CompressionMode["COMPRESS_ZSTD"] = ENetConnection::CompressionMode::COMPRESS_ZSTD;
    _module.add("CompressionMode", std::move(_CompressionMode));
    qjs::Value _EventType = context->newObject();
    _EventType["EVENT_ERROR"] = ENetConnection::EventType::EVENT_ERROR;
    _EventType["EVENT_NONE"] = ENetConnection::EventType::EVENT_NONE;
    _EventType["EVENT_CONNECT"] = ENetConnection::EventType::EVENT_CONNECT;
    _EventType["EVENT_DISCONNECT"] = ENetConnection::EventType::EVENT_DISCONNECT;
    _EventType["EVENT_RECEIVE"] = ENetConnection::EventType::EVENT_RECEIVE;
    _module.add("EventType", std::move(_EventType));
    qjs::Value _HostStatistic = context->newObject();
    _HostStatistic["HOST_TOTAL_SENT_DATA"] = ENetConnection::HostStatistic::HOST_TOTAL_SENT_DATA;
    _HostStatistic["HOST_TOTAL_SENT_PACKETS"] = ENetConnection::HostStatistic::HOST_TOTAL_SENT_PACKETS;
    _HostStatistic["HOST_TOTAL_RECEIVED_DATA"] = ENetConnection::HostStatistic::HOST_TOTAL_RECEIVED_DATA;
    _HostStatistic["HOST_TOTAL_RECEIVED_PACKETS"] = ENetConnection::HostStatistic::HOST_TOTAL_RECEIVED_PACKETS;
    _module.add("HostStatistic", std::move(_HostStatistic));
}