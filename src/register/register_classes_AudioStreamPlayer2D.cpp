
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_player2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamPlayer2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<AudioStreamPlayer2D>("AudioStreamPlayer2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Ref<AudioStream> (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_stream), static_cast<void (AudioStreamPlayer2D::*)(const Ref<AudioStream> &)>(&AudioStreamPlayer2D::set_stream)>((new std::string("stream"))->c_str())
			.property<static_cast<double (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_volume_db), static_cast<void (AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_volume_db)>((new std::string("volume_db"))->c_str())
			.property<static_cast<double (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_pitch_scale), static_cast<void (AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_pitch_scale)>((new std::string("pitch_scale"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::is_playing)>((new std::string("playing"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::is_autoplay_enabled), static_cast<void (AudioStreamPlayer2D::*)(bool)>(&AudioStreamPlayer2D::set_autoplay)>((new std::string("autoplay"))->c_str())
			.property<static_cast<bool (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_stream_paused), static_cast<void (AudioStreamPlayer2D::*)(bool)>(&AudioStreamPlayer2D::set_stream_paused)>((new std::string("stream_paused"))->c_str())
			.property<static_cast<double (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_max_distance), static_cast<void (AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_max_distance)>((new std::string("max_distance"))->c_str())
			.property<static_cast<double (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_attenuation), static_cast<void (AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_attenuation)>((new std::string("attenuation"))->c_str())
			.property<static_cast<int32_t (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_max_polyphony), static_cast<void (AudioStreamPlayer2D::*)(int32_t)>(&AudioStreamPlayer2D::set_max_polyphony)>((new std::string("max_polyphony"))->c_str())
			.property<static_cast<double (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_panning_strength), static_cast<void (AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::set_panning_strength)>((new std::string("panning_strength"))->c_str())
			.property<static_cast<StringName (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_bus), static_cast<void (AudioStreamPlayer2D::*)(const StringName &)>(&AudioStreamPlayer2D::set_bus)>((new std::string("bus"))->c_str())
			.property<static_cast<uint32_t (AudioStreamPlayer2D::*)() const>(&AudioStreamPlayer2D::get_area_mask), static_cast<void (AudioStreamPlayer2D::*)(uint32_t)>(&AudioStreamPlayer2D::set_area_mask)>((new std::string("area_mask"))->c_str())
			.fun<static_cast<void (AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::play)>((new std::string("play"))->c_str())
			.fun<static_cast<void (AudioStreamPlayer2D::*)(double)>(&AudioStreamPlayer2D::seek)>((new std::string("seek"))->c_str())
			.fun<static_cast<void (AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<double (AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::get_playback_position)>((new std::string("get_playback_position"))->c_str())
			.fun<static_cast<bool (AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::has_stream_playback)>((new std::string("has_stream_playback"))->c_str())
			.fun<static_cast<Ref<AudioStreamPlayback> (AudioStreamPlayer2D::*)()>(&AudioStreamPlayer2D::get_stream_playback)>((new std::string("get_stream_playback"))->c_str());
}