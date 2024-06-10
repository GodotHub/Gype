#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_eq10.hpp>

using namespace godot;

void register_classes_AudioEffectEQ10Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectEQ10>>("AudioEffectEQ10Ref").constructor<AudioEffectEQ10 *>();
}