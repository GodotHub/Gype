#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>

using namespace godot;

void register_classes_AudioStreamOggVorbisRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamOggVorbis>>("AudioStreamOggVorbisRef").constructor<AudioStreamOggVorbis *>();
}