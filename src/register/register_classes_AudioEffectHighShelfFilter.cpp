#include <godot_cpp/classes/audio_effect_high_shelf_filter.hpp>
#include <godot_cpp/classes/audio_effect_filter.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectHighShelfFilter() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectHighShelfFilter>("AudioEffectHighShelfFilter")
            .constructor<>()
            .base<AudioEffectFilter>()
;}