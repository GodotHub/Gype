#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_distortion.hpp>

using namespace godot;

void register_classes_AudioEffectDistortionRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectDistortion>>("AudioEffectDistortionRef").constructor<AudioEffectDistortion *>();
}