#include <godot_cpp/classes/audio_stream_randomizer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamRandomizer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamRandomizer>("AudioStreamRandomizer")
            .constructor<>()
            .base<AudioStream>()
            .property<static_cast<AudioStreamRandomizer::PlaybackMode(AudioStreamRandomizer::*)()const>(&AudioStreamRandomizer::get_playback_mode),static_cast<void(AudioStreamRandomizer::*)(AudioStreamRandomizer::PlaybackMode)>(&AudioStreamRandomizer::set_playback_mode)>("playback_mode")
            .property<static_cast<double(AudioStreamRandomizer::*)()const>(&AudioStreamRandomizer::get_random_pitch),static_cast<void(AudioStreamRandomizer::*)(double)>(&AudioStreamRandomizer::set_random_pitch)>("random_pitch")
            .property<static_cast<double(AudioStreamRandomizer::*)()const>(&AudioStreamRandomizer::get_random_volume_offset_db),static_cast<void(AudioStreamRandomizer::*)(double)>(&AudioStreamRandomizer::set_random_volume_offset_db)>("random_volume_offset_db")
            .property<static_cast<int32_t(AudioStreamRandomizer::*)()const>(&AudioStreamRandomizer::get_streams_count),static_cast<void(AudioStreamRandomizer::*)(int32_t)>(&AudioStreamRandomizer::set_streams_count)>("streams_count")
            .fun<static_cast<void(AudioStreamRandomizer::*)(int32_t,const Ref<AudioStream> &,double)>(&AudioStreamRandomizer::add_stream)>("add_stream")
            .fun<static_cast<void(AudioStreamRandomizer::*)(int32_t,int32_t)>(&AudioStreamRandomizer::move_stream)>("move_stream")
            .fun<static_cast<void(AudioStreamRandomizer::*)(int32_t)>(&AudioStreamRandomizer::remove_stream)>("remove_stream")
            .fun<static_cast<void(AudioStreamRandomizer::*)(int32_t,const Ref<AudioStream> &)>(&AudioStreamRandomizer::set_stream)>("set_stream")
            .fun<static_cast<Ref<AudioStream>(AudioStreamRandomizer::*)(int32_t)const>(&AudioStreamRandomizer::get_stream)>("get_stream")
            .fun<static_cast<void(AudioStreamRandomizer::*)(int32_t,double)>(&AudioStreamRandomizer::set_stream_probability_weight)>("set_stream_probability_weight")
            .fun<static_cast<double(AudioStreamRandomizer::*)(int32_t)const>(&AudioStreamRandomizer::get_stream_probability_weight)>("get_stream_probability_weight")
;    qjs::Value _PlaybackMode = context->newObject();
    _PlaybackMode["PLAYBACK_RANDOM_NO_REPEATS"] = AudioStreamRandomizer::PlaybackMode::PLAYBACK_RANDOM_NO_REPEATS;
    _PlaybackMode["PLAYBACK_RANDOM"] = AudioStreamRandomizer::PlaybackMode::PLAYBACK_RANDOM;
    _PlaybackMode["PLAYBACK_SEQUENTIAL"] = AudioStreamRandomizer::PlaybackMode::PLAYBACK_SEQUENTIAL;
    _module.add("PlaybackMode", std::move(_PlaybackMode));
}