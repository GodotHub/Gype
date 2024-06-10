#include "register/register_classes.h"
#include <godot_cpp/classes/gradient_texture1d.hpp>

using namespace godot;

void register_classes_GradientTexture1DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GradientTexture1D>>("GradientTexture1DRef").constructor<GradientTexture1D *>();
}