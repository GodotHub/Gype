#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_eq.hpp>

using namespace godot;

void register_classes_AudioEffectEQRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectEQ>>("AudioEffectEQRef").constructor<AudioEffectEQ *>();
}