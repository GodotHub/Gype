
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStream() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStream>("AudioStream")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<Ref<AudioStreamPlayback> (AudioStream::*)() const>(&AudioStream::_instantiate_playback)>((new std::string("_instantiate_playback"))->c_str())
			.fun<static_cast<String (AudioStream::*)() const>(&AudioStream::_get_stream_name)>((new std::string("_get_stream_name"))->c_str())
			.fun<static_cast<double (AudioStream::*)() const>(&AudioStream::_get_length)>((new std::string("_get_length"))->c_str())
			.fun<static_cast<bool (AudioStream::*)() const>(&AudioStream::_is_monophonic)>((new std::string("_is_monophonic"))->c_str())
			.fun<static_cast<double (AudioStream::*)() const>(&AudioStream::_get_bpm)>((new std::string("_get_bpm"))->c_str())
			.fun<static_cast<int32_t (AudioStream::*)() const>(&AudioStream::_get_beat_count)>((new std::string("_get_beat_count"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (AudioStream::*)() const>(&AudioStream::_get_parameter_list)>((new std::string("_get_parameter_list"))->c_str())
			.fun<static_cast<double (AudioStream::*)() const>(&AudioStream::get_length)>((new std::string("get_length"))->c_str())
			.fun<static_cast<bool (AudioStream::*)() const>(&AudioStream::is_monophonic)>((new std::string("is_monophonic"))->c_str())
			.fun<static_cast<Ref<AudioStreamPlayback> (AudioStream::*)()>(&AudioStream::instantiate_playback)>((new std::string("instantiate_playback"))->c_str());
}