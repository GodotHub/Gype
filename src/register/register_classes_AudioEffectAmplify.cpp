#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_amplify.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectAmplify() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectAmplify>("AudioEffectAmplify")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectAmplify::*)() const>(&AudioEffectAmplify::get_volume_db), static_cast<void (AudioEffectAmplify::*)(double)>(&AudioEffectAmplify::set_volume_db)>((new std::string("volume_db"))->c_str());
}