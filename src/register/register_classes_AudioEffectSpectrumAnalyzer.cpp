#include <godot_cpp/classes/audio_effect_spectrum_analyzer.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectSpectrumAnalyzer() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectSpectrumAnalyzer>("AudioEffectSpectrumAnalyzer")
            .constructor<>()
            .base<AudioEffect>()
            .property<static_cast<double(AudioEffectSpectrumAnalyzer::*)()const>(&AudioEffectSpectrumAnalyzer::get_buffer_length),static_cast<void(AudioEffectSpectrumAnalyzer::*)(double)>(&AudioEffectSpectrumAnalyzer::set_buffer_length)>("buffer_length")
            .property<static_cast<double(AudioEffectSpectrumAnalyzer::*)()const>(&AudioEffectSpectrumAnalyzer::get_tap_back_pos),static_cast<void(AudioEffectSpectrumAnalyzer::*)(double)>(&AudioEffectSpectrumAnalyzer::set_tap_back_pos)>("tap_back_pos")
            .property<static_cast<AudioEffectSpectrumAnalyzer::FFTSize(AudioEffectSpectrumAnalyzer::*)()const>(&AudioEffectSpectrumAnalyzer::get_fft_size),static_cast<void(AudioEffectSpectrumAnalyzer::*)(AudioEffectSpectrumAnalyzer::FFTSize)>(&AudioEffectSpectrumAnalyzer::set_fft_size)>("fft_size")
;    qjs::Value _FFTSize = context->newObject();
    _FFTSize["FFT_SIZE_256"] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_256;
    _FFTSize["FFT_SIZE_512"] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_512;
    _FFTSize["FFT_SIZE_1024"] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_1024;
    _FFTSize["FFT_SIZE_2048"] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_2048;
    _FFTSize["FFT_SIZE_4096"] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_4096;
    _FFTSize["FFT_SIZE_MAX"] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_MAX;
    _module.add("FFTSize", std::move(_FFTSize));
}