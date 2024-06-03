#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_high_shelf_filter.hpp>

using namespace godot;

void register_classes_AudioEffectHighShelfFilter() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectHighShelfFilter>("AudioEffectHighShelfFilter")
           .constructor<>()
;}