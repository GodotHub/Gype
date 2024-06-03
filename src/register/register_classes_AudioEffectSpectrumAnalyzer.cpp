#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/audio_effect_spectrum_analyzer.hpp>

using namespace godot;

void register_classes_AudioEffectSpectrumAnalyzer() {
    qjs::Context::Module &_module = _General;
    _module.class_<AudioEffectSpectrumAnalyzer>("AudioEffectSpectrumAnalyzer")
           .constructor<>()
           .property<AudioEffectSpectrumAnalyzer::get_buffer_length, AudioEffectSpectrumAnalyzer::set_buffer_length>("buffer_length")
           .property<AudioEffectSpectrumAnalyzer::get_tap_back_pos, AudioEffectSpectrumAnalyzer::set_tap_back_pos>("tap_back_pos")
           .property<AudioEffectSpectrumAnalyzer::get_fft_size, AudioEffectSpectrumAnalyzer::set_fft_size>("fft_size")
;}