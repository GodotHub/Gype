#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_distortion.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectDistortion() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectDistortion>("AudioEffectDistortion")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<AudioEffectDistortion::Mode (AudioEffectDistortion::*)() const>(&AudioEffectDistortion::get_mode), static_cast<void (AudioEffectDistortion::*)(AudioEffectDistortion::Mode)>(&AudioEffectDistortion::set_mode)>((new std::string("mode"))->c_str())
			.property<static_cast<double (AudioEffectDistortion::*)() const>(&AudioEffectDistortion::get_pre_gain), static_cast<void (AudioEffectDistortion::*)(double)>(&AudioEffectDistortion::set_pre_gain)>((new std::string("pre_gain"))->c_str())
			.property<static_cast<double (AudioEffectDistortion::*)() const>(&AudioEffectDistortion::get_keep_hf_hz), static_cast<void (AudioEffectDistortion::*)(double)>(&AudioEffectDistortion::set_keep_hf_hz)>((new std::string("keep_hf_hz"))->c_str())
			.property<static_cast<double (AudioEffectDistortion::*)() const>(&AudioEffectDistortion::get_drive), static_cast<void (AudioEffectDistortion::*)(double)>(&AudioEffectDistortion::set_drive)>((new std::string("drive"))->c_str())
			.property<static_cast<double (AudioEffectDistortion::*)() const>(&AudioEffectDistortion::get_post_gain), static_cast<void (AudioEffectDistortion::*)(double)>(&AudioEffectDistortion::set_post_gain)>((new std::string("post_gain"))->c_str());
	qjs::Value _Mode = context->newObject();
	_Mode[(new std::string("MODE_CLIP"))->c_str()] = AudioEffectDistortion::Mode::MODE_CLIP;
	_Mode[(new std::string("MODE_ATAN"))->c_str()] = AudioEffectDistortion::Mode::MODE_ATAN;
	_Mode[(new std::string("MODE_LOFI"))->c_str()] = AudioEffectDistortion::Mode::MODE_LOFI;
	_Mode[(new std::string("MODE_OVERDRIVE"))->c_str()] = AudioEffectDistortion::Mode::MODE_OVERDRIVE;
	_Mode[(new std::string("MODE_WAVESHAPE"))->c_str()] = AudioEffectDistortion::Mode::MODE_WAVESHAPE;
	_module.add("Mode", std::move(_Mode));
}