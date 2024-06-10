#include "register/register_classes.h"
#include <godot_cpp/classes/shape2d.hpp>

using namespace godot;

void register_classes_Shape2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Shape2D>>("Shape2DRef").constructor<Shape2D *>();
}