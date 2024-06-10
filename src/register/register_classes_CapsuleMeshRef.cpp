#include "register/register_classes.h"
#include <godot_cpp/classes/capsule_mesh.hpp>

using namespace godot;

void register_classes_CapsuleMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<CapsuleMesh>>("CapsuleMeshRef").constructor<CapsuleMesh *>();
}