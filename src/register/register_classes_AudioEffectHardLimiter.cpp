#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_hard_limiter.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectHardLimiter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectHardLimiter>("AudioEffectHardLimiter")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectHardLimiter::*)() const>(&AudioEffectHardLimiter::get_pre_gain_db), static_cast<void (AudioEffectHardLimiter::*)(double)>(&AudioEffectHardLimiter::set_pre_gain_db)>((new std::string("pre_gain_db"))->c_str())
			.property<static_cast<double (AudioEffectHardLimiter::*)() const>(&AudioEffectHardLimiter::get_ceiling_db), static_cast<void (AudioEffectHardLimiter::*)(double)>(&AudioEffectHardLimiter::set_ceiling_db)>((new std::string("ceiling_db"))->c_str())
			.property<static_cast<double (AudioEffectHardLimiter::*)() const>(&AudioEffectHardLimiter::get_release), static_cast<void (AudioEffectHardLimiter::*)(double)>(&AudioEffectHardLimiter::set_release)>((new std::string("release"))->c_str());
}