#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_band_limit_filter.hpp>

using namespace godot;

void register_classes_AudioEffectBandLimitFilterRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectBandLimitFilter>>("AudioEffectBandLimitFilterRef").constructor<AudioEffectBandLimitFilter *>();
}