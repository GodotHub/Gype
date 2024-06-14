
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Object() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Object>("Object")
			.constructor<>()
			.static_fun<&Object::NOTIFICATION_POSTINITIALIZE>((new std::string("NOTIFICATION_POSTINITIALIZE"))->c_str())
			.static_fun<&Object::NOTIFICATION_PREDELETE>((new std::string("NOTIFICATION_PREDELETE"))->c_str())
			.static_fun<&Object::NOTIFICATION_EXTENSION_RELOADED>((new std::string("NOTIFICATION_EXTENSION_RELOADED"))->c_str())
			.fun<static_cast<String (Object::*)() const>(&Object::get_class)>((new std::string("get_class"))->c_str())
			.fun<static_cast<bool (Object::*)(const String &) const>(&Object::is_class)>((new std::string("is_class"))->c_str())
			.fun<static_cast<void (Object::*)(const StringName &, const Variant &)>(&Object::set)>((new std::string("set"))->c_str())
			.fun<static_cast<Variant (Object::*)(const StringName &) const>(&Object::get)>((new std::string("get"))->c_str())
			.fun<static_cast<void (Object::*)(const NodePath &, const Variant &)>(&Object::set_indexed)>((new std::string("set_indexed"))->c_str())
			.fun<static_cast<Variant (Object::*)(const NodePath &) const>(&Object::get_indexed)>((new std::string("get_indexed"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (Object::*)() const>(&Object::get_property_list)>((new std::string("get_property_list"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (Object::*)() const>(&Object::get_method_list)>((new std::string("get_method_list"))->c_str())
			.fun<static_cast<bool (Object::*)(const StringName &) const>(&Object::property_can_revert)>((new std::string("property_can_revert"))->c_str())
			.fun<static_cast<Variant (Object::*)(const StringName &) const>(&Object::property_get_revert)>((new std::string("property_get_revert"))->c_str())
			.fun<static_cast<void (Object::*)(int32_t, bool)>(&Object::notification)>((new std::string("notification"))->c_str())
			.fun<static_cast<String (Object::*)()>(&Object::to_string)>((new std::string("to_string"))->c_str())
			.fun<static_cast<uint64_t (Object::*)() const>(&Object::get_instance_id)>((new std::string("get_instance_id"))->c_str())
			.fun<static_cast<void (Object::*)(const Variant &)>(&Object::set_script)>((new std::string("set_script"))->c_str())
			.fun<static_cast<Variant (Object::*)() const>(&Object::get_script)>((new std::string("get_script"))->c_str())
			.fun<static_cast<void (Object::*)(const StringName &, const Variant &)>(&Object::set_meta)>((new std::string("set_meta"))->c_str())
			.fun<static_cast<void (Object::*)(const StringName &)>(&Object::remove_meta)>((new std::string("remove_meta"))->c_str())
			.fun<static_cast<Variant (Object::*)(const StringName &, const Variant &) const>(&Object::get_meta)>((new std::string("get_meta"))->c_str())
			.fun<static_cast<bool (Object::*)(const StringName &) const>(&Object::has_meta)>((new std::string("has_meta"))->c_str())
			.fun<static_cast<TypedArray<StringName> (Object::*)() const>(&Object::get_meta_list)>((new std::string("get_meta_list"))->c_str())
			.fun<static_cast<void (Object::*)(const String &, const Array &)>(&Object::add_user_signal)>((new std::string("add_user_signal"))->c_str())
			.fun<static_cast<bool (Object::*)(const StringName &) const>(&Object::has_user_signal)>((new std::string("has_user_signal"))->c_str())
			.fun<static_cast<void (Object::*)(const StringName &)>(&Object::remove_user_signal)>((new std::string("remove_user_signal"))->c_str())
			.fun<static_cast<Error (Object::*)(const StringName &, rest<Variant> args)>(&Object::emit_signal)>((new std::string("emit_signal"))->c_str())
			.fun<static_cast<Variant (Object::*)(const StringName &, rest<Variant> args)>(&Object::call)>((new std::string("call"))->c_str())
			.fun<static_cast<Variant (Object::*)(const StringName &, rest<Variant> args)>(&Object::call_deferred)>((new std::string("call_deferred"))->c_str())
			.fun<static_cast<void (Object::*)(const StringName &, const Variant &)>(&Object::set_deferred)>((new std::string("set_deferred"))->c_str())
			.fun<static_cast<Variant (Object::*)(const StringName &, const Array &)>(&Object::callv)>((new std::string("callv"))->c_str())
			.fun<static_cast<bool (Object::*)(const StringName &) const>(&Object::has_method)>((new std::string("has_method"))->c_str())
			.fun<static_cast<int32_t (Object::*)(const StringName &) const>(&Object::get_method_argument_count)>((new std::string("get_method_argument_count"))->c_str())
			.fun<static_cast<bool (Object::*)(const StringName &) const>(&Object::has_signal)>((new std::string("has_signal"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (Object::*)() const>(&Object::get_signal_list)>((new std::string("get_signal_list"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (Object::*)(const StringName &) const>(&Object::get_signal_connection_list)>((new std::string("get_signal_connection_list"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (Object::*)() const>(&Object::get_incoming_connections)>((new std::string("get_incoming_connections"))->c_str())
			.fun<static_cast<Error (Object::*)(const StringName &, const Callable &, uint32_t)>(&Object::connect)>((new std::string("connect"))->c_str())
			.fun<static_cast<void (Object::*)(const StringName &, const Callable &)>(&Object::disconnect)>((new std::string("disconnect"))->c_str())
			.fun<static_cast<bool (Object::*)(const StringName &, const Callable &) const>(&Object::is_connected)>((new std::string("is_connected"))->c_str())
			.fun<static_cast<void (Object::*)(bool)>(&Object::set_block_signals)>((new std::string("set_block_signals"))->c_str())
			.fun<static_cast<bool (Object::*)() const>(&Object::is_blocking_signals)>((new std::string("is_blocking_signals"))->c_str())
			.fun<static_cast<void (Object::*)()>(&Object::notify_property_list_changed)>((new std::string("notify_property_list_changed"))->c_str())
			.fun<static_cast<void (Object::*)(bool)>(&Object::set_message_translation)>((new std::string("set_message_translation"))->c_str())
			.fun<static_cast<bool (Object::*)() const>(&Object::can_translate_messages)>((new std::string("can_translate_messages"))->c_str())
			.fun<static_cast<String (Object::*)(const StringName &, const StringName &) const>(&Object::tr)>((new std::string("tr"))->c_str())
			.fun<static_cast<String (Object::*)(const StringName &, const StringName &, int32_t, const StringName &) const>(&Object::tr_n)>((new std::string("tr_n"))->c_str())
			.fun<static_cast<bool (Object::*)() const>(&Object::is_queued_for_deletion)>((new std::string("is_queued_for_deletion"))->c_str())
			.fun<static_cast<void (Object::*)()>(&Object::cancel_free)>((new std::string("cancel_free"))->c_str());
	qjs::Value _ConnectFlags = context->newObject();
	_ConnectFlags[(new std::string("CONNECT_DEFERRED"))->c_str()] = Object::ConnectFlags::CONNECT_DEFERRED;
	_ConnectFlags[(new std::string("CONNECT_PERSIST"))->c_str()] = Object::ConnectFlags::CONNECT_PERSIST;
	_ConnectFlags[(new std::string("CONNECT_ONE_SHOT"))->c_str()] = Object::ConnectFlags::CONNECT_ONE_SHOT;
	_ConnectFlags[(new std::string("CONNECT_REFERENCE_COUNTED"))->c_str()] = Object::ConnectFlags::CONNECT_REFERENCE_COUNTED;
	_module.add("ConnectFlags", std::move(_ConnectFlags));
}