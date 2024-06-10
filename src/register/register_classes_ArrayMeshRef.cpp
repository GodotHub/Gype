#include "register/register_classes.h"
#include <godot_cpp/classes/array_mesh.hpp>

using namespace godot;

void register_classes_ArrayMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ArrayMesh>>("ArrayMeshRef").constructor<ArrayMesh *>();
}