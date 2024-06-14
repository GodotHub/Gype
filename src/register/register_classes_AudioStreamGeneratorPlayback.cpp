
#include <godot_cpp/classes/audio_stream_generator_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamGeneratorPlayback() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamGeneratorPlayback>("AudioStreamGeneratorPlayback")
			.constructor<>()
			.base<AudioStreamPlaybackResampled>()
			.fun<static_cast<bool (AudioStreamGeneratorPlayback::*)(const Vector2 &)>(&AudioStreamGeneratorPlayback::push_frame)>((new std::string("push_frame"))->c_str())
			.fun<static_cast<bool (AudioStreamGeneratorPlayback::*)(int32_t) const>(&AudioStreamGeneratorPlayback::can_push_buffer)>((new std::string("can_push_buffer"))->c_str())
			.fun<static_cast<bool (AudioStreamGeneratorPlayback::*)(const PackedVector2Array &)>(&AudioStreamGeneratorPlayback::push_buffer)>((new std::string("push_buffer"))->c_str())
			.fun<static_cast<int32_t (AudioStreamGeneratorPlayback::*)() const>(&AudioStreamGeneratorPlayback::get_frames_available)>((new std::string("get_frames_available"))->c_str())
			.fun<static_cast<int32_t (AudioStreamGeneratorPlayback::*)() const>(&AudioStreamGeneratorPlayback::get_skips)>((new std::string("get_skips"))->c_str())
			.fun<static_cast<void (AudioStreamGeneratorPlayback::*)()>(&AudioStreamGeneratorPlayback::clear_buffer)>((new std::string("clear_buffer"))->c_str());
}