#include <godot_cpp/classes/audio_effect_limiter.hpp>
#include <godot_cpp/classes/audio_effect.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectLimiter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectLimiter>("AudioEffectLimiter")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<double(AudioEffectLimiter::*)()const>(&AudioEffectLimiter::get_ceiling_db),static_cast<void(AudioEffectLimiter::*)(double)>(&AudioEffectLimiter::set_ceiling_db)>("ceiling_db")
            .property<static_cast<double(AudioEffectLimiter::*)()const>(&AudioEffectLimiter::get_threshold_db),static_cast<void(AudioEffectLimiter::*)(double)>(&AudioEffectLimiter::set_threshold_db)>("threshold_db")
            .property<static_cast<double(AudioEffectLimiter::*)()const>(&AudioEffectLimiter::get_soft_clip_db),static_cast<void(AudioEffectLimiter::*)(double)>(&AudioEffectLimiter::set_soft_clip_db)>("soft_clip_db")
            .property<static_cast<double(AudioEffectLimiter::*)()const>(&AudioEffectLimiter::get_soft_clip_ratio),static_cast<void(AudioEffectLimiter::*)(double)>(&AudioEffectLimiter::set_soft_clip_ratio)>("soft_clip_ratio")
;}