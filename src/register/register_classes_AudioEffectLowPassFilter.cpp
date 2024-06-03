#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_low_pass_filter.hpp>

using namespace godot;

void register_classes_AudioEffectLowPassFilter() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectLowPassFilter>("AudioEffectLowPassFilter")
           .constructor<>()
;}