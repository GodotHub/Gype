#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PacketPeer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PacketPeer>("PacketPeer")
            .constructor<>()
            .base<RefCounted>()
            .property<static_cast<int32_t(PacketPeer::*)()const>(&PacketPeer::get_encode_buffer_max_size),static_cast<void(PacketPeer::*)(int32_t)>(&PacketPeer::set_encode_buffer_max_size)>("encode_buffer_max_size")
            .fun<static_cast<Variant(PacketPeer::*)(bool)>(&PacketPeer::get_var)>("get_var")
            .fun<static_cast<Error(PacketPeer::*)(const Variant &,bool)>(&PacketPeer::put_var)>("put_var")
            .fun<static_cast<PackedByteArray(PacketPeer::*)()>(&PacketPeer::get_packet)>("get_packet")
            .fun<static_cast<Error(PacketPeer::*)(const PackedByteArray &)>(&PacketPeer::put_packet)>("put_packet")
            .fun<static_cast<Error(PacketPeer::*)()const>(&PacketPeer::get_packet_error)>("get_packet_error")
            .fun<static_cast<int32_t(PacketPeer::*)()const>(&PacketPeer::get_available_packet_count)>("get_available_packet_count")
;}