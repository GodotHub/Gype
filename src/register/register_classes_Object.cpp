#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/templates/vararg.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Object() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Object>("Object")
            .constructor<>()
            .static_fun<&Object::NOTIFICATION_POSTINITIALIZE>("NOTIFICATION_POSTINITIALIZE")
            .static_fun<&Object::NOTIFICATION_PREDELETE>("NOTIFICATION_PREDELETE")
            .static_fun<&Object::NOTIFICATION_EXTENSION_RELOADED>("NOTIFICATION_EXTENSION_RELOADED")
            .fun<static_cast<String(Object::*)()const>(&Object::get_class)>("get_class")
            .fun<static_cast<bool(Object::*)(const String &)const>(&Object::is_class)>("is_class")
            .fun<static_cast<void(Object::*)(const StringName &,const Variant &)>(&Object::set)>("set")
            .fun<static_cast<Variant(Object::*)(const StringName &)const>(&Object::get)>("get")
            .fun<static_cast<void(Object::*)(const NodePath &,const Variant &)>(&Object::set_indexed)>("set_indexed")
            .fun<static_cast<Variant(Object::*)(const NodePath &)const>(&Object::get_indexed)>("get_indexed")
            .fun<static_cast<TypedArray<Dictionary>(Object::*)()const>(&Object::get_property_list)>("get_property_list")
            .fun<static_cast<TypedArray<Dictionary>(Object::*)()const>(&Object::get_method_list)>("get_method_list")
            .fun<static_cast<bool(Object::*)(const StringName &)const>(&Object::property_can_revert)>("property_can_revert")
            .fun<static_cast<Variant(Object::*)(const StringName &)const>(&Object::property_get_revert)>("property_get_revert")
            .fun<static_cast<void(Object::*)(int32_t,bool)>(&Object::notification)>("notification")
            .fun<static_cast<String(Object::*)()>(&Object::to_string)>("to_string")
            .fun<static_cast<uint64_t(Object::*)()const>(&Object::get_instance_id)>("get_instance_id")
            .fun<static_cast<void(Object::*)(const Variant &)>(&Object::set_script)>("set_script")
            .fun<static_cast<Variant(Object::*)()const>(&Object::get_script)>("get_script")
            .fun<static_cast<void(Object::*)(const StringName &,const Variant &)>(&Object::set_meta)>("set_meta")
            .fun<static_cast<void(Object::*)(const StringName &)>(&Object::remove_meta)>("remove_meta")
            .fun<static_cast<Variant(Object::*)(const StringName &,const Variant &)const>(&Object::get_meta)>("get_meta")
            .fun<static_cast<bool(Object::*)(const StringName &)const>(&Object::has_meta)>("has_meta")
            .fun<static_cast<TypedArray<StringName>(Object::*)()const>(&Object::get_meta_list)>("get_meta_list")
            .fun<static_cast<void(Object::*)(const String &,const Array &)>(&Object::add_user_signal)>("add_user_signal")
            .fun<static_cast<bool(Object::*)(const StringName &)const>(&Object::has_user_signal)>("has_user_signal")
            .fun<static_cast<void(Object::*)(const StringName &)>(&Object::remove_user_signal)>("remove_user_signal")
            .fun<static_cast<Error(Object::*)(const StringName &,rest<Variant> args)>(&Object::emit_signal)>("emit_signal")
            .fun<static_cast<Variant(Object::*)(const StringName &,rest<Variant> args)>(&Object::call)>("call")
            .fun<static_cast<Variant(Object::*)(const StringName &,rest<Variant> args)>(&Object::call_deferred)>("call_deferred")
            .fun<static_cast<void(Object::*)(const StringName &,const Variant &)>(&Object::set_deferred)>("set_deferred")
            .fun<static_cast<Variant(Object::*)(const StringName &,const Array &)>(&Object::callv)>("callv")
            .fun<static_cast<bool(Object::*)(const StringName &)const>(&Object::has_method)>("has_method")
            .fun<static_cast<int32_t(Object::*)(const StringName &)const>(&Object::get_method_argument_count)>("get_method_argument_count")
            .fun<static_cast<bool(Object::*)(const StringName &)const>(&Object::has_signal)>("has_signal")
            .fun<static_cast<TypedArray<Dictionary>(Object::*)()const>(&Object::get_signal_list)>("get_signal_list")
            .fun<static_cast<TypedArray<Dictionary>(Object::*)(const StringName &)const>(&Object::get_signal_connection_list)>("get_signal_connection_list")
            .fun<static_cast<TypedArray<Dictionary>(Object::*)()const>(&Object::get_incoming_connections)>("get_incoming_connections")
            .fun<static_cast<Error(Object::*)(const StringName &,const Callable &,uint32_t)>(&Object::connect)>("connect")
            .fun<static_cast<void(Object::*)(const StringName &,const Callable &)>(&Object::disconnect)>("disconnect")
            .fun<static_cast<bool(Object::*)(const StringName &,const Callable &)const>(&Object::is_connected)>("is_connected")
            .fun<static_cast<void(Object::*)(bool)>(&Object::set_block_signals)>("set_block_signals")
            .fun<static_cast<bool(Object::*)()const>(&Object::is_blocking_signals)>("is_blocking_signals")
            .fun<static_cast<void(Object::*)()>(&Object::notify_property_list_changed)>("notify_property_list_changed")
            .fun<static_cast<void(Object::*)(bool)>(&Object::set_message_translation)>("set_message_translation")
            .fun<static_cast<bool(Object::*)()const>(&Object::can_translate_messages)>("can_translate_messages")
            .fun<static_cast<String(Object::*)(const StringName &,const StringName &)const>(&Object::tr)>("tr")
            .fun<static_cast<String(Object::*)(const StringName &,const StringName &,int32_t,const StringName &)const>(&Object::tr_n)>("tr_n")
            .fun<static_cast<bool(Object::*)()const>(&Object::is_queued_for_deletion)>("is_queued_for_deletion")
            .fun<static_cast<void(Object::*)()>(&Object::cancel_free)>("cancel_free")
;    qjs::Value _ConnectFlags = context->newObject();
    _ConnectFlags["CONNECT_DEFERRED"] = Object::ConnectFlags::CONNECT_DEFERRED;
    _ConnectFlags["CONNECT_PERSIST"] = Object::ConnectFlags::CONNECT_PERSIST;
    _ConnectFlags["CONNECT_ONE_SHOT"] = Object::ConnectFlags::CONNECT_ONE_SHOT;
    _ConnectFlags["CONNECT_REFERENCE_COUNTED"] = Object::ConnectFlags::CONNECT_REFERENCE_COUNTED;
    _module.add("ConnectFlags", std::move(_ConnectFlags));
}