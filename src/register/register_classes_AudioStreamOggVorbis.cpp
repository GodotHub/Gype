#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/ogg_packet_sequence.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamOggVorbis() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamOggVorbis>("AudioStreamOggVorbis")
            .constructor<>()
            .base<AudioStream>()
            .property<static_cast<Ref<OggPacketSequence>(AudioStreamOggVorbis::*)()const>(&AudioStreamOggVorbis::get_packet_sequence),static_cast<void(AudioStreamOggVorbis::*)(const Ref<OggPacketSequence> &)>(&AudioStreamOggVorbis::set_packet_sequence)>("packet_sequence")
            .property<static_cast<double(AudioStreamOggVorbis::*)()const>(&AudioStreamOggVorbis::get_bpm),static_cast<void(AudioStreamOggVorbis::*)(double)>(&AudioStreamOggVorbis::set_bpm)>("bpm")
            .property<static_cast<int32_t(AudioStreamOggVorbis::*)()const>(&AudioStreamOggVorbis::get_beat_count),static_cast<void(AudioStreamOggVorbis::*)(int32_t)>(&AudioStreamOggVorbis::set_beat_count)>("beat_count")
            .property<static_cast<int32_t(AudioStreamOggVorbis::*)()const>(&AudioStreamOggVorbis::get_bar_beats),static_cast<void(AudioStreamOggVorbis::*)(int32_t)>(&AudioStreamOggVorbis::set_bar_beats)>("bar_beats")
            .property<static_cast<bool(AudioStreamOggVorbis::*)()const>(&AudioStreamOggVorbis::has_loop),static_cast<void(AudioStreamOggVorbis::*)(bool)>(&AudioStreamOggVorbis::set_loop)>("loop")
            .property<static_cast<double(AudioStreamOggVorbis::*)()const>(&AudioStreamOggVorbis::get_loop_offset),static_cast<void(AudioStreamOggVorbis::*)(double)>(&AudioStreamOggVorbis::set_loop_offset)>("loop_offset")
            .static_fun<static_cast<Ref<AudioStreamOggVorbis>(*)(const PackedByteArray &)>(&AudioStreamOggVorbis::load_from_buffer)>("load_from_buffer")
            .static_fun<static_cast<Ref<AudioStreamOggVorbis>(*)(const String &)>(&AudioStreamOggVorbis::load_from_file)>("load_from_file")
;}