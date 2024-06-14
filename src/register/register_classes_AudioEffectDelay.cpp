#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_delay.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectDelay() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectDelay>("AudioEffectDelay")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectDelay::*)()>(&AudioEffectDelay::get_dry), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_dry)>((new std::string("dry"))->c_str())
			.property<static_cast<bool (AudioEffectDelay::*)() const>(&AudioEffectDelay::is_tap1_active), static_cast<void (AudioEffectDelay::*)(bool)>(&AudioEffectDelay::set_tap1_active)>((new std::string("tap1_active"))->c_str())
			.property<static_cast<double (AudioEffectDelay::*)() const>(&AudioEffectDelay::get_tap1_delay_ms), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap1_delay_ms)>((new std::string("tap1_delay_ms"))->c_str())
			.property<static_cast<double (AudioEffectDelay::*)() const>(&AudioEffectDelay::get_tap1_level_db), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap1_level_db)>((new std::string("tap1_level_db"))->c_str())
			.property<static_cast<double (AudioEffectDelay::*)() const>(&AudioEffectDelay::get_tap1_pan), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap1_pan)>((new std::string("tap1_pan"))->c_str())
			.property<static_cast<bool (AudioEffectDelay::*)() const>(&AudioEffectDelay::is_tap2_active), static_cast<void (AudioEffectDelay::*)(bool)>(&AudioEffectDelay::set_tap2_active)>((new std::string("tap2_active"))->c_str())
			.property<static_cast<double (AudioEffectDelay::*)() const>(&AudioEffectDelay::get_tap2_delay_ms), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap2_delay_ms)>((new std::string("tap2_delay_ms"))->c_str())
			.property<static_cast<double (AudioEffectDelay::*)() const>(&AudioEffectDelay::get_tap2_level_db), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap2_level_db)>((new std::string("tap2_level_db"))->c_str())
			.property<static_cast<double (AudioEffectDelay::*)() const>(&AudioEffectDelay::get_tap2_pan), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap2_pan)>((new std::string("tap2_pan"))->c_str())
			.property<static_cast<bool (AudioEffectDelay::*)() const>(&AudioEffectDelay::is_feedback_active), static_cast<void (AudioEffectDelay::*)(bool)>(&AudioEffectDelay::set_feedback_active)>((new std::string("feedback_active"))->c_str())
			.property<static_cast<double (AudioEffectDelay::*)() const>(&AudioEffectDelay::get_feedback_delay_ms), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_feedback_delay_ms)>((new std::string("feedback_delay_ms"))->c_str())
			.property<static_cast<double (AudioEffectDelay::*)() const>(&AudioEffectDelay::get_feedback_level_db), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_feedback_level_db)>((new std::string("feedback_level_db"))->c_str())
			.property<static_cast<double (AudioEffectDelay::*)() const>(&AudioEffectDelay::get_feedback_lowpass), static_cast<void (AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_feedback_lowpass)>((new std::string("feedback_lowpass"))->c_str());
}