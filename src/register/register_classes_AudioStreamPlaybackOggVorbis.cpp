#include <godot_cpp/classes/audio_stream_playback_ogg_vorbis.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioStreamPlaybackOggVorbis() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioStreamPlaybackOggVorbis>("AudioStreamPlaybackOggVorbis")
			.constructor<>();
}