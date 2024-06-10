#include "register/register_classes.h"
#include <godot_cpp/classes/primitive_mesh.hpp>

using namespace godot;

void register_classes_PrimitiveMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PrimitiveMesh>>("PrimitiveMeshRef").constructor<PrimitiveMesh *>();
}