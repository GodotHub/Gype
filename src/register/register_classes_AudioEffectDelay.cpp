#include <godot_cpp/classes/audio_effect_delay.hpp>
#include <godot_cpp/classes/audio_effect.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectDelay() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectDelay>("AudioEffectDelay")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<double(AudioEffectDelay::*)()>(&AudioEffectDelay::get_dry),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_dry)>("dry")
            .property<static_cast<bool(AudioEffectDelay::*)()const>(&AudioEffectDelay::is_tap1_active),static_cast<void(AudioEffectDelay::*)(bool)>(&AudioEffectDelay::set_tap1_active)>("tap1_active")
            .property<static_cast<double(AudioEffectDelay::*)()const>(&AudioEffectDelay::get_tap1_delay_ms),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap1_delay_ms)>("tap1_delay_ms")
            .property<static_cast<double(AudioEffectDelay::*)()const>(&AudioEffectDelay::get_tap1_level_db),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap1_level_db)>("tap1_level_db")
            .property<static_cast<double(AudioEffectDelay::*)()const>(&AudioEffectDelay::get_tap1_pan),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap1_pan)>("tap1_pan")
            .property<static_cast<bool(AudioEffectDelay::*)()const>(&AudioEffectDelay::is_tap2_active),static_cast<void(AudioEffectDelay::*)(bool)>(&AudioEffectDelay::set_tap2_active)>("tap2_active")
            .property<static_cast<double(AudioEffectDelay::*)()const>(&AudioEffectDelay::get_tap2_delay_ms),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap2_delay_ms)>("tap2_delay_ms")
            .property<static_cast<double(AudioEffectDelay::*)()const>(&AudioEffectDelay::get_tap2_level_db),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap2_level_db)>("tap2_level_db")
            .property<static_cast<double(AudioEffectDelay::*)()const>(&AudioEffectDelay::get_tap2_pan),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_tap2_pan)>("tap2_pan")
            .property<static_cast<bool(AudioEffectDelay::*)()const>(&AudioEffectDelay::is_feedback_active),static_cast<void(AudioEffectDelay::*)(bool)>(&AudioEffectDelay::set_feedback_active)>("feedback_active")
            .property<static_cast<double(AudioEffectDelay::*)()const>(&AudioEffectDelay::get_feedback_delay_ms),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_feedback_delay_ms)>("feedback_delay_ms")
            .property<static_cast<double(AudioEffectDelay::*)()const>(&AudioEffectDelay::get_feedback_level_db),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_feedback_level_db)>("feedback_level_db")
            .property<static_cast<double(AudioEffectDelay::*)()const>(&AudioEffectDelay::get_feedback_lowpass),static_cast<void(AudioEffectDelay::*)(double)>(&AudioEffectDelay::set_feedback_lowpass)>("feedback_lowpass")
;}