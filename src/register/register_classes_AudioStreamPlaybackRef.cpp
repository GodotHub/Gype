#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_playback.hpp>

using namespace godot;

void register_classes_AudioStreamPlaybackRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamPlayback>>("AudioStreamPlaybackRef").constructor<AudioStreamPlayback *>();
}