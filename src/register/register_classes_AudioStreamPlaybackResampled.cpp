#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>

using namespace godot;

void register_classes_AudioStreamPlaybackResampled() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioStreamPlaybackResampled>("AudioStreamPlaybackResampled")
           .constructor<>()
		    .fun<static_cast<int32_t(AudioStreamPlaybackResampled::*)(AudioFrame*,int32_t)>(&AudioStreamPlaybackResampled::_mix_resampled)>("_mix_resampled")
		    .fun<static_cast<double(AudioStreamPlaybackResampled::*)()const>(&AudioStreamPlaybackResampled::_get_stream_sampling_rate)>("_get_stream_sampling_rate")
		    .fun<static_cast<void(AudioStreamPlaybackResampled::*)()>(&AudioStreamPlaybackResampled::begin_resample)>("begin_resample")
;}