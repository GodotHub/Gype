#include <godot_cpp/classes/audio_effect_record.hpp>
#include <godot_cpp/classes/audio_stream_wav.hpp>
#include <godot_cpp/classes/ref.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioEffectRecord() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioEffectRecord>("AudioEffectRecord")
			.constructor<>()
			.property<&AudioEffectRecord::get_format, &AudioEffectRecord::set_format>("format")
			.fun<static_cast<void (AudioEffectRecord::*)(bool)>(&AudioEffectRecord::set_recording_active)>("set_recording_active")
			.fun<static_cast<bool (AudioEffectRecord::*)() const>(&AudioEffectRecord::is_recording_active)>("is_recording_active")
			.fun<static_cast<Ref<AudioStreamWAV> (AudioEffectRecord::*)() const>(&AudioEffectRecord::get_recording)>("get_recording");
}