#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_eq6.hpp>

using namespace godot;

void register_classes_AudioEffectEQ6() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectEQ6>("AudioEffectEQ6")
           .constructor<>()
;}