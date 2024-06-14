
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_mp3.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamMP3() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamMP3>("AudioStreamMP3")
			.constructor<>()
			.base<AudioStream>()
			.property<static_cast<PackedByteArray (AudioStreamMP3::*)() const>(&AudioStreamMP3::get_data), static_cast<void (AudioStreamMP3::*)(const PackedByteArray &)>(&AudioStreamMP3::set_data)>((new std::string("data"))->c_str())
			.property<static_cast<double (AudioStreamMP3::*)() const>(&AudioStreamMP3::get_bpm), static_cast<void (AudioStreamMP3::*)(double)>(&AudioStreamMP3::set_bpm)>((new std::string("bpm"))->c_str())
			.property<static_cast<int32_t (AudioStreamMP3::*)() const>(&AudioStreamMP3::get_beat_count), static_cast<void (AudioStreamMP3::*)(int32_t)>(&AudioStreamMP3::set_beat_count)>((new std::string("beat_count"))->c_str())
			.property<static_cast<int32_t (AudioStreamMP3::*)() const>(&AudioStreamMP3::get_bar_beats), static_cast<void (AudioStreamMP3::*)(int32_t)>(&AudioStreamMP3::set_bar_beats)>((new std::string("bar_beats"))->c_str())
			.property<static_cast<bool (AudioStreamMP3::*)() const>(&AudioStreamMP3::has_loop), static_cast<void (AudioStreamMP3::*)(bool)>(&AudioStreamMP3::set_loop)>((new std::string("loop"))->c_str())
			.property<static_cast<double (AudioStreamMP3::*)() const>(&AudioStreamMP3::get_loop_offset), static_cast<void (AudioStreamMP3::*)(double)>(&AudioStreamMP3::set_loop_offset)>((new std::string("loop_offset"))->c_str());
}