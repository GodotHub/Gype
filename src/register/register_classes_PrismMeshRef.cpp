#include "register/register_classes.h"
#include <godot_cpp/classes/prism_mesh.hpp>

using namespace godot;

void register_classes_PrismMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PrismMesh>>("PrismMeshRef").constructor<PrismMesh *>();
}