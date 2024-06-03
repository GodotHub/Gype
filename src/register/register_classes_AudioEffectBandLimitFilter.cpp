#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_band_limit_filter.hpp>

using namespace godot;

void register_classes_AudioEffectBandLimitFilter() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectBandLimitFilter>("AudioEffectBandLimitFilter")
           .constructor<>()
;}