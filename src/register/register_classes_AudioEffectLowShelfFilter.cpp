#include <godot_cpp/classes/audio_effect_low_shelf_filter.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectLowShelfFilter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectLowShelfFilter>("AudioEffectLowShelfFilter")
			.constructor<>();
}