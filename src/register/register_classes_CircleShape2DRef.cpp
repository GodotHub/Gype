#include "register/register_classes.h"
#include <godot_cpp/classes/circle_shape2d.hpp>

using namespace godot;

void register_classes_CircleShape2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CircleShape2D>>("CircleShape2DRef").constructor<CircleShape2D *>();
}