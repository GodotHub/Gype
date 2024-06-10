#include "register/register_classes.h"
#include <godot_cpp/classes/panorama_sky_material.hpp>

using namespace godot;

void register_classes_PanoramaSkyMaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<PanoramaSkyMaterial>>("PanoramaSkyMaterialRef").constructor<PanoramaSkyMaterial *>();
}