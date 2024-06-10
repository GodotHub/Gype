#include "register/register_classes.h"
#include <godot_cpp/classes/quad_occluder3d.hpp>

using namespace godot;

void register_classes_QuadOccluder3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<QuadOccluder3D>>("QuadOccluder3DRef").constructor<QuadOccluder3D *>();
}