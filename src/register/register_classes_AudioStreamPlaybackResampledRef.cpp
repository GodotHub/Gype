#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>

using namespace godot;

void register_classes_AudioStreamPlaybackResampledRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamPlaybackResampled>>("AudioStreamPlaybackResampledRef").constructor<AudioStreamPlaybackResampled *>();
}