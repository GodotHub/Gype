#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_compressor.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectCompressor() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectCompressor>("AudioEffectCompressor")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectCompressor::*)() const>(&AudioEffectCompressor::get_threshold), static_cast<void (AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_threshold)>((new std::string("threshold"))->c_str())
			.property<static_cast<double (AudioEffectCompressor::*)() const>(&AudioEffectCompressor::get_ratio), static_cast<void (AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_ratio)>((new std::string("ratio"))->c_str())
			.property<static_cast<double (AudioEffectCompressor::*)() const>(&AudioEffectCompressor::get_gain), static_cast<void (AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_gain)>((new std::string("gain"))->c_str())
			.property<static_cast<double (AudioEffectCompressor::*)() const>(&AudioEffectCompressor::get_attack_us), static_cast<void (AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_attack_us)>((new std::string("attack_us"))->c_str())
			.property<static_cast<double (AudioEffectCompressor::*)() const>(&AudioEffectCompressor::get_release_ms), static_cast<void (AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_release_ms)>((new std::string("release_ms"))->c_str())
			.property<static_cast<double (AudioEffectCompressor::*)() const>(&AudioEffectCompressor::get_mix), static_cast<void (AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_mix)>((new std::string("mix"))->c_str())
			.property<static_cast<StringName (AudioEffectCompressor::*)() const>(&AudioEffectCompressor::get_sidechain), static_cast<void (AudioEffectCompressor::*)(const StringName &)>(&AudioEffectCompressor::set_sidechain)>((new std::string("sidechain"))->c_str());
}