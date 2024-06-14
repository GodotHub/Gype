#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_phaser.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectPhaser() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectPhaser>("AudioEffectPhaser")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectPhaser::*)() const>(&AudioEffectPhaser::get_range_min_hz), static_cast<void (AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_range_min_hz)>((new std::string("range_min_hz"))->c_str())
			.property<static_cast<double (AudioEffectPhaser::*)() const>(&AudioEffectPhaser::get_range_max_hz), static_cast<void (AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_range_max_hz)>((new std::string("range_max_hz"))->c_str())
			.property<static_cast<double (AudioEffectPhaser::*)() const>(&AudioEffectPhaser::get_rate_hz), static_cast<void (AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_rate_hz)>((new std::string("rate_hz"))->c_str())
			.property<static_cast<double (AudioEffectPhaser::*)() const>(&AudioEffectPhaser::get_feedback), static_cast<void (AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_feedback)>((new std::string("feedback"))->c_str())
			.property<static_cast<double (AudioEffectPhaser::*)() const>(&AudioEffectPhaser::get_depth), static_cast<void (AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_depth)>((new std::string("depth"))->c_str());
}