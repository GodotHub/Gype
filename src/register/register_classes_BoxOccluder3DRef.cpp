#include "register/register_classes.h"
#include <godot_cpp/classes/box_occluder3d.hpp>

using namespace godot;

void register_classes_BoxOccluder3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<BoxOccluder3D>>("BoxOccluder3DRef").constructor<BoxOccluder3D *>();
}