#include "register/register_classes.h"
#include <godot_cpp/classes/fog_material.hpp>

using namespace godot;

void register_classes_FogMaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<FogMaterial>>("FogMaterialRef").constructor<FogMaterial *>();
}