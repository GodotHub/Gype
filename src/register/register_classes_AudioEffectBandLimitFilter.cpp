#include <godot_cpp/classes/audio_effect_band_limit_filter.hpp>
#include <godot_cpp/classes/audio_effect_filter.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectBandLimitFilter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectBandLimitFilter>("AudioEffectBandLimitFilter")
            .constructor<>()
            .base<AudioEffectFilter>()
;}