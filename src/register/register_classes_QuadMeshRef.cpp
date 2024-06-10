#include "register/register_classes.h"
#include <godot_cpp/classes/quad_mesh.hpp>

using namespace godot;

void register_classes_QuadMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<QuadMesh>>("QuadMeshRef").constructor<QuadMesh *>();
}