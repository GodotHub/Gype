#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_stereo_enhance.hpp>

using namespace godot;

void register_classes_AudioEffectStereoEnhanceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectStereoEnhance>>("AudioEffectStereoEnhanceRef").constructor<AudioEffectStereoEnhance *>();
}