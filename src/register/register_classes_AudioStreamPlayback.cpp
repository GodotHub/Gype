#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_stream_playback.hpp>

using namespace godot;

void register_classes_AudioStreamPlayback() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioStreamPlayback>("AudioStreamPlayback")
           .constructor<>()
		    .fun<static_cast<void(AudioStreamPlayback::*)(double)>(&AudioStreamPlayback::_start)>("_start")
		    .fun<static_cast<void(AudioStreamPlayback::*)()>(&AudioStreamPlayback::_stop)>("_stop")
		    .fun<static_cast<bool(AudioStreamPlayback::*)()const>(&AudioStreamPlayback::_is_playing)>("_is_playing")
		    .fun<static_cast<int32_t(AudioStreamPlayback::*)()const>(&AudioStreamPlayback::_get_loop_count)>("_get_loop_count")
		    .fun<static_cast<double(AudioStreamPlayback::*)()const>(&AudioStreamPlayback::_get_playback_position)>("_get_playback_position")
		    .fun<static_cast<void(AudioStreamPlayback::*)(double)>(&AudioStreamPlayback::_seek)>("_seek")
		    .fun<static_cast<int32_t(AudioStreamPlayback::*)(AudioFrame*,double,int32_t)>(&AudioStreamPlayback::_mix)>("_mix")
		    .fun<static_cast<void(AudioStreamPlayback::*)()>(&AudioStreamPlayback::_tag_used_streams)>("_tag_used_streams")
;}