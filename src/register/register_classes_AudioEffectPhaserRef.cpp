#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_phaser.hpp>

using namespace godot;

void register_classes_AudioEffectPhaserRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectPhaser>>("AudioEffectPhaserRef").constructor<AudioEffectPhaser *>();
}