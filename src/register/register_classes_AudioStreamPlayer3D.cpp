
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_player3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamPlayer3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<AudioStreamPlayer3D>("AudioStreamPlayer3D")
			.constructor<>()
			.base<Node3D>()
			.property<static_cast<Ref<AudioStream> (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_stream), static_cast<void (AudioStreamPlayer3D::*)(const Ref<AudioStream> &)>(&AudioStreamPlayer3D::set_stream)>((new std::string("stream"))->c_str())
			.property<static_cast<AudioStreamPlayer3D::AttenuationModel (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_attenuation_model), static_cast<void (AudioStreamPlayer3D::*)(AudioStreamPlayer3D::AttenuationModel)>(&AudioStreamPlayer3D::set_attenuation_model)>((new std::string("attenuation_model"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_volume_db), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_volume_db)>((new std::string("volume_db"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_unit_size), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_unit_size)>((new std::string("unit_size"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_max_db), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_max_db)>((new std::string("max_db"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_pitch_scale), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_pitch_scale)>((new std::string("pitch_scale"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::is_playing)>((new std::string("playing"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::is_autoplay_enabled), static_cast<void (AudioStreamPlayer3D::*)(bool)>(&AudioStreamPlayer3D::set_autoplay)>((new std::string("autoplay"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_stream_paused), static_cast<void (AudioStreamPlayer3D::*)(bool)>(&AudioStreamPlayer3D::set_stream_paused)>((new std::string("stream_paused"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_max_distance), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_max_distance)>((new std::string("max_distance"))->c_str())
			.property<static_cast<int32_t (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_max_polyphony), static_cast<void (AudioStreamPlayer3D::*)(int32_t)>(&AudioStreamPlayer3D::set_max_polyphony)>((new std::string("max_polyphony"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_panning_strength), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_panning_strength)>((new std::string("panning_strength"))->c_str())
			.property<static_cast<StringName (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_bus), static_cast<void (AudioStreamPlayer3D::*)(const StringName &)>(&AudioStreamPlayer3D::set_bus)>((new std::string("bus"))->c_str())
			.property<static_cast<uint32_t (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_area_mask), static_cast<void (AudioStreamPlayer3D::*)(uint32_t)>(&AudioStreamPlayer3D::set_area_mask)>((new std::string("area_mask"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::is_emission_angle_enabled), static_cast<void (AudioStreamPlayer3D::*)(bool)>(&AudioStreamPlayer3D::set_emission_angle_enabled)>((new std::string("emission_angle_enabled"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_emission_angle), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_emission_angle)>((new std::string("emission_angle_degrees"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_emission_angle_filter_attenuation_db), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_emission_angle_filter_attenuation_db)>((new std::string("emission_angle_filter_attenuation_db"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_attenuation_filter_cutoff_hz), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_attenuation_filter_cutoff_hz)>((new std::string("attenuation_filter_cutoff_hz"))->c_str())
			.property<static_cast<double (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_attenuation_filter_db), static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::set_attenuation_filter_db)>((new std::string("attenuation_filter_db"))->c_str())
			.property<static_cast<AudioStreamPlayer3D::DopplerTracking (AudioStreamPlayer3D::*)() const>(&AudioStreamPlayer3D::get_doppler_tracking), static_cast<void (AudioStreamPlayer3D::*)(AudioStreamPlayer3D::DopplerTracking)>(&AudioStreamPlayer3D::set_doppler_tracking)>((new std::string("doppler_tracking"))->c_str())
			.fun<static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::play)>((new std::string("play"))->c_str())
			.fun<static_cast<void (AudioStreamPlayer3D::*)(double)>(&AudioStreamPlayer3D::seek)>((new std::string("seek"))->c_str())
			.fun<static_cast<void (AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<double (AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::get_playback_position)>((new std::string("get_playback_position"))->c_str())
			.fun<static_cast<bool (AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::has_stream_playback)>((new std::string("has_stream_playback"))->c_str())
			.fun<static_cast<Ref<AudioStreamPlayback> (AudioStreamPlayer3D::*)()>(&AudioStreamPlayer3D::get_stream_playback)>((new std::string("get_stream_playback"))->c_str());
	qjs::Value _AttenuationModel = context->newObject();
	_AttenuationModel[(new std::string("ATTENUATION_INVERSE_DISTANCE"))->c_str()] = AudioStreamPlayer3D::AttenuationModel::ATTENUATION_INVERSE_DISTANCE;
	_AttenuationModel[(new std::string("ATTENUATION_INVERSE_SQUARE_DISTANCE"))->c_str()] = AudioStreamPlayer3D::AttenuationModel::ATTENUATION_INVERSE_SQUARE_DISTANCE;
	_AttenuationModel[(new std::string("ATTENUATION_LOGARITHMIC"))->c_str()] = AudioStreamPlayer3D::AttenuationModel::ATTENUATION_LOGARITHMIC;
	_AttenuationModel[(new std::string("ATTENUATION_DISABLED"))->c_str()] = AudioStreamPlayer3D::AttenuationModel::ATTENUATION_DISABLED;
	_module.add("AttenuationModel", std::move(_AttenuationModel));
	qjs::Value _DopplerTracking = context->newObject();
	_DopplerTracking[(new std::string("DOPPLER_TRACKING_DISABLED"))->c_str()] = AudioStreamPlayer3D::DopplerTracking::DOPPLER_TRACKING_DISABLED;
	_DopplerTracking[(new std::string("DOPPLER_TRACKING_IDLE_STEP"))->c_str()] = AudioStreamPlayer3D::DopplerTracking::DOPPLER_TRACKING_IDLE_STEP;
	_DopplerTracking[(new std::string("DOPPLER_TRACKING_PHYSICS_STEP"))->c_str()] = AudioStreamPlayer3D::DopplerTracking::DOPPLER_TRACKING_PHYSICS_STEP;
	_module.add("DopplerTracking", std::move(_DopplerTracking));
}