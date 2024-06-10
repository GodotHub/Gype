#include "register/register_classes.h"
#include <godot_cpp/classes/physics_material.hpp>

using namespace godot;

void register_classes_PhysicsMaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsMaterial>>("PhysicsMaterialRef").constructor<PhysicsMaterial *>();
}