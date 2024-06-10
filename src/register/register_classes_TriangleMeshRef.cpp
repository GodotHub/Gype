#include "register/register_classes.h"
#include <godot_cpp/classes/triangle_mesh.hpp>

using namespace godot;

void register_classes_TriangleMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TriangleMesh>>("TriangleMeshRef").constructor<TriangleMesh *>();
}