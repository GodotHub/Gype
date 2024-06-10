#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_panner.hpp>

using namespace godot;

void register_classes_AudioEffectPannerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectPanner>>("AudioEffectPannerRef").constructor<AudioEffectPanner *>();
}