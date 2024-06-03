#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_pitch_shift.hpp>

using namespace godot;

void register_classes_AudioEffectPitchShift() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectPitchShift>("AudioEffectPitchShift")
           .constructor<>()
           .property<AudioEffectPitchShift::get_pitch_scale, AudioEffectPitchShift::set_pitch_scale>("pitch_scale")
           .property<AudioEffectPitchShift::get_oversampling, AudioEffectPitchShift::set_oversampling>("oversampling")
           .property<AudioEffectPitchShift::get_fft_size, AudioEffectPitchShift::set_fft_size>("fft_size")
;}