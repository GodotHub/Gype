#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_chorus.hpp>

using namespace godot;

void register_classes_AudioEffectChorusRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectChorus>>("AudioEffectChorusRef").constructor<AudioEffectChorus *>();
}