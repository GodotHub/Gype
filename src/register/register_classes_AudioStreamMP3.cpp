#include <godot_cpp/classes/audio_stream_mp3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioStreamMP3() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioStreamMP3>("AudioStreamMP3")
			.constructor<>()
			.property<&AudioStreamMP3::get_data, &AudioStreamMP3::set_data>("data")
			.property<&AudioStreamMP3::get_bpm, &AudioStreamMP3::set_bpm>("bpm")
			.property<&AudioStreamMP3::get_beat_count, &AudioStreamMP3::set_beat_count>("beat_count")
			.property<&AudioStreamMP3::get_bar_beats, &AudioStreamMP3::set_bar_beats>("bar_beats")
			.property<&AudioStreamMP3::has_loop, &AudioStreamMP3::set_loop>("loop")
			.property<&AudioStreamMP3::get_loop_offset, &AudioStreamMP3::set_loop_offset>("loop_offset");
}