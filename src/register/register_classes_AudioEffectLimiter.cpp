#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_limiter.hpp>

using namespace godot;

void register_classes_AudioEffectLimiter() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectLimiter>("AudioEffectLimiter")
           .constructor<>()
           .property<AudioEffectLimiter::get_ceiling_db, AudioEffectLimiter::set_ceiling_db>("ceiling_db")
           .property<AudioEffectLimiter::get_threshold_db, AudioEffectLimiter::set_threshold_db>("threshold_db")
           .property<AudioEffectLimiter::get_soft_clip_db, AudioEffectLimiter::set_soft_clip_db>("soft_clip_db")
           .property<AudioEffectLimiter::get_soft_clip_ratio, AudioEffectLimiter::set_soft_clip_ratio>("soft_clip_ratio")
;}