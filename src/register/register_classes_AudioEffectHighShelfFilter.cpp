#include <godot_cpp/classes/audio_effect_high_shelf_filter.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioEffectHighShelfFilter() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectHighShelfFilter>("AudioEffectHighShelfFilter")
			.constructor<>();
}