#include <godot_cpp/classes/audio_effect_high_pass_filter.hpp>
#include <godot_cpp/classes/audio_effect_filter.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectHighPassFilter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectHighPassFilter>("AudioEffectHighPassFilter")
            .constructor<>()
            .base<AudioEffectFilter>()
;}