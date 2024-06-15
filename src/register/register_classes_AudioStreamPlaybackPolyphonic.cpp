#include <godot_cpp/classes/audio_stream_playback_polyphonic.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamPlaybackPolyphonic() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamPlaybackPolyphonic>("AudioStreamPlaybackPolyphonic")
            .constructor<>()
            .base<AudioStreamPlayback>()
            .static_fun<&AudioStreamPlaybackPolyphonic::INVALID_ID>("INVALID_ID")
            .fun<static_cast<int64_t(AudioStreamPlaybackPolyphonic::*)(const Ref<AudioStream> &,double,double,double)>(&AudioStreamPlaybackPolyphonic::play_stream)>("play_stream")
            .fun<static_cast<void(AudioStreamPlaybackPolyphonic::*)(int64_t,double)>(&AudioStreamPlaybackPolyphonic::set_stream_volume)>("set_stream_volume")
            .fun<static_cast<void(AudioStreamPlaybackPolyphonic::*)(int64_t,double)>(&AudioStreamPlaybackPolyphonic::set_stream_pitch_scale)>("set_stream_pitch_scale")
            .fun<static_cast<bool(AudioStreamPlaybackPolyphonic::*)(int64_t)const>(&AudioStreamPlaybackPolyphonic::is_stream_playing)>("is_stream_playing")
            .fun<static_cast<void(AudioStreamPlaybackPolyphonic::*)(int64_t)>(&AudioStreamPlaybackPolyphonic::stop_stream)>("stop_stream")
;}