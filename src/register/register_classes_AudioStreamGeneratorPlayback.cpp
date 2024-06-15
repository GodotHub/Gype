#include <godot_cpp/classes/audio_stream_generator_playback.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamGeneratorPlayback() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioStreamGeneratorPlayback>("AudioStreamGeneratorPlayback")
            .constructor<>()
            .base<AudioStreamPlaybackResampled>()
            .fun<static_cast<bool(AudioStreamGeneratorPlayback::*)(const Vector2 &)>(&AudioStreamGeneratorPlayback::push_frame)>("push_frame")
            .fun<static_cast<bool(AudioStreamGeneratorPlayback::*)(int32_t)const>(&AudioStreamGeneratorPlayback::can_push_buffer)>("can_push_buffer")
            .fun<static_cast<bool(AudioStreamGeneratorPlayback::*)(const PackedVector2Array &)>(&AudioStreamGeneratorPlayback::push_buffer)>("push_buffer")
            .fun<static_cast<int32_t(AudioStreamGeneratorPlayback::*)()const>(&AudioStreamGeneratorPlayback::get_frames_available)>("get_frames_available")
            .fun<static_cast<int32_t(AudioStreamGeneratorPlayback::*)()const>(&AudioStreamGeneratorPlayback::get_skips)>("get_skips")
            .fun<static_cast<void(AudioStreamGeneratorPlayback::*)()>(&AudioStreamGeneratorPlayback::clear_buffer)>("clear_buffer")
;}