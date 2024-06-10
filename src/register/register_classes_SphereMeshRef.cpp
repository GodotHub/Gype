#include "register/register_classes.h"
#include <godot_cpp/classes/sphere_mesh.hpp>

using namespace godot;

void register_classes_SphereMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SphereMesh>>("SphereMeshRef").constructor<SphereMesh *>();
}