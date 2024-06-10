#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_spectrum_analyzer.hpp>

using namespace godot;

void register_classes_AudioEffectSpectrumAnalyzerRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectSpectrumAnalyzer>>("AudioEffectSpectrumAnalyzerRef").constructor<AudioEffectSpectrumAnalyzer *>();
}