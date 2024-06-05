#include <godot_cpp/classes/audio_effect_reverb.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioEffectReverb() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectReverb>("AudioEffectReverb")
			.constructor<>()
			.property<&AudioEffectReverb::get_predelay_msec, &AudioEffectReverb::set_predelay_msec>("predelay_msec")
			.property<&AudioEffectReverb::get_predelay_feedback, &AudioEffectReverb::set_predelay_feedback>("predelay_feedback")
			.property<&AudioEffectReverb::get_room_size, &AudioEffectReverb::set_room_size>("room_size")
			.property<&AudioEffectReverb::get_damping, &AudioEffectReverb::set_damping>("damping")
			.property<&AudioEffectReverb::get_spread, &AudioEffectReverb::set_spread>("spread")
			.property<&AudioEffectReverb::get_hpf, &AudioEffectReverb::set_hpf>("hipass")
			.property<&AudioEffectReverb::get_dry, &AudioEffectReverb::set_dry>("dry")
			.property<&AudioEffectReverb::get_wet, &AudioEffectReverb::set_wet>("wet");
}