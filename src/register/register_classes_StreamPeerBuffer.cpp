#include <godot_cpp/classes/stream_peer_buffer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_StreamPeerBuffer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<StreamPeerBuffer>("StreamPeerBuffer")
            .constructor<>()
            .base<StreamPeer>()
            .property<static_cast<PackedByteArray(StreamPeerBuffer::*)()const>(&StreamPeerBuffer::get_data_array),static_cast<void(StreamPeerBuffer::*)(const PackedByteArray &)>(&StreamPeerBuffer::set_data_array)>("data_array")
            .fun<static_cast<void(StreamPeerBuffer::*)(int32_t)>(&StreamPeerBuffer::seek)>("seek")
            .fun<static_cast<int32_t(StreamPeerBuffer::*)()const>(&StreamPeerBuffer::get_size)>("get_size")
            .fun<static_cast<int32_t(StreamPeerBuffer::*)()const>(&StreamPeerBuffer::get_position)>("get_position")
            .fun<static_cast<void(StreamPeerBuffer::*)(int32_t)>(&StreamPeerBuffer::resize)>("resize")
            .fun<static_cast<void(StreamPeerBuffer::*)()>(&StreamPeerBuffer::clear)>("clear")
            .fun<static_cast<Ref<StreamPeerBuffer>(StreamPeerBuffer::*)()const>(&StreamPeerBuffer::duplicate)>("duplicate")
;}