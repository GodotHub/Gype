#include <godot_cpp/classes/audio_effect_amplify.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectAmplify() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectAmplify>("AudioEffectAmplify")
			.constructor<>()
			.property<&AudioEffectAmplify::get_volume_db, &AudioEffectAmplify::set_volume_db>("volume_db");
}