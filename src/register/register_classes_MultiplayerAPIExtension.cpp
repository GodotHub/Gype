#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/multiplayer_api_extension.hpp>

using namespace godot;

void register_classes_MultiplayerAPIExtension() {
    qjs::Context::Module &_module = _General;
    _module.class_<MultiplayerAPIExtension>("MultiplayerAPIExtension")
           .constructor<>()
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