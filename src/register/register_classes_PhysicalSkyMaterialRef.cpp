#include "register/register_classes.h"
#include <godot_cpp/classes/physical_sky_material.hpp>

using namespace godot;

void register_classes_PhysicalSkyMaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PhysicalSkyMaterial>>("PhysicalSkyMaterialRef").constructor<PhysicalSkyMaterial *>();
}