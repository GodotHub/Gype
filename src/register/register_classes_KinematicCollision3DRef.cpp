#include "register/register_classes.h"
#include <godot_cpp/classes/kinematic_collision3d.hpp>

using namespace godot;

void register_classes_KinematicCollision3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<KinematicCollision3D>>("KinematicCollision3DRef").constructor<KinematicCollision3D *>();
}