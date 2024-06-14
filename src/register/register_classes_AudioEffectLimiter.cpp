#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_limiter.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectLimiter() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectLimiter>("AudioEffectLimiter")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectLimiter::*)() const>(&AudioEffectLimiter::get_ceiling_db), static_cast<void (AudioEffectLimiter::*)(double)>(&AudioEffectLimiter::set_ceiling_db)>((new std::string("ceiling_db"))->c_str())
			.property<static_cast<double (AudioEffectLimiter::*)() const>(&AudioEffectLimiter::get_threshold_db), static_cast<void (AudioEffectLimiter::*)(double)>(&AudioEffectLimiter::set_threshold_db)>((new std::string("threshold_db"))->c_str())
			.property<static_cast<double (AudioEffectLimiter::*)() const>(&AudioEffectLimiter::get_soft_clip_db), static_cast<void (AudioEffectLimiter::*)(double)>(&AudioEffectLimiter::set_soft_clip_db)>((new std::string("soft_clip_db"))->c_str())
			.property<static_cast<double (AudioEffectLimiter::*)() const>(&AudioEffectLimiter::get_soft_clip_ratio), static_cast<void (AudioEffectLimiter::*)(double)>(&AudioEffectLimiter::set_soft_clip_ratio)>((new std::string("soft_clip_ratio"))->c_str());
}