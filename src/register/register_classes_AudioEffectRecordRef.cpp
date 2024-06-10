#include "register/register_classes.h"
#include <godot_cpp/classes/audio_effect_record.hpp>

using namespace godot;

void register_classes_AudioEffectRecordRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioEffectRecord>>("AudioEffectRecordRef").constructor<AudioEffectRecord *>();
}