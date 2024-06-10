#include "register/register_classes.h"
#include <godot_cpp/classes/a_star3d.hpp>

using namespace godot;

void register_classes_AStar3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<AStar3D>>("AStar3DRef").constructor<AStar3D *>();
}