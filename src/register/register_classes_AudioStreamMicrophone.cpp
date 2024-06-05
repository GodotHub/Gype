#include <godot_cpp/classes/audio_stream_microphone.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioStreamMicrophone() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioStreamMicrophone>("AudioStreamMicrophone")
			.constructor<>();
}