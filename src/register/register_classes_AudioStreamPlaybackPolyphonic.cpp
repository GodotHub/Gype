
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_polyphonic.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamPlaybackPolyphonic() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamPlaybackPolyphonic>("AudioStreamPlaybackPolyphonic")
			.constructor<>()
			.base<AudioStreamPlayback>()
			.static_fun<&AudioStreamPlaybackPolyphonic::INVALID_ID>((new std::string("INVALID_ID"))->c_str())
			.fun<static_cast<int64_t (AudioStreamPlaybackPolyphonic::*)(const Ref<AudioStream> &, double, double, double)>(&AudioStreamPlaybackPolyphonic::play_stream)>((new std::string("play_stream"))->c_str())
			.fun<static_cast<void (AudioStreamPlaybackPolyphonic::*)(int64_t, double)>(&AudioStreamPlaybackPolyphonic::set_stream_volume)>((new std::string("set_stream_volume"))->c_str())
			.fun<static_cast<void (AudioStreamPlaybackPolyphonic::*)(int64_t, double)>(&AudioStreamPlaybackPolyphonic::set_stream_pitch_scale)>((new std::string("set_stream_pitch_scale"))->c_str())
			.fun<static_cast<bool (AudioStreamPlaybackPolyphonic::*)(int64_t) const>(&AudioStreamPlaybackPolyphonic::is_stream_playing)>((new std::string("is_stream_playing"))->c_str())
			.fun<static_cast<void (AudioStreamPlaybackPolyphonic::*)(int64_t)>(&AudioStreamPlaybackPolyphonic::stop_stream)>((new std::string("stop_stream"))->c_str());
}