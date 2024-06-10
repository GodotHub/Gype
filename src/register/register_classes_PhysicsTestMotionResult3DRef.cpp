#include "register/register_classes.h"
#include <godot_cpp/classes/physics_test_motion_result3d.hpp>

using namespace godot;

void register_classes_PhysicsTestMotionResult3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsTestMotionResult3D>>("PhysicsTestMotionResult3DRef").constructor<PhysicsTestMotionResult3D *>();
}