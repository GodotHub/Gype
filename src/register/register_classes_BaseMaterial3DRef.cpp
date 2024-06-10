#include "register/register_classes.h"
#include <godot_cpp/classes/base_material3d.hpp>

using namespace godot;

void register_classes_BaseMaterial3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<BaseMaterial3D>>("BaseMaterial3DRef").constructor<BaseMaterial3D *>();
}