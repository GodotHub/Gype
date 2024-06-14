
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_randomizer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamRandomizer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamRandomizer>("AudioStreamRandomizer")
			.constructor<>()
			.base<AudioStream>()
			.property<static_cast<AudioStreamRandomizer::PlaybackMode (AudioStreamRandomizer::*)() const>(&AudioStreamRandomizer::get_playback_mode), static_cast<void (AudioStreamRandomizer::*)(AudioStreamRandomizer::PlaybackMode)>(&AudioStreamRandomizer::set_playback_mode)>((new std::string("playback_mode"))->c_str())
			.property<static_cast<double (AudioStreamRandomizer::*)() const>(&AudioStreamRandomizer::get_random_pitch), static_cast<void (AudioStreamRandomizer::*)(double)>(&AudioStreamRandomizer::set_random_pitch)>((new std::string("random_pitch"))->c_str())
			.property<static_cast<double (AudioStreamRandomizer::*)() const>(&AudioStreamRandomizer::get_random_volume_offset_db), static_cast<void (AudioStreamRandomizer::*)(double)>(&AudioStreamRandomizer::set_random_volume_offset_db)>((new std::string("random_volume_offset_db"))->c_str())
			.property<static_cast<int32_t (AudioStreamRandomizer::*)() const>(&AudioStreamRandomizer::get_streams_count), static_cast<void (AudioStreamRandomizer::*)(int32_t)>(&AudioStreamRandomizer::set_streams_count)>((new std::string("streams_count"))->c_str())
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t, const Ref<AudioStream> &, double)>(&AudioStreamRandomizer::add_stream)>((new std::string("add_stream"))->c_str())
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t, int32_t)>(&AudioStreamRandomizer::move_stream)>((new std::string("move_stream"))->c_str())
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t)>(&AudioStreamRandomizer::remove_stream)>((new std::string("remove_stream"))->c_str())
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t, const Ref<AudioStream> &)>(&AudioStreamRandomizer::set_stream)>((new std::string("set_stream"))->c_str())
			.fun<static_cast<Ref<AudioStream> (AudioStreamRandomizer::*)(int32_t) const>(&AudioStreamRandomizer::get_stream)>((new std::string("get_stream"))->c_str())
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t, double)>(&AudioStreamRandomizer::set_stream_probability_weight)>((new std::string("set_stream_probability_weight"))->c_str())
			.fun<static_cast<double (AudioStreamRandomizer::*)(int32_t) const>(&AudioStreamRandomizer::get_stream_probability_weight)>((new std::string("get_stream_probability_weight"))->c_str());
	qjs::Value _PlaybackMode = context->newObject();
	_PlaybackMode[(new std::string("PLAYBACK_RANDOM_NO_REPEATS"))->c_str()] = AudioStreamRandomizer::PlaybackMode::PLAYBACK_RANDOM_NO_REPEATS;
	_PlaybackMode[(new std::string("PLAYBACK_RANDOM"))->c_str()] = AudioStreamRandomizer::PlaybackMode::PLAYBACK_RANDOM;
	_PlaybackMode[(new std::string("PLAYBACK_SEQUENTIAL"))->c_str()] = AudioStreamRandomizer::PlaybackMode::PLAYBACK_SEQUENTIAL;
	_module.add("PlaybackMode", std::move(_PlaybackMode));
}