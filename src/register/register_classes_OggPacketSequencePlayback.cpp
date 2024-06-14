#include <godot_cpp/classes/ogg_packet_sequence_playback.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_OggPacketSequencePlayback() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<OggPacketSequencePlayback>("OggPacketSequencePlayback")
            .constructor<>()
            .base<RefCounted>()
;}