#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/packet_peer_stream.hpp>

using namespace godot;

void register_classes_PacketPeerStream() {
    qjs::Context::Module &_module = _General;
    _module.class_<PacketPeerStream>("PacketPeerStream")
           .constructor<>()
           .property<PacketPeerStream::get_input_buffer_max_size, PacketPeerStream::set_input_buffer_max_size>("input_buffer_max_size")
           .property<PacketPeerStream::get_output_buffer_max_size, PacketPeerStream::set_output_buffer_max_size>("output_buffer_max_size")
           .property<PacketPeerStream::get_stream_peer, PacketPeerStream::set_stream_peer>("stream_peer")
;}