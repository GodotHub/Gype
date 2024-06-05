#include <godot_cpp/classes/audio_effect_delay.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioEffectDelay() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectDelay>("AudioEffectDelay")
			.constructor<>()
			.property<&AudioEffectDelay::get_dry, &AudioEffectDelay::set_dry>("dry")
			.property<&AudioEffectDelay::is_tap1_active, &AudioEffectDelay::set_tap1_active>("tap1_active")
			.property<&AudioEffectDelay::get_tap1_delay_ms, &AudioEffectDelay::set_tap1_delay_ms>("tap1_delay_ms")
			.property<&AudioEffectDelay::get_tap1_level_db, &AudioEffectDelay::set_tap1_level_db>("tap1_level_db")
			.property<&AudioEffectDelay::get_tap1_pan, &AudioEffectDelay::set_tap1_pan>("tap1_pan")
			.property<&AudioEffectDelay::is_tap2_active, &AudioEffectDelay::set_tap2_active>("tap2_active")
			.property<&AudioEffectDelay::get_tap2_delay_ms, &AudioEffectDelay::set_tap2_delay_ms>("tap2_delay_ms")
			.property<&AudioEffectDelay::get_tap2_level_db, &AudioEffectDelay::set_tap2_level_db>("tap2_level_db")
			.property<&AudioEffectDelay::get_tap2_pan, &AudioEffectDelay::set_tap2_pan>("tap2_pan")
			.property<&AudioEffectDelay::is_feedback_active, &AudioEffectDelay::set_feedback_active>("feedback_active")
			.property<&AudioEffectDelay::get_feedback_delay_ms, &AudioEffectDelay::set_feedback_delay_ms>("feedback_delay_ms")
			.property<&AudioEffectDelay::get_feedback_level_db, &AudioEffectDelay::set_feedback_level_db>("feedback_level_db")
			.property<&AudioEffectDelay::get_feedback_lowpass, &AudioEffectDelay::set_feedback_lowpass>("feedback_lowpass");
}