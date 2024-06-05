#include <godot_cpp/classes/audio_effect_eq10.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioEffectEQ10() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectEQ10>("AudioEffectEQ10")
			.constructor<>();
}