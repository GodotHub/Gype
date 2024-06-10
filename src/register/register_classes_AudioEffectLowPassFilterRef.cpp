#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_low_pass_filter.hpp>

using namespace godot;

void register_classes_AudioEffectLowPassFilterRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectLowPassFilter>>("AudioEffectLowPassFilterRef").constructor<AudioEffectLowPassFilter *>();
}