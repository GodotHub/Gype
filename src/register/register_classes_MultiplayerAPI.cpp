#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MultiplayerAPI() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<MultiplayerAPI>("MultiplayerAPI")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<Ref<MultiplayerPeer>(MultiplayerAPI::*)()>(&MultiplayerAPI::get_multiplayer_peer),static_cast<void(MultiplayerAPI::*)(const Ref<MultiplayerPeer> &)>(&MultiplayerAPI::set_multiplayer_peer)>("multiplayer_peer")
            .fun<static_cast<bool(MultiplayerAPI::*)()>(&MultiplayerAPI::has_multiplayer_peer)>("has_multiplayer_peer")
            .fun<static_cast<int32_t(MultiplayerAPI::*)()>(&MultiplayerAPI::get_unique_id)>("get_unique_id")
            .fun<static_cast<bool(MultiplayerAPI::*)()>(&MultiplayerAPI::is_server)>("is_server")
            .fun<static_cast<int32_t(MultiplayerAPI::*)()>(&MultiplayerAPI::get_remote_sender_id)>("get_remote_sender_id")
            .fun<static_cast<Error(MultiplayerAPI::*)()>(&MultiplayerAPI::poll)>("poll")
            .fun<static_cast<Error(MultiplayerAPI::*)(int32_t,Object *,const StringName &,const Array &)>(&MultiplayerAPI::rpc)>("rpc")
            .fun<static_cast<Error(MultiplayerAPI::*)(Object *,const Variant &)>(&MultiplayerAPI::object_configuration_add)>("object_configuration_add")
            .fun<static_cast<Error(MultiplayerAPI::*)(Object *,const Variant &)>(&MultiplayerAPI::object_configuration_remove)>("object_configuration_remove")
            .fun<static_cast<PackedInt32Array(MultiplayerAPI::*)()>(&MultiplayerAPI::get_peers)>("get_peers")
            .static_fun<static_cast<void(*)(const StringName &)>(&MultiplayerAPI::set_default_interface)>("set_default_interface")
            .static_fun<static_cast<StringName(*)()>(&MultiplayerAPI::get_default_interface)>("get_default_interface")
            .static_fun<static_cast<Ref<MultiplayerAPI>(*)()>(&MultiplayerAPI::create_default_interface)>("create_default_interface")
;    qjs::Value _RPCMode = context->newObject();
    _RPCMode["RPC_MODE_DISABLED"] = MultiplayerAPI::RPCMode::RPC_MODE_DISABLED;
    _RPCMode["RPC_MODE_ANY_PEER"] = MultiplayerAPI::RPCMode::RPC_MODE_ANY_PEER;
    _RPCMode["RPC_MODE_AUTHORITY"] = MultiplayerAPI::RPCMode::RPC_MODE_AUTHORITY;
    _module.add("RPCMode", std::move(_RPCMode));
}