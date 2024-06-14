#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/audio_effect_spectrum_analyzer_instance.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectSpectrumAnalyzerInstance() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectSpectrumAnalyzerInstance>("AudioEffectSpectrumAnalyzerInstance")
			.constructor<>()
			.base<AudioEffectInstance>()
			.fun<static_cast<Vector2 (AudioEffectSpectrumAnalyzerInstance::*)(double, double, AudioEffectSpectrumAnalyzerInstance::MagnitudeMode) const>(&AudioEffectSpectrumAnalyzerInstance::get_magnitude_for_frequency_range)>((new std::string("get_magnitude_for_frequency_range"))->c_str());
	qjs::Value _MagnitudeMode = context->newObject();
	_MagnitudeMode[(new std::string("MAGNITUDE_AVERAGE"))->c_str()] = AudioEffectSpectrumAnalyzerInstance::MagnitudeMode::MAGNITUDE_AVERAGE;
	_MagnitudeMode[(new std::string("MAGNITUDE_MAX"))->c_str()] = AudioEffectSpectrumAnalyzerInstance::MagnitudeMode::MAGNITUDE_MAX;
	_module.add("MagnitudeMode", std::move(_MagnitudeMode));
}