#include "register/register_classes.h"
#include <godot_cpp/classes/height_map_shape3d.hpp>

using namespace godot;

void register_classes_HeightMapShape3DRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<HeightMapShape3D>>("HeightMapShape3DRef").constructor<HeightMapShape3D *>();
}