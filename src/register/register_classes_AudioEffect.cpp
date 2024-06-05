#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/ref.hpp>


#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_AudioEffect() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffect>("AudioEffect")
			.constructor<>()
			.fun<static_cast<Ref<AudioEffectInstance> (AudioEffect::*)()>(&AudioEffect::_instantiate)>("_instantiate");
}