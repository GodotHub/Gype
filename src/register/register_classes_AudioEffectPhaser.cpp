#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_phaser.hpp>

using namespace godot;

void register_classes_AudioEffectPhaser() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectPhaser>("AudioEffectPhaser")
           .constructor<>()
           .property<AudioEffectPhaser::get_range_min_hz, AudioEffectPhaser::set_range_min_hz>("range_min_hz")
           .property<AudioEffectPhaser::get_range_max_hz, AudioEffectPhaser::set_range_max_hz>("range_max_hz")
           .property<AudioEffectPhaser::get_rate_hz, AudioEffectPhaser::set_rate_hz>("rate_hz")
           .property<AudioEffectPhaser::get_feedback, AudioEffectPhaser::set_feedback>("feedback")
           .property<AudioEffectPhaser::get_depth, AudioEffectPhaser::set_depth>("depth")
;}