#include <godot_cpp/classes/audio_stream_player2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamPlayer2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<AudioStreamPlayer2D>("AudioStreamPlayer2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Ref<AudioStream>(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_stream),static_cast<void(AudioStreamPlayer2D::*)(const Ref<AudioStream> &)>(&AudioStreamPlayer2D::set_stream)>("stream")
            .property<static_cast<double(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_volume_db),static_cast<void(AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_volume_db)>("volume_db")
            .property<static_cast<double(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_pitch_scale),static_cast<void(AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_pitch_scale)>("pitch_scale")
            .property<static_cast<bool(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::is_playing)>("playing")
            .property<static_cast<bool(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::is_autoplay_enabled),static_cast<void(AudioStreamPlayer2D::*)(bool)>(&AudioStreamPlayer2D::set_autoplay)>("autoplay")
            .property<static_cast<bool(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_stream_paused),static_cast<void(AudioStreamPlayer2D::*)(bool)>(&AudioStreamPlayer2D::set_stream_paused)>("stream_paused")
            .property<static_cast<double(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_max_distance),static_cast<void(AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_max_distance)>("max_distance")
            .property<static_cast<double(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_attenuation),static_cast<void(AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_attenuation)>("attenuation")
            .property<static_cast<int32_t(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_max_polyphony),static_cast<void(AudioStreamPlayer2D::*)(int32_t)>(&AudioStreamPlayer2D::set_max_polyphony)>("max_polyphony")
            .property<static_cast<double(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_panning_strength),static_cast<void(AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_panning_strength)>("panning_strength")
            .property<static_cast<StringName(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_bus),static_cast<void(AudioStreamPlayer2D::*)(const StringName &)>(&AudioStreamPlayer2D::set_bus)>("bus")
            .property<static_cast<uint32_t(AudioStreamPlayer2D::*)()const>(&AudioStreamPlayer2D::get_area_mask),static_cast<void(AudioStreamPlayer2D::*)(uint32_t)>(&AudioStreamPlayer2D::set_area_mask)>("area_mask")
            .fun<static_cast<void(AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::play)>("play")
            .fun<static_cast<void(AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::seek)>("seek")
            .fun<static_cast<void(AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::stop)>("stop")
            .fun<static_cast<double(AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::get_playback_position)>("get_playback_position")
            .fun<static_cast<bool(AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::has_stream_playback)>("has_stream_playback")
            .fun<static_cast<Ref<AudioStreamPlayback>(AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::get_stream_playback)>("get_stream_playback")
;}