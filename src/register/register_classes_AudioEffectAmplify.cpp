#include <godot_cpp/classes/audio_effect_amplify.hpp>
#include <godot_cpp/classes/audio_effect.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectAmplify() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectAmplify>("AudioEffectAmplify")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<double(AudioEffectAmplify::*)()const>(&AudioEffectAmplify::get_volume_db),static_cast<void(AudioEffectAmplify::*)(double)>(&AudioEffectAmplify::set_volume_db)>("volume_db")
;}