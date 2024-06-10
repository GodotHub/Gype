#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_reverb.hpp>

using namespace godot;

void register_classes_AudioEffectReverbRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectReverb>>("AudioEffectReverbRef").constructor<AudioEffectReverb *>();
}