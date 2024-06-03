#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_stream.hpp>

using namespace godot;

void register_classes_AudioStream() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioStream>("AudioStream")
           .constructor<>()
		    .fun<static_cast<Ref<AudioStreamPlayback>(AudioStream::*)()const>(&AudioStream::_instantiate_playback)>("_instantiate_playback")
		    .fun<static_cast<String(AudioStream::*)()const>(&AudioStream::_get_stream_name)>("_get_stream_name")
		    .fun<static_cast<double(AudioStream::*)()const>(&AudioStream::_get_length)>("_get_length")
		    .fun<static_cast<bool(AudioStream::*)()const>(&AudioStream::_is_monophonic)>("_is_monophonic")
		    .fun<static_cast<double(AudioStream::*)()const>(&AudioStream::_get_bpm)>("_get_bpm")
		    .fun<static_cast<int32_t(AudioStream::*)()const>(&AudioStream::_get_beat_count)>("_get_beat_count")
		    .fun<static_cast<double(AudioStream::*)()const>(&AudioStream::get_length)>("get_length")
		    .fun<static_cast<bool(AudioStream::*)()const>(&AudioStream::is_monophonic)>("is_monophonic")
		    .fun<static_cast<Ref<AudioStreamPlayback>(AudioStream::*)()>(&AudioStream::instantiate_playback)>("instantiate_playback")
;}