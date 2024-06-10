#include "register/register_classes.h"
#include <godot_cpp/classes/array_occluder3d.hpp>

using namespace godot;

void register_classes_ArrayOccluder3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ArrayOccluder3D>>("ArrayOccluder3DRef").constructor<ArrayOccluder3D *>();
}