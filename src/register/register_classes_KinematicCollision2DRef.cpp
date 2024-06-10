#include "register/register_classes.h"
#include <godot_cpp/classes/kinematic_collision2d.hpp>

using namespace godot;

void register_classes_KinematicCollision2DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<KinematicCollision2D>>("KinematicCollision2DRef").constructor<KinematicCollision2D *>();
}