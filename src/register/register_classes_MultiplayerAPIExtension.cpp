
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/multiplayer_api_extension.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiplayerAPIExtension() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MultiplayerAPIExtension>("MultiplayerAPIExtension")
			.constructor<>()
			.base<MultiplayerAPI>()
			.fun<static_cast<Error (MultiplayerAPIExtension::*)()>(&MultiplayerAPIExtension::_poll)>((new std::string("_poll"))->c_str())
			.fun<static_cast<void (MultiplayerAPIExtension::*)(const Ref<MultiplayerPeer> &)>(&MultiplayerAPIExtension::_set_multiplayer_peer)>((new std::string("_set_multiplayer_peer"))->c_str())
			.fun<static_cast<Ref<MultiplayerPeer> (MultiplayerAPIExtension::*)()>(&MultiplayerAPIExtension::_get_multiplayer_peer)>((new std::string("_get_multiplayer_peer"))->c_str())
			.fun<static_cast<int32_t (MultiplayerAPIExtension::*)() const>(&MultiplayerAPIExtension::_get_unique_id)>((new std::string("_get_unique_id"))->c_str())
			.fun<static_cast<PackedInt32Array (MultiplayerAPIExtension::*)() const>(&MultiplayerAPIExtension::_get_peer_ids)>((new std::string("_get_peer_ids"))->c_str())
			.fun<static_cast<Error (MultiplayerAPIExtension::*)(int32_t, Object *, const StringName &, const Array &)>(&MultiplayerAPIExtension::_rpc)>((new std::string("_rpc"))->c_str())
			.fun<static_cast<int32_t (MultiplayerAPIExtension::*)() const>(&MultiplayerAPIExtension::_get_remote_sender_id)>((new std::string("_get_remote_sender_id"))->c_str())
			.fun<static_cast<Error (MultiplayerAPIExtension::*)(Object *, const Variant &)>(&MultiplayerAPIExtension::_object_configuration_add)>((new std::string("_object_configuration_add"))->c_str())
			.fun<static_cast<Error (MultiplayerAPIExtension::*)(Object *, const Variant &)>(&MultiplayerAPIExtension::_object_configuration_remove)>((new std::string("_object_configuration_remove"))->c_str());
}