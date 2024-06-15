#include <godot_cpp/classes/audio_effect_compressor.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectCompressor() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectCompressor>("AudioEffectCompressor")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<double(AudioEffectCompressor::*)()const>(&AudioEffectCompressor::get_threshold),static_cast<void(AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_threshold)>("threshold")
            .property<static_cast<double(AudioEffectCompressor::*)()const>(&AudioEffectCompressor::get_ratio),static_cast<void(AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_ratio)>("ratio")
            .property<static_cast<double(AudioEffectCompressor::*)()const>(&AudioEffectCompressor::get_gain),static_cast<void(AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_gain)>("gain")
            .property<static_cast<double(AudioEffectCompressor::*)()const>(&AudioEffectCompressor::get_attack_us),static_cast<void(AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_attack_us)>("attack_us")
            .property<static_cast<double(AudioEffectCompressor::*)()const>(&AudioEffectCompressor::get_release_ms),static_cast<void(AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_release_ms)>("release_ms")
            .property<static_cast<double(AudioEffectCompressor::*)()const>(&AudioEffectCompressor::get_mix),static_cast<void(AudioEffectCompressor::*)(double)>(&AudioEffectCompressor::set_mix)>("mix")
            .property<static_cast<StringName(AudioEffectCompressor::*)()const>(&AudioEffectCompressor::get_sidechain),static_cast<void(AudioEffectCompressor::*)(const StringName &)>(&AudioEffectCompressor::set_sidechain)>("sidechain")
;}