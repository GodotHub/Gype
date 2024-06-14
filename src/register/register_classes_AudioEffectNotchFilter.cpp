#include <godot_cpp/classes/audio_effect_notch_filter.hpp>
#include <godot_cpp/classes/audio_effect_filter.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectNotchFilter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectNotchFilter>("AudioEffectNotchFilter")
            .constructor<>()
            .base<AudioEffectFilter>()
;}