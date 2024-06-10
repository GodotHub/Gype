#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_eq6.hpp>

using namespace godot;

void register_classes_AudioEffectEQ6Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectEQ6>>("AudioEffectEQ6Ref").constructor<AudioEffectEQ6 *>();
}