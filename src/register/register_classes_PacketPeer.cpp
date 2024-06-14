
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PacketPeer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PacketPeer>("PacketPeer")
			.constructor<>()
			.base<RefCounted>()
			.property<static_cast<int32_t (PacketPeer::*)() const>(&PacketPeer::get_encode_buffer_max_size), static_cast<void (PacketPeer::*)(int32_t)>(&PacketPeer::set_encode_buffer_max_size)>((new std::string("encode_buffer_max_size"))->c_str())
			.fun<static_cast<Variant (PacketPeer::*)(bool)>(&PacketPeer::get_var)>((new std::string("get_var"))->c_str())
			.fun<static_cast<Error (PacketPeer::*)(const Variant &, bool)>(&PacketPeer::put_var)>((new std::string("put_var"))->c_str())
			.fun<static_cast<PackedByteArray (PacketPeer::*)()>(&PacketPeer::get_packet)>((new std::string("get_packet"))->c_str())
			.fun<static_cast<Error (PacketPeer::*)(const PackedByteArray &)>(&PacketPeer::put_packet)>((new std::string("put_packet"))->c_str())
			.fun<static_cast<Error (PacketPeer::*)() const>(&PacketPeer::get_packet_error)>((new std::string("get_packet_error"))->c_str())
			.fun<static_cast<int32_t (PacketPeer::*)() const>(&PacketPeer::get_available_packet_count)>((new std::string("get_available_packet_count"))->c_str());
}