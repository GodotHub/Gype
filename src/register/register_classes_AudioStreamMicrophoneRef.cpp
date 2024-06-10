#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_microphone.hpp>

using namespace godot;

void register_classes_AudioStreamMicrophoneRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamMicrophone>>("AudioStreamMicrophoneRef").constructor<AudioStreamMicrophone *>();
}