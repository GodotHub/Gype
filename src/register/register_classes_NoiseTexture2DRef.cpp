#include "register/register_classes.h"
#include <godot_cpp/classes/noise_texture2d.hpp>

using namespace godot;

void register_classes_NoiseTexture2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NoiseTexture2D>>("NoiseTexture2DRef").constructor<NoiseTexture2D *>();
}