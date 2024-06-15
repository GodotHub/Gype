#include <godot_cpp/classes/video_stream_player.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_VideoStreamPlayer() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<VideoStreamPlayer>("VideoStreamPlayer")
            .constructor<>()
            .base<Control>()
            .property<static_cast<int32_t(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_audio_track),static_cast<void(VideoStreamPlayer::*)(int32_t)>(&VideoStreamPlayer::set_audio_track)>("audio_track")
            .property<static_cast<Ref<VideoStream>(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_stream),static_cast<void(VideoStreamPlayer::*)(const Ref<VideoStream> &)>(&VideoStreamPlayer::set_stream)>("stream")
            .property<static_cast<double(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_volume_db),static_cast<void(VideoStreamPlayer::*)(double)>(&VideoStreamPlayer::set_volume_db)>("volume_db")
            .property<static_cast<double(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_volume),static_cast<void(VideoStreamPlayer::*)(double)>(&VideoStreamPlayer::set_volume)>("volume")
            .property<static_cast<bool(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::has_autoplay),static_cast<void(VideoStreamPlayer::*)(bool)>(&VideoStreamPlayer::set_autoplay)>("autoplay")
            .property<static_cast<bool(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::is_paused),static_cast<void(VideoStreamPlayer::*)(bool)>(&VideoStreamPlayer::set_paused)>("paused")
            .property<static_cast<bool(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::has_expand),static_cast<void(VideoStreamPlayer::*)(bool)>(&VideoStreamPlayer::set_expand)>("expand")
            .property<static_cast<bool(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::has_loop),static_cast<void(VideoStreamPlayer::*)(bool)>(&VideoStreamPlayer::set_loop)>("loop")
            .property<static_cast<int32_t(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_buffering_msec),static_cast<void(VideoStreamPlayer::*)(int32_t)>(&VideoStreamPlayer::set_buffering_msec)>("buffering_msec")
            .property<static_cast<double(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_stream_position),static_cast<void(VideoStreamPlayer::*)(double)>(&VideoStreamPlayer::set_stream_position)>("stream_position")
            .property<static_cast<StringName(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_bus),static_cast<void(VideoStreamPlayer::*)(const StringName &)>(&VideoStreamPlayer::set_bus)>("bus")
            .fun<static_cast<void(VideoStreamPlayer::*)()>(&VideoStreamPlayer::play)>("play")
            .fun<static_cast<void(VideoStreamPlayer::*)()>(&VideoStreamPlayer::stop)>("stop")
            .fun<static_cast<bool(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::is_playing)>("is_playing")
            .fun<static_cast<String(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_stream_name)>("get_stream_name")
            .fun<static_cast<double(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_stream_length)>("get_stream_length")
            .fun<static_cast<Ref<Texture2D>(VideoStreamPlayer::*)()const>(&VideoStreamPlayer::get_video_texture)>("get_video_texture")
;}