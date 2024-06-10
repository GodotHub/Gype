#include "register/register_classes.h"
#include <godot_cpp/classes/occluder3d.hpp>

using namespace godot;

void register_classes_Occluder3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<Occluder3D>>("Occluder3DRef").constructor<Occluder3D *>();
}