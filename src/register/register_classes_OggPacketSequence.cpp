#include <godot_cpp/classes/ogg_packet_sequence.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/packed_int64_array.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OggPacketSequence() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OggPacketSequence>("OggPacketSequence")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<TypedArray<Array> (OggPacketSequence::*)() const>(&OggPacketSequence::get_packet_data), static_cast<void (OggPacketSequence::*)(const TypedArray<Array> &)>(&OggPacketSequence::set_packet_data)>((new std::string("packet_data"))->c_str())
			.property<static_cast<PackedInt64Array (OggPacketSequence::*)() const>(&OggPacketSequence::get_packet_granule_positions), static_cast<void (OggPacketSequence::*)(const PackedInt64Array &)>(&OggPacketSequence::set_packet_granule_positions)>((new std::string("granule_positions"))->c_str())
			.property<static_cast<double (OggPacketSequence::*)() const>(&OggPacketSequence::get_sampling_rate), static_cast<void (OggPacketSequence::*)(double)>(&OggPacketSequence::set_sampling_rate)>((new std::string("sampling_rate"))->c_str())
			.fun<static_cast<double (OggPacketSequence::*)() const>(&OggPacketSequence::get_length)>((new std::string("get_length"))->c_str());
}