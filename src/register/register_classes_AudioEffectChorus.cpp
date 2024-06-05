#include <godot_cpp/classes/audio_effect_chorus.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectChorus() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectChorus>("AudioEffectChorus")
			.constructor<>()
			.property<&AudioEffectChorus::get_voice_count, &AudioEffectChorus::set_voice_count>("voice_count")
			.property<&AudioEffectChorus::get_dry, &AudioEffectChorus::set_dry>("dry")
			.property<&AudioEffectChorus::get_wet, &AudioEffectChorus::set_wet>("wet")
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_delay_ms)>("set_voice_delay_ms")
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_delay_ms)>("get_voice_delay_ms")
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_rate_hz)>("set_voice_rate_hz")
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_rate_hz)>("get_voice_rate_hz")
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_depth_ms)>("set_voice_depth_ms")
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_depth_ms)>("get_voice_depth_ms")
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_level_db)>("set_voice_level_db")
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_level_db)>("get_voice_level_db")
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_cutoff_hz)>("set_voice_cutoff_hz")
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_cutoff_hz)>("get_voice_cutoff_hz")
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_pan)>("set_voice_pan")
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_pan)>("get_voice_pan");
}