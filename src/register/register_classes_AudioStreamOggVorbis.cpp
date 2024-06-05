#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/ogg_packet_sequence.hpp>

using namespace godot;

void register_classes_AudioStreamOggVorbis() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioStreamOggVorbis>("AudioStreamOggVorbis")
			.constructor<>()
			.property<&AudioStreamOggVorbis::get_packet_sequence, &AudioStreamOggVorbis::set_packet_sequence>("packet_sequence")
			.property<&AudioStreamOggVorbis::get_bpm, &AudioStreamOggVorbis::set_bpm>("bpm")
			.property<&AudioStreamOggVorbis::get_beat_count, &AudioStreamOggVorbis::set_beat_count>("beat_count")
			.property<&AudioStreamOggVorbis::get_bar_beats, &AudioStreamOggVorbis::set_bar_beats>("bar_beats")
			.property<&AudioStreamOggVorbis::has_loop, &AudioStreamOggVorbis::set_loop>("loop")
			.property<&AudioStreamOggVorbis::get_loop_offset, &AudioStreamOggVorbis::set_loop_offset>("loop_offset")
			.static_fun<&AudioStreamOggVorbis::load_from_buffer>("load_from_buffer")
			.static_fun<&AudioStreamOggVorbis::load_from_file>("load_from_file");
}