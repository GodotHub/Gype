#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_high_pass_filter.hpp>

using namespace godot;

void register_classes_AudioEffectHighPassFilter() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectHighPassFilter>("AudioEffectHighPassFilter")
           .constructor<>()
;}