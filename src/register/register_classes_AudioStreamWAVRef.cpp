#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_wav.hpp>

using namespace godot;

void register_classes_AudioStreamWAVRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamWAV>>("AudioStreamWAVRef").constructor<AudioStreamWAV *>();
}