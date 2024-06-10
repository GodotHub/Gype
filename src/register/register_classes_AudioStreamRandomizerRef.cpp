#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_randomizer.hpp>

using namespace godot;

void register_classes_AudioStreamRandomizerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamRandomizer>>("AudioStreamRandomizerRef").constructor<AudioStreamRandomizer *>();
}