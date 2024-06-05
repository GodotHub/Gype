#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/audio_frame.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectInstance() {
	qjs::Context::Module &_module = _General;
	_module.class_<AudioEffectInstance>("AudioEffectInstance")
			.constructor<>()
			.fun<static_cast<void (AudioEffectInstance::*)(const void *, AudioFrame *, int32_t)>(&AudioEffectInstance::_process)>("_process")
			.fun<static_cast<bool (AudioEffectInstance::*)() const>(&AudioEffectInstance::_process_silence)>("_process_silence");
}