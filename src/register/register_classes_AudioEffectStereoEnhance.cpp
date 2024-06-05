#include <godot_cpp/classes/audio_effect_stereo_enhance.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioEffectStereoEnhance() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectStereoEnhance>("AudioEffectStereoEnhance")
			.constructor<>()
			.property<&AudioEffectStereoEnhance::get_pan_pullout, &AudioEffectStereoEnhance::set_pan_pullout>("pan_pullout")
			.property<&AudioEffectStereoEnhance::get_time_pullout, &AudioEffectStereoEnhance::set_time_pullout>("time_pullout_ms")
			.property<&AudioEffectStereoEnhance::get_surround, &AudioEffectStereoEnhance::set_surround>("surround");
}