#include "register/register_classes.h"
#include <godot_cpp/classes/immediate_mesh.hpp>

using namespace godot;

void register_classes_ImmediateMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ImmediateMesh>>("ImmediateMeshRef").constructor<ImmediateMesh *>();
}