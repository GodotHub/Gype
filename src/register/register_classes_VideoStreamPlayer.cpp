
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/classes/video_stream_player.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_VideoStreamPlayer() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<VideoStreamPlayer>("VideoStreamPlayer")
			.constructor<>()
			.base<Control>()
			.property<static_cast<int32_t (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_audio_track), static_cast<void (VideoStreamPlayer::*)(int32_t)>(&VideoStreamPlayer::set_audio_track)>((new std::string("audio_track"))->c_str())
			.property<static_cast<Ref<VideoStream> (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_stream), static_cast<void (VideoStreamPlayer::*)(const Ref<VideoStream> &)>(&VideoStreamPlayer::set_stream)>((new std::string("stream"))->c_str())
			.property<static_cast<double (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_volume_db), static_cast<void (VideoStreamPlayer::*)(double)>(&VideoStreamPlayer::set_volume_db)>((new std::string("volume_db"))->c_str())
			.property<static_cast<double (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_volume), static_cast<void (VideoStreamPlayer::*)(double)>(&VideoStreamPlayer::set_volume)>((new std::string("volume"))->c_str())
			.property<static_cast<bool (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::has_autoplay), static_cast<void (VideoStreamPlayer::*)(bool)>(&VideoStreamPlayer::set_autoplay)>((new std::string("autoplay"))->c_str())
			.property<static_cast<bool (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::is_paused), static_cast<void (VideoStreamPlayer::*)(bool)>(&VideoStreamPlayer::set_paused)>((new std::string("paused"))->c_str())
			.property<static_cast<bool (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::has_expand), static_cast<void (VideoStreamPlayer::*)(bool)>(&VideoStreamPlayer::set_expand)>((new std::string("expand"))->c_str())
			.property<static_cast<bool (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::has_loop), static_cast<void (VideoStreamPlayer::*)(bool)>(&VideoStreamPlayer::set_loop)>((new std::string("loop"))->c_str())
			.property<static_cast<int32_t (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_buffering_msec), static_cast<void (VideoStreamPlayer::*)(int32_t)>(&VideoStreamPlayer::set_buffering_msec)>((new std::string("buffering_msec"))->c_str())
			.property<static_cast<double (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_stream_position), static_cast<void (VideoStreamPlayer::*)(double)>(&VideoStreamPlayer::set_stream_position)>((new std::string("stream_position"))->c_str())
			.property<static_cast<StringName (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_bus), static_cast<void (VideoStreamPlayer::*)(const StringName &)>(&VideoStreamPlayer::set_bus)>((new std::string("bus"))->c_str())
			.fun<static_cast<void (VideoStreamPlayer::*)()>(&VideoStreamPlayer::play)>((new std::string("play"))->c_str())
			.fun<static_cast<void (VideoStreamPlayer::*)()>(&VideoStreamPlayer::stop)>((new std::string("stop"))->c_str())
			.fun<static_cast<bool (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::is_playing)>((new std::string("is_playing"))->c_str())
			.fun<static_cast<String (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_stream_name)>((new std::string("get_stream_name"))->c_str())
			.fun<static_cast<double (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_stream_length)>((new std::string("get_stream_length"))->c_str())
			.fun<static_cast<Ref<Texture2D> (VideoStreamPlayer::*)() const>(&VideoStreamPlayer::get_video_texture)>((new std::string("get_video_texture"))->c_str());
}