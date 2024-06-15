#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/resource.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffect() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffect>("AudioEffect")
            .constructor<>()
            .base<Resource>()
            .fun<static_cast<Ref<AudioEffectInstance>(AudioEffect::*)()>(&AudioEffect::_instantiate)>("_instantiate")
;}