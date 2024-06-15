#include <godot_cpp/classes/audio_effect_distortion.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectDistortion() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectDistortion>("AudioEffectDistortion")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<AudioEffectDistortion::Mode(AudioEffectDistortion::*)()const>(&AudioEffectDistortion::get_mode),static_cast<void(AudioEffectDistortion::*)(AudioEffectDistortion::Mode)>(&AudioEffectDistortion::set_mode)>("mode")
            .property<static_cast<double(AudioEffectDistortion::*)()const>(&AudioEffectDistortion::get_pre_gain),static_cast<void(AudioEffectDistortion::*)(double)>(&AudioEffectDistortion::set_pre_gain)>("pre_gain")
            .property<static_cast<double(AudioEffectDistortion::*)()const>(&AudioEffectDistortion::get_keep_hf_hz),static_cast<void(AudioEffectDistortion::*)(double)>(&AudioEffectDistortion::set_keep_hf_hz)>("keep_hf_hz")
            .property<static_cast<double(AudioEffectDistortion::*)()const>(&AudioEffectDistortion::get_drive),static_cast<void(AudioEffectDistortion::*)(double)>(&AudioEffectDistortion::set_drive)>("drive")
            .property<static_cast<double(AudioEffectDistortion::*)()const>(&AudioEffectDistortion::get_post_gain),static_cast<void(AudioEffectDistortion::*)(double)>(&AudioEffectDistortion::set_post_gain)>("post_gain")
;    qjs::Value _Mode = context->newObject();
    _Mode["MODE_CLIP"] = AudioEffectDistortion::Mode::MODE_CLIP;
    _Mode["MODE_ATAN"] = AudioEffectDistortion::Mode::MODE_ATAN;
    _Mode["MODE_LOFI"] = AudioEffectDistortion::Mode::MODE_LOFI;
    _Mode["MODE_OVERDRIVE"] = AudioEffectDistortion::Mode::MODE_OVERDRIVE;
    _Mode["MODE_WAVESHAPE"] = AudioEffectDistortion::Mode::MODE_WAVESHAPE;
    _module.add("Mode", std::move(_Mode));
}