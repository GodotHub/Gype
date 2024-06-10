#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream.hpp>

using namespace godot;

void register_classes_AudioStreamRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStream>>("AudioStreamRef").constructor<AudioStream *>();
}