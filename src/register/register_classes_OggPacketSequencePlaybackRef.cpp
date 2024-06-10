#include "register/register_classes.h"
#include <godot_cpp/classes/ogg_packet_sequence_playback.hpp>

using namespace godot;

void register_classes_OggPacketSequencePlaybackRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OggPacketSequencePlayback>>("OggPacketSequencePlaybackRef").constructor<OggPacketSequencePlayback *>();
}