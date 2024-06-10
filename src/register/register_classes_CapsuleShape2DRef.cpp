#include "register/register_classes.h"
#include <godot_cpp/classes/capsule_shape2d.hpp>

using namespace godot;

void register_classes_CapsuleShape2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CapsuleShape2D>>("CapsuleShape2DRef").constructor<CapsuleShape2D *>();
}