#include "register/register_classes.h"
#include <godot_cpp/classes/cylinder_mesh.hpp>

using namespace godot;

void register_classes_CylinderMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CylinderMesh>>("CylinderMeshRef").constructor<CylinderMesh *>();
}