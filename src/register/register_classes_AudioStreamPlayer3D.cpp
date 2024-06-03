#include "register/register_classes.h"
#include "register/utils.h"

using namespace godot;

void register_classes_AudioStreamPlayer3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<AudioStreamPlayer3D>("AudioStreamPlayer3D")
           .constructor<>()
           .property<AudioStreamPlayer3D::get_stream, AudioStreamPlayer3D::set_stream>("stream")
           .property<AudioStreamPlayer3D::get_attenuation_model, AudioStreamPlayer3D::set_attenuation_model>("attenuation_model")
           .property<AudioStreamPlayer3D::get_volume_db, AudioStreamPlayer3D::set_volume_db>("volume_db")
           .property<AudioStreamPlayer3D::get_unit_size, AudioStreamPlayer3D::set_unit_size>("unit_size")
           .property<AudioStreamPlayer3D::get_max_db, AudioStreamPlayer3D::set_max_db>("max_db")
           .property<AudioStreamPlayer3D::get_pitch_scale, AudioStreamPlayer3D::set_pitch_scale>("pitch_scale")
           .property<AudioStreamPlayer3D::is_playing>("playing")
           .property<AudioStreamPlayer3D::is_autoplay_enabled, AudioStreamPlayer3D::set_autoplay>("autoplay")
           .property<AudioStreamPlayer3D::get_stream_paused, AudioStreamPlayer3D::set_stream_paused>("stream_paused")
           .property<AudioStreamPlayer3D::get_max_distance, AudioStreamPlayer3D::set_max_distance>("max_distance")
           .property<AudioStreamPlayer3D::get_max_polyphony, AudioStreamPlayer3D::set_max_polyphony>("max_polyphony")
           .property<AudioStreamPlayer3D::get_panning_strength, AudioStreamPlayer3D::set_panning_strength>("panning_strength")
           .property<AudioStreamPlayer3D::get_bus, AudioStreamPlayer3D::set_bus>("bus")
           .property<AudioStreamPlayer3D::get_area_mask, AudioStreamPlayer3D::set_area_mask>("area_mask")
           .property<AudioStreamPlayer3D::is_emission_angle_enabled, AudioStreamPlayer3D::set_emission_angle_enabled>("emission_angle_enabled")
           .property<AudioStreamPlayer3D::get_emission_angle, AudioStreamPlayer3D::set_emission_angle>("emission_angle_degrees")
           .property<AudioStreamPlayer3D::get_emission_angle_filter_attenuation_db, AudioStreamPlayer3D::set_emission_angle_filter_attenuation_db>("emission_angle_filter_attenuation_db")
           .property<AudioStreamPlayer3D::get_attenuation_filter_cutoff_hz, AudioStreamPlayer3D::set_attenuation_filter_cutoff_hz>("attenuation_filter_cutoff_hz")
           .property<AudioStreamPlayer3D::get_attenuation_filter_db, AudioStreamPlayer3D::set_attenuation_filter_db>("attenuation_filter_db")
           .property<AudioStreamPlayer3D::get_doppler_tracking, AudioStreamPlayer3D::set_doppler_tracking>("doppler_tracking")
		   .fun<static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::play)>("play")
		   .fun<static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::seek)>("seek")
		   .fun<static_cast<void(AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::stop)>("stop")
		   .fun<static_cast<double(AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::get_playback_position)>("get_playback_position")
		   .fun<static_cast<bool(AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::has_stream_playback)>("has_stream_playback")
		   .fun<static_cast<Ref<AudioStreamPlayback>(AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::get_stream_playback)>("get_stream_playback")
;}