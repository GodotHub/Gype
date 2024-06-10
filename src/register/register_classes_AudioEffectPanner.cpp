#include <godot_cpp/classes/audio_effect_panner.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectPanner() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectPanner>("AudioEffectPanner")
			.constructor<>()
			.property<&AudioEffectPanner::get_pan, &AudioEffectPanner::set_pan>("pan");
}