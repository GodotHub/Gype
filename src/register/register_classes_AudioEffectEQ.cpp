
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_eq.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectEQ() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectEQ>("AudioEffectEQ")
			.constructor<>()
			.base<AudioEffect>()
			.fun<static_cast<void (AudioEffectEQ::*)(int32_t, double)>(&AudioEffectEQ::set_band_gain_db)>((new std::string("set_band_gain_db"))->c_str())
			.fun<static_cast<double (AudioEffectEQ::*)(int32_t) const>(&AudioEffectEQ::get_band_gain_db)>((new std::string("get_band_gain_db"))->c_str())
			.fun<static_cast<int32_t (AudioEffectEQ::*)() const>(&AudioEffectEQ::get_band_count)>((new std::string("get_band_count"))->c_str());
}