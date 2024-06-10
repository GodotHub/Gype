#include "register/register_classes.h"
#include <godot_cpp/classes/gradient_texture2d.hpp>

using namespace godot;

void register_classes_GradientTexture2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<GradientTexture2D>>("GradientTexture2DRef").constructor<GradientTexture2D *>();
}