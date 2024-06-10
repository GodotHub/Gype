#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_low_shelf_filter.hpp>

using namespace godot;

void register_classes_AudioEffectLowShelfFilterRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectLowShelfFilter>>("AudioEffectLowShelfFilterRef").constructor<AudioEffectLowShelfFilter *>();
}