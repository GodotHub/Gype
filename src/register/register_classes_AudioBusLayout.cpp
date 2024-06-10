#include <godot_cpp/classes/audio_bus_layout.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_AudioBusLayout() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<AudioBusLayout>("AudioBusLayout")
			.constructor<>();
}