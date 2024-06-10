#include "register/register_classes.h"
#include <godot_cpp/classes/placeholder_mesh.hpp>

using namespace godot;

void register_classes_PlaceholderMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PlaceholderMesh>>("PlaceholderMeshRef").constructor<PlaceholderMesh *>();
}