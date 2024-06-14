#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_stereo_enhance.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectStereoEnhance() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectStereoEnhance>("AudioEffectStereoEnhance")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectStereoEnhance::*)() const>(&AudioEffectStereoEnhance::get_pan_pullout), static_cast<void (AudioEffectStereoEnhance::*)(double)>(&AudioEffectStereoEnhance::set_pan_pullout)>((new std::string("pan_pullout"))->c_str())
			.property<static_cast<double (AudioEffectStereoEnhance::*)() const>(&AudioEffectStereoEnhance::get_time_pullout), static_cast<void (AudioEffectStereoEnhance::*)(double)>(&AudioEffectStereoEnhance::set_time_pullout)>((new std::string("time_pullout_ms"))->c_str())
			.property<static_cast<double (AudioEffectStereoEnhance::*)() const>(&AudioEffectStereoEnhance::get_surround), static_cast<void (AudioEffectStereoEnhance::*)(double)>(&AudioEffectStereoEnhance::set_surround)>((new std::string("surround"))->c_str());
}