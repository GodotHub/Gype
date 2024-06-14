
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_stream.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_PacketPeerStream() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<PacketPeerStream>("PacketPeerStream")
			.constructor<>()
			.base<PacketPeer>()
			.property<static_cast<int32_t (PacketPeerStream::*)() const>(&PacketPeerStream::get_input_buffer_max_size), static_cast<void (PacketPeerStream::*)(int32_t)>(&PacketPeerStream::set_input_buffer_max_size)>((new std::string("input_buffer_max_size"))->c_str())
			.property<static_cast<int32_t (PacketPeerStream::*)() const>(&PacketPeerStream::get_output_buffer_max_size), static_cast<void (PacketPeerStream::*)(int32_t)>(&PacketPeerStream::set_output_buffer_max_size)>((new std::string("output_buffer_max_size"))->c_str())
			.property<static_cast<Ref<StreamPeer> (PacketPeerStream::*)() const>(&PacketPeerStream::get_stream_peer), static_cast<void (PacketPeerStream::*)(const Ref<StreamPeer> &)>(&PacketPeerStream::set_stream_peer)>((new std::string("stream_peer"))->c_str());
}