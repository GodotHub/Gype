#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_pitch_shift.hpp>

using namespace godot;

void register_classes_AudioEffectPitchShiftRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectPitchShift>>("AudioEffectPitchShiftRef").constructor<AudioEffectPitchShift *>();
}