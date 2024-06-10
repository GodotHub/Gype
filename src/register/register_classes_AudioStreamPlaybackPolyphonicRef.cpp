#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_playback_polyphonic.hpp>

using namespace godot;

void register_classes_AudioStreamPlaybackPolyphonicRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamPlaybackPolyphonic>>("AudioStreamPlaybackPolyphonicRef").constructor<AudioStreamPlaybackPolyphonic *>();
}