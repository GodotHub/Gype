
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_pitch_shift.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectPitchShift() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectPitchShift>("AudioEffectPitchShift")
			.constructor<>()
			.base<AudioEffect>()
			.property<static_cast<double (AudioEffectPitchShift::*)() const>(&AudioEffectPitchShift::get_pitch_scale), static_cast<void (AudioEffectPitchShift::*)(double)>(&AudioEffectPitchShift::set_pitch_scale)>((new std::string("pitch_scale"))->c_str())
			.property<static_cast<int32_t (AudioEffectPitchShift::*)() const>(&AudioEffectPitchShift::get_oversampling), static_cast<void (AudioEffectPitchShift::*)(int32_t)>(&AudioEffectPitchShift::set_oversampling)>((new std::string("oversampling"))->c_str())
			.property<static_cast<AudioEffectPitchShift::FFTSize (AudioEffectPitchShift::*)() const>(&AudioEffectPitchShift::get_fft_size), static_cast<void (AudioEffectPitchShift::*)(AudioEffectPitchShift::FFTSize)>(&AudioEffectPitchShift::set_fft_size)>((new std::string("fft_size"))->c_str());
	qjs::Value _FFTSize = context->newObject();
	_FFTSize[(new std::string("FFT_SIZE_256"))->c_str()] = AudioEffectPitchShift::FFTSize::FFT_SIZE_256;
	_FFTSize[(new std::string("FFT_SIZE_512"))->c_str()] = AudioEffectPitchShift::FFTSize::FFT_SIZE_512;
	_FFTSize[(new std::string("FFT_SIZE_1024"))->c_str()] = AudioEffectPitchShift::FFTSize::FFT_SIZE_1024;
	_FFTSize[(new std::string("FFT_SIZE_2048"))->c_str()] = AudioEffectPitchShift::FFTSize::FFT_SIZE_2048;
	_FFTSize[(new std::string("FFT_SIZE_4096"))->c_str()] = AudioEffectPitchShift::FFTSize::FFT_SIZE_4096;
	_FFTSize[(new std::string("FFT_SIZE_MAX"))->c_str()] = AudioEffectPitchShift::FFTSize::FFT_SIZE_MAX;
	_module.add("FFTSize", std::move(_FFTSize));
}