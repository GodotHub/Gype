#include <godot_cpp/classes/ogg_packet_sequence.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_OggPacketSequence() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<OggPacketSequence>("OggPacketSequence")
			.constructor<>()
			.property<&OggPacketSequence::get_packet_data, &OggPacketSequence::set_packet_data>("packet_data")
			.property<&OggPacketSequence::get_packet_granule_positions, &OggPacketSequence::set_packet_granule_positions>("granule_positions")
			.property<&OggPacketSequence::get_sampling_rate, &OggPacketSequence::set_sampling_rate>("sampling_rate")
			.fun<static_cast<double (OggPacketSequence::*)() const>(&OggPacketSequence::get_length)>("get_length");
}