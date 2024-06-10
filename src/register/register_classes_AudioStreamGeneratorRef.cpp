#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_generator.hpp>

using namespace godot;

void register_classes_AudioStreamGeneratorRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamGenerator>>("AudioStreamGeneratorRef").constructor<AudioStreamGenerator *>();
}