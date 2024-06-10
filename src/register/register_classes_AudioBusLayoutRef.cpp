#include "register/register_classes.h"
#include <godot_cpp/classes/audio_bus_layout.hpp>

using namespace godot;

void register_classes_AudioBusLayoutRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AudioBusLayout>>("AudioBusLayoutRef").constructor<AudioBusLayout *>();
}