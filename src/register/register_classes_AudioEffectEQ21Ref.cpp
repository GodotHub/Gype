#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_eq21.hpp>

using namespace godot;

void register_classes_AudioEffectEQ21Ref() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectEQ21>>("AudioEffectEQ21Ref").constructor<AudioEffectEQ21 *>();
}