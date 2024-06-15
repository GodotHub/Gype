#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MultiplayerPeer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<MultiplayerPeer>("MultiplayerPeer")
            .constructor<>()
            .base<PacketPeer>()
            .static_fun<&MultiplayerPeer::TARGET_PEER_BROADCAST>("TARGET_PEER_BROADCAST")
            .static_fun<&MultiplayerPeer::TARGET_PEER_SERVER>("TARGET_PEER_SERVER")
            .property<static_cast<bool(MultiplayerPeer::*)()const>(&MultiplayerPeer::is_refusing_new_connections),static_cast<void(MultiplayerPeer::*)(bool)>(&MultiplayerPeer::set_refuse_new_connections)>("refuse_new_connections")
            .property<static_cast<MultiplayerPeer::TransferMode(MultiplayerPeer::*)()const>(&MultiplayerPeer::get_transfer_mode),static_cast<void(MultiplayerPeer::*)(MultiplayerPeer::TransferMode)>(&MultiplayerPeer::set_transfer_mode)>("transfer_mode")
            .property<static_cast<int32_t(MultiplayerPeer::*)()const>(&MultiplayerPeer::get_transfer_channel),static_cast<void(MultiplayerPeer::*)(int32_t)>(&MultiplayerPeer::set_transfer_channel)>("transfer_channel")
            .fun<static_cast<void(MultiplayerPeer::*)(int32_t)>(&MultiplayerPeer::set_target_peer)>("set_target_peer")
            .fun<static_cast<int32_t(MultiplayerPeer::*)()const>(&MultiplayerPeer::get_packet_peer)>("get_packet_peer")
            .fun<static_cast<int32_t(MultiplayerPeer::*)()const>(&MultiplayerPeer::get_packet_channel)>("get_packet_channel")
            .fun<static_cast<MultiplayerPeer::TransferMode(MultiplayerPeer::*)()const>(&MultiplayerPeer::get_packet_mode)>("get_packet_mode")
            .fun<static_cast<void(MultiplayerPeer::*)()>(&MultiplayerPeer::poll)>("poll")
            .fun<static_cast<void(MultiplayerPeer::*)()>(&MultiplayerPeer::close)>("close")
            .fun<static_cast<void(MultiplayerPeer::*)(int32_t,bool)>(&MultiplayerPeer::disconnect_peer)>("disconnect_peer")
            .fun<static_cast<MultiplayerPeer::ConnectionStatus(MultiplayerPeer::*)()const>(&MultiplayerPeer::get_connection_status)>("get_connection_status")
            .fun<static_cast<int32_t(MultiplayerPeer::*)()const>(&MultiplayerPeer::get_unique_id)>("get_unique_id")
            .fun<static_cast<uint32_t(MultiplayerPeer::*)()const>(&MultiplayerPeer::generate_unique_id)>("generate_unique_id")
            .fun<static_cast<bool(MultiplayerPeer::*)()const>(&MultiplayerPeer::is_server_relay_supported)>("is_server_relay_supported")
;    qjs::Value _ConnectionStatus = context->newObject();
    _ConnectionStatus["CONNECTION_DISCONNECTED"] = MultiplayerPeer::ConnectionStatus::CONNECTION_DISCONNECTED;
    _ConnectionStatus["CONNECTION_CONNECTING"] = MultiplayerPeer::ConnectionStatus::CONNECTION_CONNECTING;
    _ConnectionStatus["CONNECTION_CONNECTED"] = MultiplayerPeer::ConnectionStatus::CONNECTION_CONNECTED;
    _module.add("ConnectionStatus", std::move(_ConnectionStatus));
    qjs::Value _TransferMode = context->newObject();
    _TransferMode["TRANSFER_MODE_UNRELIABLE"] = MultiplayerPeer::TransferMode::TRANSFER_MODE_UNRELIABLE;
    _TransferMode["TRANSFER_MODE_UNRELIABLE_ORDERED"] = MultiplayerPeer::TransferMode::TRANSFER_MODE_UNRELIABLE_ORDERED;
    _TransferMode["TRANSFER_MODE_RELIABLE"] = MultiplayerPeer::TransferMode::TRANSFER_MODE_RELIABLE;
    _module.add("TransferMode", std::move(_TransferMode));
}