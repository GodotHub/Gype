#include "register/register_classes.h"
#include <godot_cpp/classes/sphere_occluder3d.hpp>

using namespace godot;

void register_classes_SphereOccluder3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<SphereOccluder3D>>("SphereOccluder3DRef").constructor<SphereOccluder3D *>();
}