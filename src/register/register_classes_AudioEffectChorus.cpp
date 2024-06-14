
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_chorus.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectChorus() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectChorus>("AudioEffectChorus")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<int32_t (AudioEffectChorus::*)() const>(&AudioEffectChorus::get_voice_count), static_cast<void (AudioEffectChorus::*)(int32_t)>(&AudioEffectChorus::set_voice_count)>((new std::string("voice_count"))->c_str())
			.property<static_cast<double (AudioEffectChorus::*)() const>(&AudioEffectChorus::get_dry), static_cast<void (AudioEffectChorus::*)(double)>(&AudioEffectChorus::set_dry)>((new std::string("dry"))->c_str())
			.property<static_cast<double (AudioEffectChorus::*)() const>(&AudioEffectChorus::get_wet), static_cast<void (AudioEffectChorus::*)(double)>(&AudioEffectChorus::set_wet)>((new std::string("wet"))->c_str())
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_delay_ms)>((new std::string("set_voice_delay_ms"))->c_str())
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_delay_ms)>((new std::string("get_voice_delay_ms"))->c_str())
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_rate_hz)>((new std::string("set_voice_rate_hz"))->c_str())
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_rate_hz)>((new std::string("get_voice_rate_hz"))->c_str())
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_depth_ms)>((new std::string("set_voice_depth_ms"))->c_str())
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_depth_ms)>((new std::string("get_voice_depth_ms"))->c_str())
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_level_db)>((new std::string("set_voice_level_db"))->c_str())
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_level_db)>((new std::string("get_voice_level_db"))->c_str())
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_cutoff_hz)>((new std::string("set_voice_cutoff_hz"))->c_str())
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_cutoff_hz)>((new std::string("get_voice_cutoff_hz"))->c_str())
			.fun<static_cast<void (AudioEffectChorus::*)(int32_t, double)>(&AudioEffectChorus::set_voice_pan)>((new std::string("set_voice_pan"))->c_str())
			.fun<static_cast<double (AudioEffectChorus::*)(int32_t) const>(&AudioEffectChorus::get_voice_pan)>((new std::string("get_voice_pan"))->c_str());
}