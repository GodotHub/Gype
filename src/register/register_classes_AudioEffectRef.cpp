#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect.hpp>

using namespace godot;

void register_classes_AudioEffectRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffect>>("AudioEffectRef").constructor<AudioEffect *>();
}