#include "register/register_classes.h"
#include <godot_cpp/classes/orm_material3d.hpp>

using namespace godot;

void register_classes_ORMMaterial3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ORMMaterial3D>>("ORMMaterial3DRef").constructor<ORMMaterial3D *>();
}