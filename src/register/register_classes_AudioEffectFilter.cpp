#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_filter.hpp>

using namespace godot;

void register_classes_AudioEffectFilter() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectFilter>("AudioEffectFilter")
           .constructor<>()
           .property<AudioEffectFilter::get_cutoff, AudioEffectFilter::set_cutoff>("cutoff_hz")
           .property<AudioEffectFilter::get_resonance, AudioEffectFilter::set_resonance>("resonance")
           .property<AudioEffectFilter::get_gain, AudioEffectFilter::set_gain>("gain")
           .property<AudioEffectFilter::get_db, AudioEffectFilter::set_db>("db")
;}