#include <godot_cpp/classes/audio_stream_wav.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/variant/string.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioStreamWAV() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioStreamWAV>("AudioStreamWAV")
			.constructor<>()
			.property<&AudioStreamWAV::get_data, &AudioStreamWAV::set_data>("data")
			.property<&AudioStreamWAV::get_format, &AudioStreamWAV::set_format>("format")
			.property<&AudioStreamWAV::get_loop_mode, &AudioStreamWAV::set_loop_mode>("loop_mode")
			.property<&AudioStreamWAV::get_loop_begin, &AudioStreamWAV::set_loop_begin>("loop_begin")
			.property<&AudioStreamWAV::get_loop_end, &AudioStreamWAV::set_loop_end>("loop_end")
			.property<&AudioStreamWAV::get_mix_rate, &AudioStreamWAV::set_mix_rate>("mix_rate")
			.property<&AudioStreamWAV::is_stereo, &AudioStreamWAV::set_stereo>("stereo")
			.fun<static_cast<Error (AudioStreamWAV::*)(const String &)>(&AudioStreamWAV::save_to_wav)>("save_to_wav");
}