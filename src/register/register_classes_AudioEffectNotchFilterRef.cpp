#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_notch_filter.hpp>

using namespace godot;

void register_classes_AudioEffectNotchFilterRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectNotchFilter>>("AudioEffectNotchFilterRef").constructor<AudioEffectNotchFilter *>();
}