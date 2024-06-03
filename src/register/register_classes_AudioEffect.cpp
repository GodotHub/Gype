#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect.hpp>

using namespace godot;

void register_classes_AudioEffect() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffect>("AudioEffect")
           .constructor<>()
		    .fun<static_cast<Ref<AudioEffectInstance>(AudioEffect::*)()>(&AudioEffect::_instantiate)>("_instantiate")
;}