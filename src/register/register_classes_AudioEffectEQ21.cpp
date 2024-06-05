#include <godot_cpp/classes/audio_effect_eq21.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioEffectEQ21() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectEQ21>("AudioEffectEQ21")
			.constructor<>();
}