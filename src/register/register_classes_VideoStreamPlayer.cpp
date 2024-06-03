#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/video_stream_player.hpp>

using namespace godot;

void register_classes_VideoStreamPlayer() {
    qjs::Context::Module &_module = _Control;
    _module.class_<VideoStreamPlayer>("VideoStreamPlayer")
           .constructor<>()
           .property<VideoStreamPlayer::get_audio_track, VideoStreamPlayer::set_audio_track>("audio_track")
           .property<VideoStreamPlayer::get_stream, VideoStreamPlayer::set_stream>("stream")
           .property<VideoStreamPlayer::get_volume_db, VideoStreamPlayer::set_volume_db>("volume_db")
           .property<VideoStreamPlayer::get_volume, VideoStreamPlayer::set_volume>("volume")
           .property<VideoStreamPlayer::has_autoplay, VideoStreamPlayer::set_autoplay>("autoplay")
           .property<VideoStreamPlayer::is_paused, VideoStreamPlayer::set_paused>("paused")
           .property<VideoStreamPlayer::has_expand, VideoStreamPlayer::set_expand>("expand")
           .property<VideoStreamPlayer::has_loop, VideoStreamPlayer::set_loop>("loop")
           .property<VideoStreamPlayer::get_buffering_msec, VideoStreamPlayer::set_buffering_msec>("buffering_msec")
           .property<VideoStreamPlayer::get_stream_position, VideoStreamPlayer::set_stream_position>("stream_position")
           .property<VideoStreamPlayer::get_bus, VideoStreamPlayer::set_bus>("bus")
		    .fun<static_cast<void(VideoStreamPlayer::*)()>(&VideoStreamPlayer::play)>("play")
		    .fun<static_cast<void(VideoStreamPlayer::*)()>(&VideoStreamPlayer::stop)>("stop")
		    .fun<static_cast<bool(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::is_playing)>("is_playing")
		    .fun<static_cast<String(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_stream_name)>("get_stream_name")
		    .fun<static_cast<double(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_stream_length)>("get_stream_length")
		    .fun<static_cast<Ref<Texture2D>(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_video_texture)>("get_video_texture")
;}