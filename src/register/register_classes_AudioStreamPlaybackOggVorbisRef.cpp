#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_playback_ogg_vorbis.hpp>

using namespace godot;

void register_classes_AudioStreamPlaybackOggVorbisRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamPlaybackOggVorbis>>("AudioStreamPlaybackOggVorbisRef").constructor<AudioStreamPlaybackOggVorbis *>();
}