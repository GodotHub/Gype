#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_panner.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectPanner() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectPanner>("AudioEffectPanner")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectPanner::*)() const>(&AudioEffectPanner::get_pan), static_cast<void (AudioEffectPanner::*)(double)>(&AudioEffectPanner::set_pan)>((new std::string("pan"))->c_str());
}