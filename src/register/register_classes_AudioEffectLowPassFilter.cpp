#include <godot_cpp/classes/audio_effect_low_pass_filter.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectLowPassFilter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectLowPassFilter>("AudioEffectLowPassFilter")
			.constructor<>();
}