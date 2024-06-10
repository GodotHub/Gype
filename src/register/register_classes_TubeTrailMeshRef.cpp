#include "register/register_classes.h"
#include <godot_cpp/classes/tube_trail_mesh.hpp>

using namespace godot;

void register_classes_TubeTrailMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<TubeTrailMesh>>("TubeTrailMeshRef").constructor<TubeTrailMesh *>();
}