#include "register/register_classes.h"
#include <godot_cpp/classes/rectangle_shape2d.hpp>

using namespace godot;

void register_classes_RectangleShape2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RectangleShape2D>>("RectangleShape2DRef").constructor<RectangleShape2D *>();
}