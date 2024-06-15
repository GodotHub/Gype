#include <godot_cpp/classes/audio_effect_pitch_shift.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectPitchShift() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectPitchShift>("AudioEffectPitchShift")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<double(AudioEffectPitchShift::*)()const>(&AudioEffectPitchShift::get_pitch_scale),static_cast<void(AudioEffectPitchShift::*)(double)>(&AudioEffectPitchShift::set_pitch_scale)>("pitch_scale")
            .property<static_cast<int32_t(AudioEffectPitchShift::*)()const>(&AudioEffectPitchShift::get_oversampling),static_cast<void(AudioEffectPitchShift::*)(int32_t)>(&AudioEffectPitchShift::set_oversampling)>("oversampling")
            .property<static_cast<AudioEffectPitchShift::FFTSize(AudioEffectPitchShift::*)()const>(&AudioEffectPitchShift::get_fft_size),static_cast<void(AudioEffectPitchShift::*)(AudioEffectPitchShift::FFTSize)>(&AudioEffectPitchShift::set_fft_size)>("fft_size")
;    qjs::Value _FFTSize = context->newObject();
    _FFTSize["FFT_SIZE_256"] = AudioEffectPitchShift::FFTSize::FFT_SIZE_256;
    _FFTSize["FFT_SIZE_512"] = AudioEffectPitchShift::FFTSize::FFT_SIZE_512;
    _FFTSize["FFT_SIZE_1024"] = AudioEffectPitchShift::FFTSize::FFT_SIZE_1024;
    _FFTSize["FFT_SIZE_2048"] = AudioEffectPitchShift::FFTSize::FFT_SIZE_2048;
    _FFTSize["FFT_SIZE_4096"] = AudioEffectPitchShift::FFTSize::FFT_SIZE_4096;
    _FFTSize["FFT_SIZE_MAX"] = AudioEffectPitchShift::FFTSize::FFT_SIZE_MAX;
    _module.add("FFTSize", std::move(_FFTSize));
}