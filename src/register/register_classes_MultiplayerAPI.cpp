
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MultiplayerAPI() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MultiplayerAPI>("MultiplayerAPI")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<Ref<MultiplayerPeer> (MultiplayerAPI::*)()>(&MultiplayerAPI::get_multiplayer_peer), static_cast<void (MultiplayerAPI::*)(const Ref<MultiplayerPeer> &)>(&MultiplayerAPI::set_multiplayer_peer)>((new std::string("multiplayer_peer"))->c_str())
			.fun<static_cast<bool (MultiplayerAPI::*)()>(&MultiplayerAPI::has_multiplayer_peer)>((new std::string("has_multiplayer_peer"))->c_str())
			.fun<static_cast<int32_t (MultiplayerAPI::*)()>(&MultiplayerAPI::get_unique_id)>((new std::string("get_unique_id"))->c_str())
			.fun<static_cast<bool (MultiplayerAPI::*)()>(&MultiplayerAPI::is_server)>((new std::string("is_server"))->c_str())
			.fun<static_cast<int32_t (MultiplayerAPI::*)()>(&MultiplayerAPI::get_remote_sender_id)>((new std::string("get_remote_sender_id"))->c_str())
			.fun<static_cast<Error (MultiplayerAPI::*)()>(&MultiplayerAPI::poll)>((new std::string("poll"))->c_str())
			.fun<static_cast<Error (MultiplayerAPI::*)(int32_t, Object *, const StringName &, const Array &)>(&MultiplayerAPI::rpc)>((new std::string("rpc"))->c_str())
			.fun<static_cast<Error (MultiplayerAPI::*)(Object *, const Variant &)>(&MultiplayerAPI::object_configuration_add)>((new std::string("object_configuration_add"))->c_str())
			.fun<static_cast<Error (MultiplayerAPI::*)(Object *, const Variant &)>(&MultiplayerAPI::object_configuration_remove)>((new std::string("object_configuration_remove"))->c_str())
			.fun<static_cast<PackedInt32Array (MultiplayerAPI::*)()>(&MultiplayerAPI::get_peers)>((new std::string("get_peers"))->c_str())
			.static_fun<static_cast<void (*)(const StringName &)>(&MultiplayerAPI::set_default_interface)>((new std::string("set_default_interface"))->c_str())
			.static_fun<static_cast<StringName (*)()>(&MultiplayerAPI::get_default_interface)>((new std::string("get_default_interface"))->c_str())
			.static_fun<static_cast<Ref<MultiplayerAPI> (*)()>(&MultiplayerAPI::create_default_interface)>((new std::string("create_default_interface"))->c_str());
	qjs::Value _RPCMode = context->newObject();
	_RPCMode[(new std::string("RPC_MODE_DISABLED"))->c_str()] = MultiplayerAPI::RPCMode::RPC_MODE_DISABLED;
	_RPCMode[(new std::string("RPC_MODE_ANY_PEER"))->c_str()] = MultiplayerAPI::RPCMode::RPC_MODE_ANY_PEER;
	_RPCMode[(new std::string("RPC_MODE_AUTHORITY"))->c_str()] = MultiplayerAPI::RPCMode::RPC_MODE_AUTHORITY;
	_module.add("RPCMode", std::move(_RPCMode));
}