#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_distortion.hpp>

using namespace godot;

void register_classes_AudioEffectDistortion() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectDistortion>("AudioEffectDistortion")
           .constructor<>()
           .property<AudioEffectDistortion::get_mode, AudioEffectDistortion::set_mode>("mode")
           .property<AudioEffectDistortion::get_pre_gain, AudioEffectDistortion::set_pre_gain>("pre_gain")
           .property<AudioEffectDistortion::get_keep_hf_hz, AudioEffectDistortion::set_keep_hf_hz>("keep_hf_hz")
           .property<AudioEffectDistortion::get_drive, AudioEffectDistortion::set_drive>("drive")
           .property<AudioEffectDistortion::get_post_gain, AudioEffectDistortion::set_post_gain>("post_gain")
;}