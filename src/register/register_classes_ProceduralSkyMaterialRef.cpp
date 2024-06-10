#include "register/register_classes.h"
#include <godot_cpp/classes/procedural_sky_material.hpp>

using namespace godot;

void register_classes_ProceduralSkyMaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ProceduralSkyMaterial>>("ProceduralSkyMaterialRef").constructor<ProceduralSkyMaterial *>();
}