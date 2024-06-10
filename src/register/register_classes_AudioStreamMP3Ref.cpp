#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_mp3.hpp>

using namespace godot;

void register_classes_AudioStreamMP3Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamMP3>>("AudioStreamMP3Ref").constructor<AudioStreamMP3 *>();
}