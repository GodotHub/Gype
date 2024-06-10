#include "register/register_classes.h"
#include <godot_cpp/classes/point_mesh.hpp>

using namespace godot;

void register_classes_PointMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PointMesh>>("PointMeshRef").constructor<PointMesh *>();
}