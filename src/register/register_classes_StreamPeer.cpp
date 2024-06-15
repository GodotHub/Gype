#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StreamPeer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<StreamPeer>("StreamPeer")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<bool(StreamPeer::*)()const>(&StreamPeer::is_big_endian_enabled),static_cast<void(StreamPeer::*)(bool)>(&StreamPeer::set_big_endian)>("big_endian")
            .fun<static_cast<Error(StreamPeer::*)(const PackedByteArray &)>(&StreamPeer::put_data)>("put_data")
            .fun<static_cast<Array(StreamPeer::*)(const PackedByteArray &)>(&StreamPeer::put_partial_data)>("put_partial_data")
            .fun<static_cast<Array(StreamPeer::*)(int32_t)>(&StreamPeer::get_data)>("get_data")
            .fun<static_cast<Array(StreamPeer::*)(int32_t)>(&StreamPeer::get_partial_data)>("get_partial_data")
            .fun<static_cast<int32_t(StreamPeer::*)()const>(&StreamPeer::get_available_bytes)>("get_available_bytes")
            .fun<static_cast<void(StreamPeer::*)(int8_t)>(&StreamPeer::put_8)>("put_8")
            .fun<static_cast<void(StreamPeer::*)(uint8_t)>(&StreamPeer::put_u8)>("put_u8")
            .fun<static_cast<void(StreamPeer::*)(int16_t)>(&StreamPeer::put_16)>("put_16")
            .fun<static_cast<void(StreamPeer::*)(uint16_t)>(&StreamPeer::put_u16)>("put_u16")
            .fun<static_cast<void(StreamPeer::*)(int32_t)>(&StreamPeer::put_32)>("put_32")
            .fun<static_cast<void(StreamPeer::*)(uint32_t)>(&StreamPeer::put_u32)>("put_u32")
            .fun<static_cast<void(StreamPeer::*)(int64_t)>(&StreamPeer::put_64)>("put_64")
            .fun<static_cast<void(StreamPeer::*)(uint64_t)>(&StreamPeer::put_u64)>("put_u64")
            .fun<static_cast<void(StreamPeer::*)(double)>(&StreamPeer::put_float)>("put_float")
            .fun<static_cast<void(StreamPeer::*)(double)>(&StreamPeer::put_double)>("put_double")
            .fun<static_cast<void(StreamPeer::*)(const String &)>(&StreamPeer::put_string)>("put_string")
            .fun<static_cast<void(StreamPeer::*)(const String &)>(&StreamPeer::put_utf8_string)>("put_utf8_string")
            .fun<static_cast<void(StreamPeer::*)(const Variant &,bool)>(&StreamPeer::put_var)>("put_var")
            .fun<static_cast<int8_t(StreamPeer::*)()>(&StreamPeer::get_8)>("get_8")
            .fun<static_cast<uint8_t(StreamPeer::*)()>(&StreamPeer::get_u8)>("get_u8")
            .fun<static_cast<int16_t(StreamPeer::*)()>(&StreamPeer::get_16)>("get_16")
            .fun<static_cast<uint16_t(StreamPeer::*)()>(&StreamPeer::get_u16)>("get_u16")
            .fun<static_cast<int32_t(StreamPeer::*)()>(&StreamPeer::get_32)>("get_32")
            .fun<static_cast<uint32_t(StreamPeer::*)()>(&StreamPeer::get_u32)>("get_u32")
            .fun<static_cast<int64_t(StreamPeer::*)()>(&StreamPeer::get_64)>("get_64")
            .fun<static_cast<uint64_t(StreamPeer::*)()>(&StreamPeer::get_u64)>("get_u64")
            .fun<static_cast<double(StreamPeer::*)()>(&StreamPeer::get_float)>("get_float")
            .fun<static_cast<double(StreamPeer::*)()>(&StreamPeer::get_double)>("get_double")
            .fun<static_cast<String(StreamPeer::*)(int32_t)>(&StreamPeer::get_string)>("get_string")
            .fun<static_cast<String(StreamPeer::*)(int32_t)>(&StreamPeer::get_utf8_string)>("get_utf8_string")
            .fun<static_cast<Variant(StreamPeer::*)(bool)>(&StreamPeer::get_var)>("get_var")
;}