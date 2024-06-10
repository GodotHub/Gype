#include "register/register_classes.h"
#include <godot_cpp/classes/audio_stream_polyphonic.hpp>

using namespace godot;

void register_classes_AudioStreamPolyphonicRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioStreamPolyphonic>>("AudioStreamPolyphonicRef").constructor<AudioStreamPolyphonic *>();
}