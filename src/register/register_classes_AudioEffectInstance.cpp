
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/audio_frame.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectInstance() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectInstance>("AudioEffectInstance")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (AudioEffectInstance::*)(const void *, AudioFrame *, int32_t)>(&AudioEffectInstance::_process)>((new std::string("_process"))->c_str())
			.fun<static_cast<bool (AudioEffectInstance::*)() const>(&AudioEffectInstance::_process_silence)>((new std::string("_process_silence"))->c_str());
}