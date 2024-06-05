#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/video_stream_playback.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VideoStreamPlayback() {
	qjs::Context::Module &_module = _General;
	_module.class_<VideoStreamPlayback>("VideoStreamPlayback")
			.constructor<>()
			.fun<static_cast<void (VideoStreamPlayback::*)()>(&VideoStreamPlayback::_stop)>("_stop")
			.fun<static_cast<void (VideoStreamPlayback::*)()>(&VideoStreamPlayback::_play)>("_play")
			.fun<static_cast<bool (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_is_playing)>("_is_playing")
			.fun<static_cast<void (VideoStreamPlayback::*)(bool)>(&VideoStreamPlayback::_set_paused)>("_set_paused")
			.fun<static_cast<bool (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_is_paused)>("_is_paused")
			.fun<static_cast<double (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_length)>("_get_length")
			.fun<static_cast<double (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_playback_position)>("_get_playback_position")
			.fun<static_cast<void (VideoStreamPlayback::*)(double)>(&VideoStreamPlayback::_seek)>("_seek")
			.fun<static_cast<void (VideoStreamPlayback::*)(int32_t)>(&VideoStreamPlayback::_set_audio_track)>("_set_audio_track")
			.fun<static_cast<Ref<Texture2D> (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_texture)>("_get_texture")
			.fun<static_cast<void (VideoStreamPlayback::*)(double)>(&VideoStreamPlayback::_update)>("_update")
			.fun<static_cast<int32_t (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_channels)>("_get_channels")
			.fun<static_cast<int32_t (VideoStreamPlayback::*)() const>(&VideoStreamPlayback::_get_mix_rate)>("_get_mix_rate")
			.fun<static_cast<int32_t (VideoStreamPlayback::*)(int32_t, const PackedFloat32Array &, int32_t)>(&VideoStreamPlayback::mix_audio)>("mix_audio");
}