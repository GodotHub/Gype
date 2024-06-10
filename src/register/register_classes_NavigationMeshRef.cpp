#include "register/register_classes.h"
#include <godot_cpp/classes/navigation_mesh.hpp>

using namespace godot;

void register_classes_NavigationMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<NavigationMesh>>("NavigationMeshRef").constructor<NavigationMesh *>();
}