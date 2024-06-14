
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_StreamPeer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<StreamPeer>("StreamPeer")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<bool (StreamPeer::*)() const>(&StreamPeer::is_big_endian_enabled), static_cast<void (StreamPeer::*)(bool)>(&StreamPeer::set_big_endian)>((new std::string("big_endian"))->c_str())
			.fun<static_cast<Error (StreamPeer::*)(const PackedByteArray &)>(&StreamPeer::put_data)>((new std::string("put_data"))->c_str())
			.fun<static_cast<Array (StreamPeer::*)(const PackedByteArray &)>(&StreamPeer::put_partial_data)>((new std::string("put_partial_data"))->c_str())
			.fun<static_cast<Array (StreamPeer::*)(int32_t)>(&StreamPeer::get_data)>((new std::string("get_data"))->c_str())
			.fun<static_cast<Array (StreamPeer::*)(int32_t)>(&StreamPeer::get_partial_data)>((new std::string("get_partial_data"))->c_str())
			.fun<static_cast<int32_t (StreamPeer::*)() const>(&StreamPeer::get_available_bytes)>((new std::string("get_available_bytes"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(int8_t)>(&StreamPeer::put_8)>((new std::string("put_8"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(uint8_t)>(&StreamPeer::put_u8)>((new std::string("put_u8"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(int16_t)>(&StreamPeer::put_16)>((new std::string("put_16"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(uint16_t)>(&StreamPeer::put_u16)>((new std::string("put_u16"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(int32_t)>(&StreamPeer::put_32)>((new std::string("put_32"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(uint32_t)>(&StreamPeer::put_u32)>((new std::string("put_u32"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(int64_t)>(&StreamPeer::put_64)>((new std::string("put_64"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(uint64_t)>(&StreamPeer::put_u64)>((new std::string("put_u64"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(double)>(&StreamPeer::put_float)>((new std::string("put_float"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(double)>(&StreamPeer::put_double)>((new std::string("put_double"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(const String &)>(&StreamPeer::put_string)>((new std::string("put_string"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(const String &)>(&StreamPeer::put_utf8_string)>((new std::string("put_utf8_string"))->c_str())
			.fun<static_cast<void (StreamPeer::*)(const Variant &, bool)>(&StreamPeer::put_var)>((new std::string("put_var"))->c_str())
			.fun<static_cast<int8_t (StreamPeer::*)()>(&StreamPeer::get_8)>((new std::string("get_8"))->c_str())
			.fun<static_cast<uint8_t (StreamPeer::*)()>(&StreamPeer::get_u8)>((new std::string("get_u8"))->c_str())
			.fun<static_cast<int16_t (StreamPeer::*)()>(&StreamPeer::get_16)>((new std::string("get_16"))->c_str())
			.fun<static_cast<uint16_t (StreamPeer::*)()>(&StreamPeer::get_u16)>((new std::string("get_u16"))->c_str())
			.fun<static_cast<int32_t (StreamPeer::*)()>(&StreamPeer::get_32)>((new std::string("get_32"))->c_str())
			.fun<static_cast<uint32_t (StreamPeer::*)()>(&StreamPeer::get_u32)>((new std::string("get_u32"))->c_str())
			.fun<static_cast<int64_t (StreamPeer::*)()>(&StreamPeer::get_64)>((new std::string("get_64"))->c_str())
			.fun<static_cast<uint64_t (StreamPeer::*)()>(&StreamPeer::get_u64)>((new std::string("get_u64"))->c_str())
			.fun<static_cast<double (StreamPeer::*)()>(&StreamPeer::get_float)>((new std::string("get_float"))->c_str())
			.fun<static_cast<double (StreamPeer::*)()>(&StreamPeer::get_double)>((new std::string("get_double"))->c_str())
			.fun<static_cast<String (StreamPeer::*)(int32_t)>(&StreamPeer::get_string)>((new std::string("get_string"))->c_str())
			.fun<static_cast<String (StreamPeer::*)(int32_t)>(&StreamPeer::get_utf8_string)>((new std::string("get_utf8_string"))->c_str())
			.fun<static_cast<Variant (StreamPeer::*)(bool)>(&StreamPeer::get_var)>((new std::string("get_var"))->c_str());
}