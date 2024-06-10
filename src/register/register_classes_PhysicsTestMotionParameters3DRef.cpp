#include "register/register_classes.h"
#include <godot_cpp/classes/physics_test_motion_parameters3d.hpp>

using namespace godot;

void register_classes_PhysicsTestMotionParameters3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsTestMotionParameters3D>>("PhysicsTestMotionParameters3DRef").constructor<PhysicsTestMotionParameters3D *>();
}