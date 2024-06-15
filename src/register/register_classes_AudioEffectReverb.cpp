#include <godot_cpp/classes/audio_effect_reverb.hpp>
#include <godot_cpp/classes/audio_effect.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectReverb() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectReverb>("AudioEffectReverb")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<double(AudioEffectReverb::*)()const>(&AudioEffectReverb::get_predelay_msec),static_cast<void(AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_predelay_msec)>("predelay_msec")
            .property<static_cast<double(AudioEffectReverb::*)()const>(&AudioEffectReverb::get_predelay_feedback),static_cast<void(AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_predelay_feedback)>("predelay_feedback")
            .property<static_cast<double(AudioEffectReverb::*)()const>(&AudioEffectReverb::get_room_size),static_cast<void(AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_room_size)>("room_size")
            .property<static_cast<double(AudioEffectReverb::*)()const>(&AudioEffectReverb::get_damping),static_cast<void(AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_damping)>("damping")
            .property<static_cast<double(AudioEffectReverb::*)()const>(&AudioEffectReverb::get_spread),static_cast<void(AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_spread)>("spread")
            .property<static_cast<double(AudioEffectReverb::*)()const>(&AudioEffectReverb::get_hpf),static_cast<void(AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_hpf)>("hipass")
            .property<static_cast<double(AudioEffectReverb::*)()const>(&AudioEffectReverb::get_dry),static_cast<void(AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_dry)>("dry")
            .property<static_cast<double(AudioEffectReverb::*)()const>(&AudioEffectReverb::get_wet),static_cast<void(AudioEffectReverb::*)(double)>(&AudioEffectReverb::set_wet)>("wet")
;}