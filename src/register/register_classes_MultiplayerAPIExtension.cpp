#include <godot_cpp/classes/multiplayer_api_extension.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MultiplayerAPIExtension() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<MultiplayerAPIExtension>("MultiplayerAPIExtension")
            .constructor<>()
            .base<MultiplayerAPI>()
            .fun<static_cast<Error(MultiplayerAPIExtension::*)()>(&MultiplayerAPIExtension::_poll)>("_poll")
            .fun<static_cast<void(MultiplayerAPIExtension::*)(const Ref<MultiplayerPeer> &)>(&MultiplayerAPIExtension::_set_multiplayer_peer)>("_set_multiplayer_peer")
            .fun<static_cast<Ref<MultiplayerPeer>(MultiplayerAPIExtension::*)()>(&MultiplayerAPIExtension::_get_multiplayer_peer)>("_get_multiplayer_peer")
            .fun<static_cast<int32_t(MultiplayerAPIExtension::*)()const>(&MultiplayerAPIExtension::_get_unique_id)>("_get_unique_id")
            .fun<static_cast<PackedInt32Array(MultiplayerAPIExtension::*)()const>(&MultiplayerAPIExtension::_get_peer_ids)>("_get_peer_ids")
            .fun<static_cast<Error(MultiplayerAPIExtension::*)(int32_t,Object *,const StringName &,const Array &)>(&MultiplayerAPIExtension::_rpc)>("_rpc")
            .fun<static_cast<int32_t(MultiplayerAPIExtension::*)()const>(&MultiplayerAPIExtension::_get_remote_sender_id)>("_get_remote_sender_id")
            .fun<static_cast<Error(MultiplayerAPIExtension::*)(Object *,const Variant &)>(&MultiplayerAPIExtension::_object_configuration_add)>("_object_configuration_add")
            .fun<static_cast<Error(MultiplayerAPIExtension::*)(Object *,const Variant &)>(&MultiplayerAPIExtension::_object_configuration_remove)>("_object_configuration_remove")
;}