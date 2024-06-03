#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_low_shelf_filter.hpp>

using namespace godot;

void register_classes_AudioEffectLowShelfFilter() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectLowShelfFilter>("AudioEffectLowShelfFilter")
           .constructor<>()
;}