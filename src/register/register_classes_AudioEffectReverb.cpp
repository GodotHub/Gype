#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_reverb.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectReverb() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectReverb>("AudioEffectReverb")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectReverb::*)() const>(&AudioEffectReverb::get_predelay_msec), static_cast<void (AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_predelay_msec)>((new std::string("predelay_msec"))->c_str())
			.property<static_cast<double (AudioEffectReverb::*)() const>(&AudioEffectReverb::get_predelay_feedback), static_cast<void (AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_predelay_feedback)>((new std::string("predelay_feedback"))->c_str())
			.property<static_cast<double (AudioEffectReverb::*)() const>(&AudioEffectReverb::get_room_size), static_cast<void (AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_room_size)>((new std::string("room_size"))->c_str())
			.property<static_cast<double (AudioEffectReverb::*)() const>(&AudioEffectReverb::get_damping), static_cast<void (AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_damping)>((new std::string("damping"))->c_str())
			.property<static_cast<double (AudioEffectReverb::*)() const>(&AudioEffectReverb::get_spread), static_cast<void (AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_spread)>((new std::string("spread"))->c_str())
			.property<static_cast<double (AudioEffectReverb::*)() const>(&AudioEffectReverb::get_hpf), static_cast<void (AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_hpf)>((new std::string("hipass"))->c_str())
			.property<static_cast<double (AudioEffectReverb::*)() const>(&AudioEffectReverb::get_dry), static_cast<void (AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_dry)>((new std::string("dry"))->c_str())
			.property<static_cast<double (AudioEffectReverb::*)() const>(&AudioEffectReverb::get_wet), static_cast<void (AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_wet)>((new std::string("wet"))->c_str());
}