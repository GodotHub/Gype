#include <godot_cpp/classes/audio_stream_player3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioStreamPlayer3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<AudioStreamPlayer3D>("AudioStreamPlayer3D")
            .constructor<>()
            .base<Node3D>()
            .property<static_cast<Ref<AudioStream>(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_stream),static_cast<void(AudioStreamPlayer3D::*)(const Ref<AudioStream> &)>(&AudioStreamPlayer3D::set_stream)>("stream")
            .property<static_cast<AudioStreamPlayer3D::AttenuationModel(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_attenuation_model),static_cast<void(AudioStreamPlayer3D::*)(AudioStreamPlayer3D::AttenuationModel)>(&AudioStreamPlayer3D::set_attenuation_model)>("attenuation_model")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_volume_db),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_volume_db)>("volume_db")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_unit_size),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_unit_size)>("unit_size")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_max_db),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_max_db)>("max_db")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_pitch_scale),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_pitch_scale)>("pitch_scale")
            .property<static_cast<bool(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::is_playing)>("playing")
            .property<static_cast<bool(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::is_autoplay_enabled),static_cast<void(AudioStreamPlayer3D::*)(bool)>(&AudioStreamPlayer3D::set_autoplay)>("autoplay")
            .property<static_cast<bool(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_stream_paused),static_cast<void(AudioStreamPlayer3D::*)(bool)>(&AudioStreamPlayer3D::set_stream_paused)>("stream_paused")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_max_distance),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_max_distance)>("max_distance")
            .property<static_cast<int32_t(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_max_polyphony),static_cast<void(AudioStreamPlayer3D::*)(int32_t)>(&AudioStreamPlayer3D::set_max_polyphony)>("max_polyphony")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_panning_strength),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_panning_strength)>("panning_strength")
            .property<static_cast<StringName(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_bus),static_cast<void(AudioStreamPlayer3D::*)(const StringName &)>(&AudioStreamPlayer3D::set_bus)>("bus")
            .property<static_cast<uint32_t(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_area_mask),static_cast<void(AudioStreamPlayer3D::*)(uint32_t)>(&AudioStreamPlayer3D::set_area_mask)>("area_mask")
            .property<static_cast<bool(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::is_emission_angle_enabled),static_cast<void(AudioStreamPlayer3D::*)(bool)>(&AudioStreamPlayer3D::set_emission_angle_enabled)>("emission_angle_enabled")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_emission_angle),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_emission_angle)>("emission_angle_degrees")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_emission_angle_filter_attenuation_db),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_emission_angle_filter_attenuation_db)>("emission_angle_filter_attenuation_db")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_attenuation_filter_cutoff_hz),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_attenuation_filter_cutoff_hz)>("attenuation_filter_cutoff_hz")
            .property<static_cast<double(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_attenuation_filter_db),static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_attenuation_filter_db)>("attenuation_filter_db")
            .property<static_cast<AudioStreamPlayer3D::DopplerTracking(AudioStreamPlayer3D::*)()const>(&AudioStreamPlayer3D::get_doppler_tracking),static_cast<void(AudioStreamPlayer3D::*)(AudioStreamPlayer3D::DopplerTracking)>(&AudioStreamPlayer3D::set_doppler_tracking)>("doppler_tracking")
            .fun<static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::play)>("play")
            .fun<static_cast<void(AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::seek)>("seek")
            .fun<static_cast<void(AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::stop)>("stop")
            .fun<static_cast<double(AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::get_playback_position)>("get_playback_position")
            .fun<static_cast<bool(AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::has_stream_playback)>("has_stream_playback")
            .fun<static_cast<Ref<AudioStreamPlayback>(AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::get_stream_playback)>("get_stream_playback")
;    qjs::Value _AttenuationModel = context->newObject();
    _AttenuationModel["ATTENUATION_INVERSE_DISTANCE"] = AudioStreamPlayer3D::AttenuationModel::ATTENUATION_INVERSE_DISTANCE;
    _AttenuationModel["ATTENUATION_INVERSE_SQUARE_DISTANCE"] = AudioStreamPlayer3D::AttenuationModel::ATTENUATION_INVERSE_SQUARE_DISTANCE;
    _AttenuationModel["ATTENUATION_LOGARITHMIC"] = AudioStreamPlayer3D::AttenuationModel::ATTENUATION_LOGARITHMIC;
    _AttenuationModel["ATTENUATION_DISABLED"] = AudioStreamPlayer3D::AttenuationModel::ATTENUATION_DISABLED;
    _module.add("AttenuationModel", std::move(_AttenuationModel));
    qjs::Value _DopplerTracking = context->newObject();
    _DopplerTracking["DOPPLER_TRACKING_DISABLED"] = AudioStreamPlayer3D::DopplerTracking::DOPPLER_TRACKING_DISABLED;
    _DopplerTracking["DOPPLER_TRACKING_IDLE_STEP"] = AudioStreamPlayer3D::DopplerTracking::DOPPLER_TRACKING_IDLE_STEP;
    _DopplerTracking["DOPPLER_TRACKING_PHYSICS_STEP"] = AudioStreamPlayer3D::DopplerTracking::DOPPLER_TRACKING_PHYSICS_STEP;
    _module.add("DopplerTracking", std::move(_DopplerTracking));
}