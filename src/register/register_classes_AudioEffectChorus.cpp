#include <godot_cpp/classes/audio_effect_chorus.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectChorus() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectChorus>("AudioEffectChorus")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<int32_t(AudioEffectChorus::*)()const>(&AudioEffectChorus::get_voice_count),static_cast<void(AudioEffectChorus::*)(int32_t)>(&AudioEffectChorus::set_voice_count)>("voice_count")
            .property<static_cast<double(AudioEffectChorus::*)()const>(&AudioEffectChorus::get_dry),static_cast<void(AudioEffectChorus::*)(double)>(&AudioEffectChorus::set_dry)>("dry")
            .property<static_cast<double(AudioEffectChorus::*)()const>(&AudioEffectChorus::get_wet),static_cast<void(AudioEffectChorus::*)(double)>(&AudioEffectChorus::set_wet)>("wet")
            .fun<static_cast<void(AudioEffectChorus::*)(int32_t,double)>(&AudioEffectChorus::set_voice_delay_ms)>("set_voice_delay_ms")
            .fun<static_cast<double(AudioEffectChorus::*)(int32_t)const>(&AudioEffectChorus::get_voice_delay_ms)>("get_voice_delay_ms")
            .fun<static_cast<void(AudioEffectChorus::*)(int32_t,double)>(&AudioEffectChorus::set_voice_rate_hz)>("set_voice_rate_hz")
            .fun<static_cast<double(AudioEffectChorus::*)(int32_t)const>(&AudioEffectChorus::get_voice_rate_hz)>("get_voice_rate_hz")
            .fun<static_cast<void(AudioEffectChorus::*)(int32_t,double)>(&AudioEffectChorus::set_voice_depth_ms)>("set_voice_depth_ms")
            .fun<static_cast<double(AudioEffectChorus::*)(int32_t)const>(&AudioEffectChorus::get_voice_depth_ms)>("get_voice_depth_ms")
            .fun<static_cast<void(AudioEffectChorus::*)(int32_t,double)>(&AudioEffectChorus::set_voice_level_db)>("set_voice_level_db")
            .fun<static_cast<double(AudioEffectChorus::*)(int32_t)const>(&AudioEffectChorus::get_voice_level_db)>("get_voice_level_db")
            .fun<static_cast<void(AudioEffectChorus::*)(int32_t,double)>(&AudioEffectChorus::set_voice_cutoff_hz)>("set_voice_cutoff_hz")
            .fun<static_cast<double(AudioEffectChorus::*)(int32_t)const>(&AudioEffectChorus::get_voice_cutoff_hz)>("get_voice_cutoff_hz")
            .fun<static_cast<void(AudioEffectChorus::*)(int32_t,double)>(&AudioEffectChorus::set_voice_pan)>("set_voice_pan")
            .fun<static_cast<double(AudioEffectChorus::*)(int32_t)const>(&AudioEffectChorus::get_voice_pan)>("get_voice_pan")
;}