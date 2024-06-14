
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/ogg_packet_sequence.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamOggVorbis() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamOggVorbis>("AudioStreamOggVorbis")
			.constructor<>()
			.base<AudioStream>()
			.property<static_cast<Ref<OggPacketSequence> (AudioStreamOggVorbis::*)() const>(&AudioStreamOggVorbis::get_packet_sequence), static_cast<void (AudioStreamOggVorbis::*)(const Ref<OggPacketSequence> &)>(&AudioStreamOggVorbis::set_packet_sequence)>((new std::string("packet_sequence"))->c_str())
			.property<static_cast<double (AudioStreamOggVorbis::*)() const>(&AudioStreamOggVorbis::get_bpm), static_cast<void (AudioStreamOggVorbis::*)(double)>(&AudioStreamOggVorbis::set_bpm)>((new std::string("bpm"))->c_str())
			.property<static_cast<int32_t (AudioStreamOggVorbis::*)() const>(&AudioStreamOggVorbis::get_beat_count), static_cast<void (AudioStreamOggVorbis::*)(int32_t)>(&AudioStreamOggVorbis::set_beat_count)>((new std::string("beat_count"))->c_str())
			.property<static_cast<int32_t (AudioStreamOggVorbis::*)() const>(&AudioStreamOggVorbis::get_bar_beats), static_cast<void (AudioStreamOggVorbis::*)(int32_t)>(&AudioStreamOggVorbis::set_bar_beats)>((new std::string("bar_beats"))->c_str())
			.property<static_cast<bool (AudioStreamOggVorbis::*)() const>(&AudioStreamOggVorbis::has_loop), static_cast<void (AudioStreamOggVorbis::*)(bool)>(&AudioStreamOggVorbis::set_loop)>((new std::string("loop"))->c_str())
			.property<static_cast<double (AudioStreamOggVorbis::*)() const>(&AudioStreamOggVorbis::get_loop_offset), static_cast<void (AudioStreamOggVorbis::*)(double)>(&AudioStreamOggVorbis::set_loop_offset)>((new std::string("loop_offset"))->c_str())
			.static_fun<static_cast<Ref<AudioStreamOggVorbis> (*)(const PackedByteArray &)>(&AudioStreamOggVorbis::load_from_buffer)>((new std::string("load_from_buffer"))->c_str())
			.static_fun<static_cast<Ref<AudioStreamOggVorbis> (*)(const String &)>(&AudioStreamOggVorbis::load_from_file)>((new std::string("load_from_file"))->c_str());
}