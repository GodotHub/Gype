#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffect() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffect>("AudioEffect")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<Ref<AudioEffectInstance> (AudioEffect::*)()>(&AudioEffect::_instantiate)>((new std::string("_instantiate"))->c_str());
}