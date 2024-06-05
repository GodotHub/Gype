#include <godot_cpp/classes/audio_effect_notch_filter.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioEffectNotchFilter() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectNotchFilter>("AudioEffectNotchFilter")
			.constructor<>();
}