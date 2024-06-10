#include <godot_cpp/classes/gpu_particles_collision_box3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticlesCollisionBox3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticlesCollisionBox3D>("GPUParticlesCollisionBox3D")
			.constructor<>()
			.property<&GPUParticlesCollisionBox3D::get_size, &GPUParticlesCollisionBox3D::set_size>("size");
}