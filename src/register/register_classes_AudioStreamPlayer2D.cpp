#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_stream_player2d.hpp>

using namespace godot;

void register_classes_AudioStreamPlayer2D() {
    qjs::Context::Module &_module = _Node2D;
    _module.class_<AudioStreamPlayer2D>("AudioStreamPlayer2D")
           .constructor<>()
           .property<AudioStreamPlayer2D::get_stream, AudioStreamPlayer2D::set_stream>("stream")
           .property<AudioStreamPlayer2D::get_volume_db, AudioStreamPlayer2D::set_volume_db>("volume_db")
           .property<AudioStreamPlayer2D::get_pitch_scale, AudioStreamPlayer2D::set_pitch_scale>("pitch_scale")
           .property<AudioStreamPlayer2D::is_playing>("playing")
           .property<AudioStreamPlayer2D::is_autoplay_enabled, AudioStreamPlayer2D::set_autoplay>("autoplay")
           .property<AudioStreamPlayer2D::get_stream_paused, AudioStreamPlayer2D::set_stream_paused>("stream_paused")
           .property<AudioStreamPlayer2D::get_max_distance, AudioStreamPlayer2D::set_max_distance>("max_distance")
           .property<AudioStreamPlayer2D::get_attenuation, AudioStreamPlayer2D::set_attenuation>("attenuation")
           .property<AudioStreamPlayer2D::get_max_polyphony, AudioStreamPlayer2D::set_max_polyphony>("max_polyphony")
           .property<AudioStreamPlayer2D::get_panning_strength, AudioStreamPlayer2D::set_panning_strength>("panning_strength")
           .property<AudioStreamPlayer2D::get_bus, AudioStreamPlayer2D::set_bus>("bus")
           .property<AudioStreamPlayer2D::get_area_mask, AudioStreamPlayer2D::set_area_mask>("area_mask")
		    .fun<static_cast<void(AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::play)>("play")
		    .fun<static_cast<void(AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::seek)>("seek")
		    .fun<static_cast<void(AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::stop)>("stop")
		    .fun<static_cast<double(AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::get_playback_position)>("get_playback_position")
		    .fun<static_cast<bool(AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::has_stream_playback)>("has_stream_playback")
		    .fun<static_cast<Ref<AudioStreamPlayback>(AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::get_stream_playback)>("get_stream_playback")
;}