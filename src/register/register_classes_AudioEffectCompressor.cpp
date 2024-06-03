#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_compressor.hpp>

using namespace godot;

void register_classes_AudioEffectCompressor() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectCompressor>("AudioEffectCompressor")
           .constructor<>()
           .property<AudioEffectCompressor::get_threshold, AudioEffectCompressor::set_threshold>("threshold")
           .property<AudioEffectCompressor::get_ratio, AudioEffectCompressor::set_ratio>("ratio")
           .property<AudioEffectCompressor::get_gain, AudioEffectCompressor::set_gain>("gain")
           .property<AudioEffectCompressor::get_attack_us, AudioEffectCompressor::set_attack_us>("attack_us")
           .property<AudioEffectCompressor::get_release_ms, AudioEffectCompressor::set_release_ms>("release_ms")
           .property<AudioEffectCompressor::get_mix, AudioEffectCompressor::set_mix>("mix")
           .property<AudioEffectCompressor::get_sidechain, AudioEffectCompressor::set_sidechain>("sidechain")
;}