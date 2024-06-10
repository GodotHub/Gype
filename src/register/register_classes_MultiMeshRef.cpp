#include "register/register_classes.h"
#include <godot_cpp/classes/multi_mesh.hpp>

using namespace godot;

void register_classes_MultiMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<MultiMesh>>("MultiMeshRef").constructor<MultiMesh *>();
}