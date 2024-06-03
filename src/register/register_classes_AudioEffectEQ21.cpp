#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_eq21.hpp>

using namespace godot;

void register_classes_AudioEffectEQ21() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectEQ21>("AudioEffectEQ21")
           .constructor<>()
;}