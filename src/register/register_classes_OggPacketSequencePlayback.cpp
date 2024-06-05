#include <godot_cpp/classes/ogg_packet_sequence_playback.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_OggPacketSequencePlayback() {
	qjs::Context::Module &_module = _General;
	_module.class_<OggPacketSequencePlayback>("OggPacketSequencePlayback")
			.constructor<>();
}