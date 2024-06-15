#include <godot_cpp/classes/audio_effect_eq.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectEQ() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectEQ>("AudioEffectEQ")
            .constructor<>()
            .base<AudioEffect>()
            .fun<static_cast<void(AudioEffectEQ::*)(int32_t,double)>(&AudioEffectEQ::set_band_gain_db)>("set_band_gain_db")
            .fun<static_cast<double(AudioEffectEQ::*)(int32_t)const>(&AudioEffectEQ::get_band_gain_db)>("get_band_gain_db")
            .fun<static_cast<int32_t(AudioEffectEQ::*)()const>(&AudioEffectEQ::get_band_count)>("get_band_count")
;}