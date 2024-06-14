
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/video_stream_playback.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VideoStreamPlayback() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<VideoStreamPlayback>("VideoStreamPlayback")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<void (VideoStreamPlayback::*)()>(&VideoStreamPlayback::_stop)>((new std::string("_stop"))->c_str())
			.fun<static_cast<void (VideoStreamPlayback::*)()>(&VideoStreamPlayback::_play)>((new std::string("_play"))->c_str())
			.fun<static_cast<bool (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_is_playing)>((new std::string("_is_playing"))->c_str())
			.fun<static_cast<void (VideoStreamPlayback::*)(bool)>(&VideoStreamPlayback::_set_paused)>((new std::string("_set_paused"))->c_str())
			.fun<static_cast<bool (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_is_paused)>((new std::string("_is_paused"))->c_str())
			.fun<static_cast<double (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_length)>((new std::string("_get_length"))->c_str())
			.fun<static_cast<double (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_playback_position)>((new std::string("_get_playback_position"))->c_str())
			.fun<static_cast<void (VideoStreamPlayback::*)(double)>(&VideoStreamPlayback::_seek)>((new std::string("_seek"))->c_str())
			.fun<static_cast<void (VideoStreamPlayback::*)(int32_t)>(&VideoStreamPlayback::_set_audio_track)>((new std::string("_set_audio_track"))->c_str())
			.fun<static_cast<Ref<Texture2D> (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_texture)>((new std::string("_get_texture"))->c_str())
			.fun<static_cast<void (VideoStreamPlayback::*)(double)>(&VideoStreamPlayback::_update)>((new std::string("_update"))->c_str())
			.fun<static_cast<int32_t (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_channels)>((new std::string("_get_channels"))->c_str())
			.fun<static_cast<int32_t (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_mix_rate)>((new std::string("_get_mix_rate"))->c_str())
			.fun<static_cast<int32_t (VideoStreamPlayback::*)(int32_t, const PackedFloat32Array &, int32_t)>(&VideoStreamPlayback::mix_audio)>((new std::string("mix_audio"))->c_str());
}