#include "register/register_classes.h"
#include <godot_cpp/classes/noise_texture3d.hpp>

using namespace godot;

void register_classes_NoiseTexture3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NoiseTexture3D>>("NoiseTexture3DRef").constructor<NoiseTexture3D *>();
}