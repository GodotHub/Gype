#include "register/register_classes.h"
#include <godot_cpp/classes/capsule_shape3d.hpp>

using namespace godot;

void register_classes_CapsuleShape3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CapsuleShape3D>>("CapsuleShape3DRef").constructor<CapsuleShape3D *>();
}