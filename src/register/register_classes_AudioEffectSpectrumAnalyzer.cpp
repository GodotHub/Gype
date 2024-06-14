#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_spectrum_analyzer.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectSpectrumAnalyzer() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectSpectrumAnalyzer>("AudioEffectSpectrumAnalyzer")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectSpectrumAnalyzer::*)() const>(&AudioEffectSpectrumAnalyzer::get_buffer_length), static_cast<void (AudioEffectSpectrumAnalyzer::*)(double)>(&AudioEffectSpectrumAnalyzer::set_buffer_length)>((new std::string("buffer_length"))->c_str())
			.property<static_cast<double (AudioEffectSpectrumAnalyzer::*)() const>(&AudioEffectSpectrumAnalyzer::get_tap_back_pos), static_cast<void (AudioEffectSpectrumAnalyzer::*)(double)>(&AudioEffectSpectrumAnalyzer::set_tap_back_pos)>((new std::string("tap_back_pos"))->c_str())
			.property<static_cast<AudioEffectSpectrumAnalyzer::FFTSize (AudioEffectSpectrumAnalyzer::*)() const>(&AudioEffectSpectrumAnalyzer::get_fft_size), static_cast<void (AudioEffectSpectrumAnalyzer::*)(AudioEffectSpectrumAnalyzer::FFTSize)>(&AudioEffectSpectrumAnalyzer::set_fft_size)>((new std::string("fft_size"))->c_str());
	qjs::Value _FFTSize = context->newObject();
	_FFTSize[(new std::string("FFT_SIZE_256"))->c_str()] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_256;
	_FFTSize[(new std::string("FFT_SIZE_512"))->c_str()] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_512;
	_FFTSize[(new std::string("FFT_SIZE_1024"))->c_str()] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_1024;
	_FFTSize[(new std::string("FFT_SIZE_2048"))->c_str()] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_2048;
	_FFTSize[(new std::string("FFT_SIZE_4096"))->c_str()] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_4096;
	_FFTSize[(new std::string("FFT_SIZE_MAX"))->c_str()] = AudioEffectSpectrumAnalyzer::FFTSize::FFT_SIZE_MAX;
	_module.add("FFTSize", std::move(_FFTSize));
}