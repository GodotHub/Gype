#include "register/register_classes.h"
#include <godot_cpp/classes/noise.hpp>

using namespace godot;

void register_classes_NoiseRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Noise>>("NoiseRef").constructor<Noise *>();
}