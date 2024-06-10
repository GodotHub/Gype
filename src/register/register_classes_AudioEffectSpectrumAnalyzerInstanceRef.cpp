#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_spectrum_analyzer_instance.hpp>

using namespace godot;

void register_classes_AudioEffectSpectrumAnalyzerInstanceRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectSpectrumAnalyzerInstance>>("AudioEffectSpectrumAnalyzerInstanceRef").constructor<AudioEffectSpectrumAnalyzerInstance *>();
}