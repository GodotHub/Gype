#include "register/register_classes.h"
#include <godot_cpp/classes/ribbon_trail_mesh.hpp>

using namespace godot;

void register_classes_RibbonTrailMeshRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<RibbonTrailMesh>>("RibbonTrailMeshRef").constructor<RibbonTrailMesh *>();
}