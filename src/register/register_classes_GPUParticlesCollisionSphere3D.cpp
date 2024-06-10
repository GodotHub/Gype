#include <godot_cpp/classes/gpu_particles_collision_sphere3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticlesCollisionSphere3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticlesCollisionSphere3D>("GPUParticlesCollisionSphere3D")
			.constructor<>()
			.property<&GPUParticlesCollisionSphere3D::get_radius, &GPUParticlesCollisionSphere3D::set_radius>("radius");
}