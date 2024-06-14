
#include <godot_cpp/classes/audio_frame.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamPlaybackResampled() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamPlaybackResampled>("AudioStreamPlaybackResampled")
			.constructor<>()
			.base<AudioStreamPlayback>()
			.fun<static_cast<int32_t (AudioStreamPlaybackResampled::*)(AudioFrame *, int32_t)>(&AudioStreamPlaybackResampled::_mix_resampled)>((new std::string("_mix_resampled"))->c_str())
			.fun<static_cast<double (AudioStreamPlaybackResampled::*)() const>(&AudioStreamPlaybackResampled::_get_stream_sampling_rate)>((new std::string("_get_stream_sampling_rate"))->c_str())
			.fun<static_cast<void (AudioStreamPlaybackResampled::*)()>(&AudioStreamPlaybackResampled::begin_resample)>((new std::string("begin_resample"))->c_str());
}