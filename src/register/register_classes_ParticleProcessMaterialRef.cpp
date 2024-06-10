#include "register/register_classes.h"
#include <godot_cpp/classes/particle_process_material.hpp>

using namespace godot;

void register_classes_ParticleProcessMaterialRef() {
	qjs::Context::Module &_General = get_General_module();
	_General.class_<Ref<ParticleProcessMaterial>>("ParticleProcessMaterialRef").constructor<ParticleProcessMaterial *>();
}