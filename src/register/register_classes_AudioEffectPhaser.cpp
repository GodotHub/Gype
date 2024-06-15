#include <godot_cpp/classes/audio_effect_phaser.hpp>
#include <godot_cpp/classes/audio_effect.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectPhaser() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectPhaser>("AudioEffectPhaser")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<double(AudioEffectPhaser::*)()const>(&AudioEffectPhaser::get_range_min_hz),static_cast<void(AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_range_min_hz)>("range_min_hz")
            .property<static_cast<double(AudioEffectPhaser::*)()const>(&AudioEffectPhaser::get_range_max_hz),static_cast<void(AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_range_max_hz)>("range_max_hz")
            .property<static_cast<double(AudioEffectPhaser::*)()const>(&AudioEffectPhaser::get_rate_hz),static_cast<void(AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_rate_hz)>("rate_hz")
            .property<static_cast<double(AudioEffectPhaser::*)()const>(&AudioEffectPhaser::get_feedback),static_cast<void(AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_feedback)>("feedback")
            .property<static_cast<double(AudioEffectPhaser::*)()const>(&AudioEffectPhaser::get_depth),static_cast<void(AudioEffectPhaser::*)(double)>(&AudioEffectPhaser::set_depth)>("depth")
;}