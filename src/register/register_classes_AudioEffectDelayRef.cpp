#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_delay.hpp>

using namespace godot;

void register_classes_AudioEffectDelayRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectDelay>>("AudioEffectDelayRef").constructor<AudioEffectDelay *>();
}