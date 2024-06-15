#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/audio_frame.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectInstance() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectInstance>("AudioEffectInstance")
            .constructor<>()
            .base<RefCounted>()
            .fun<static_cast<void(AudioEffectInstance::*)(const void*,AudioFrame*,int32_t)>(&AudioEffectInstance::_process)>("_process")
            .fun<static_cast<bool(AudioEffectInstance::*)()const>(&AudioEffectInstance::_process_silence)>("_process_silence")
;}