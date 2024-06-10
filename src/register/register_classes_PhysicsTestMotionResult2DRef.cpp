#include "register/register_classes.h"
#include <godot_cpp/classes/physics_test_motion_result2d.hpp>

using namespace godot;

void register_classes_PhysicsTestMotionResult2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicsTestMotionResult2D>>("PhysicsTestMotionResult2DRef").constructor<PhysicsTestMotionResult2D *>();
}