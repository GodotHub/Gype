#include <godot_cpp/classes/audio_effect_eq6.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectEQ6() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectEQ6>("AudioEffectEQ6")
			.constructor<>();
}