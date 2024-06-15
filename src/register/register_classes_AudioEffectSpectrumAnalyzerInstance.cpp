#include <godot_cpp/classes/audio_effect_spectrum_analyzer_instance.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_AudioEffectSpectrumAnalyzerInstance() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<AudioEffectSpectrumAnalyzerInstance>("AudioEffectSpectrumAnalyzerInstance")
            .constructor<>()
            .base<AudioEffectInstance>()
            .fun<static_cast<Vector2(AudioEffectSpectrumAnalyzerInstance::*)(double,double,AudioEffectSpectrumAnalyzerInstance::MagnitudeMode)const>(&AudioEffectSpectrumAnalyzerInstance::get_magnitude_for_frequency_range)>("get_magnitude_for_frequency_range")
;    qjs::Value _MagnitudeMode = context->newObject();
    _MagnitudeMode["MAGNITUDE_AVERAGE"] = AudioEffectSpectrumAnalyzerInstance::MagnitudeMode::MAGNITUDE_AVERAGE;
    _MagnitudeMode["MAGNITUDE_MAX"] = AudioEffectSpectrumAnalyzerInstance::MagnitudeMode::MAGNITUDE_MAX;
    _module.add("MagnitudeMode", std::move(_MagnitudeMode));
}