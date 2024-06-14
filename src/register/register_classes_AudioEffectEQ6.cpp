#include <godot_cpp/classes/audio_effect_eq6.hpp>
#include <godot_cpp/classes/audio_effect_eq.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectEQ6() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectEQ6>("AudioEffectEQ6")
            .constructor<>()
            .base<AudioEffectEQ>()
;}