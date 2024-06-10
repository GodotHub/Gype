#include "register/register_classes.h"
#include <godot_cpp/classes/box_shape3d.hpp>

using namespace godot;

void register_classes_BoxShape3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<BoxShape3D>>("BoxShape3DRef").constructor<BoxShape3D *>();
}