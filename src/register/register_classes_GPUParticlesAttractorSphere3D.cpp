#include <godot_cpp/classes/gpu_particles_attractor_sphere3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"


using namespace godot;

void register_classes_GPUParticlesAttractorSphere3D() {
	qjs::Context::Module &_module = _Node3D;
	_module.class_<GPUParticlesAttractorSphere3D>("GPUParticlesAttractorSphere3D")
			.constructor<>()
			.property<&GPUParticlesAttractorSphere3D::get_radius, &GPUParticlesAttractorSphere3D::set_radius>("radius");
}