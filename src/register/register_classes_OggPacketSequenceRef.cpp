#include "register/register_classes.h"
#include <godot_cpp/classes/ogg_packet_sequence.hpp>

using namespace godot;

void register_classes_OggPacketSequenceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<OggPacketSequence>>("OggPacketSequenceRef").constructor<OggPacketSequence *>();
}