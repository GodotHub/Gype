#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_panner.hpp>

using namespace godot;

void register_classes_AudioEffectPanner() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectPanner>("AudioEffectPanner")
           .constructor<>()
           .property<AudioEffectPanner::get_pan, AudioEffectPanner::set_pan>("pan")
;}