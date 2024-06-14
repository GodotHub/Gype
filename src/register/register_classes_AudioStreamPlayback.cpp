
#include <godot_cpp/classes/audio_frame.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamPlayback() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamPlayback>("AudioStreamPlayback")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (AudioStreamPlayback::*)(double)>(&AudioStreamPlayback::_start)>((new std::string("_start"))->c_str())
			.fun<static_cast<void (AudioStreamPlayback::*)()>(&AudioStreamPlayback::_stop)>((new std::string("_stop"))->c_str())
			.fun<static_cast<bool (AudioStreamPlayback::*)() const>(&AudioStreamPlayback::_is_playing)>((new std::string("_is_playing"))->c_str())
			.fun<static_cast<int32_t (AudioStreamPlayback::*)() const>(&AudioStreamPlayback::_get_loop_count)>((new std::string("_get_loop_count"))->c_str())
			.fun<static_cast<double (AudioStreamPlayback::*)() const>(&AudioStreamPlayback::_get_playback_position)>((new std::string("_get_playback_position"))->c_str())
			.fun<static_cast<void (AudioStreamPlayback::*)(double)>(&AudioStreamPlayback::_seek)>((new std::string("_seek"))->c_str())
			.fun<static_cast<int32_t (AudioStreamPlayback::*)(AudioFrame *, double, int32_t)>(&AudioStreamPlayback::_mix)>((new std::string("_mix"))->c_str())
			.fun<static_cast<void (AudioStreamPlayback::*)()>(&AudioStreamPlayback::_tag_used_streams)>((new std::string("_tag_used_streams"))->c_str())
			.fun<static_cast<void (AudioStreamPlayback::*)(const StringName &, const Variant &)>(&AudioStreamPlayback::_set_parameter)>((new std::string("_set_parameter"))->c_str())
			.fun<static_cast<Variant (AudioStreamPlayback::*)(const StringName &) const>(&AudioStreamPlayback::_get_parameter)>((new std::string("_get_parameter"))->c_str());
}