#include <godot_cpp/classes/audio_effect_eq21.hpp>
#include <godot_cpp/classes/audio_effect_eq.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectEQ21() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectEQ21>("AudioEffectEQ21")
            .constructor<>()
            .base<AudioEffectEQ>()
;}