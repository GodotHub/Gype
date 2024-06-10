#include "register/register_classes.h"
#include <godot_cpp/classes/box_mesh.hpp>

using namespace godot;

void register_classes_BoxMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<BoxMesh>>("BoxMeshRef").constructor<BoxMesh *>();
}