#include "register/register_classes.h"
#include <godot_cpp/classes/plane_mesh.hpp>

using namespace godot;

void register_classes_PlaneMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PlaneMesh>>("PlaneMeshRef").constructor<PlaneMesh *>();
}