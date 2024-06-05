#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_randomizer.hpp>
#include <godot_cpp/classes/ref.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamRandomizer() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioStreamRandomizer>("AudioStreamRandomizer")
			.constructor<>()
			.property<&AudioStreamRandomizer::get_playback_mode, &AudioStreamRandomizer::set_playback_mode>("playback_mode")
			.property<&AudioStreamRandomizer::get_random_pitch, &AudioStreamRandomizer::set_random_pitch>("random_pitch")
			.property<&AudioStreamRandomizer::get_random_volume_offset_db, &AudioStreamRandomizer::set_random_volume_offset_db>("random_volume_offset_db")
			.property<&AudioStreamRandomizer::get_streams_count, &AudioStreamRandomizer::set_streams_count>("streams_count")
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t, const Ref<AudioStream> &, double)>(&AudioStreamRandomizer::add_stream)>("add_stream")
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t, int32_t)>(&AudioStreamRandomizer::move_stream)>("move_stream")
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t)>(&AudioStreamRandomizer::remove_stream)>("remove_stream")
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t, const Ref<AudioStream> &)>(&AudioStreamRandomizer::set_stream)>("set_stream")
			.fun<static_cast<Ref<AudioStream> (AudioStreamRandomizer::*)(int32_t) const>(&AudioStreamRandomizer::get_stream)>("get_stream")
			.fun<static_cast<void (AudioStreamRandomizer::*)(int32_t, double)>(&AudioStreamRandomizer::set_stream_probability_weight)>("set_stream_probability_weight")
			.fun<static_cast<double (AudioStreamRandomizer::*)(int32_t) const>(&AudioStreamRandomizer::get_stream_probability_weight)>("get_stream_probability_weight");
}