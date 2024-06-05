#include <godot_cpp/classes/audio_effect_eq.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectEQ() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectEQ>("AudioEffectEQ")
			.constructor<>()
			.fun<static_cast<void (AudioEffectEQ::*)(int32_t, double)>(&AudioEffectEQ::set_band_gain_db)>("set_band_gain_db")
			.fun<static_cast<double (AudioEffectEQ::*)(int32_t) const>(&AudioEffectEQ::get_band_gain_db)>("get_band_gain_db")
			.fun<static_cast<int32_t (AudioEffectEQ::*)() const>(&AudioEffectEQ::get_band_count)>("get_band_count");
}