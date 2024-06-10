#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_amplify.hpp>

using namespace godot;

void register_classes_AudioEffectAmplifyRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectAmplify>>("AudioEffectAmplifyRef").constructor<AudioEffectAmplify *>();
}