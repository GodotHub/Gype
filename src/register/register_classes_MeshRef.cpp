#include "register/register_classes.h"
#include <godot_cpp/classes/mesh.hpp>

using namespace godot;

void register_classes_MeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Mesh>>("MeshRef").constructor<Mesh *>();
}