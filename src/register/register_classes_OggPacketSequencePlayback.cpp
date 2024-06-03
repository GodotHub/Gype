#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/ogg_packet_sequence_playback.hpp>

using namespace godot;

void register_classes_OggPacketSequencePlayback() {
    qjs::Context::Module &_module = _General;
    _module.class_<OggPacketSequencePlayback>("OggPacketSequencePlayback")
           .constructor<>()
;}