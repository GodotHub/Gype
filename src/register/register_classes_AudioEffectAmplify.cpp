#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_amplify.hpp>

using namespace godot;

void register_classes_AudioEffectAmplify() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectAmplify>("AudioEffectAmplify")
           .constructor<>()
           .property<AudioEffectAmplify::get_volume_db, AudioEffectAmplify::set_volume_db>("volume_db")
;}