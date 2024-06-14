#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor_sphere3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticlesAttractorSphere3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticlesAttractorSphere3D>("GPUParticlesAttractorSphere3D")
			.constructor<>()
			.base<GPUParticlesAttractor3D>()
			.property<static_cast<double (GPUParticlesAttractorSphere3D::*)() const>(&GPUParticlesAttractorSphere3D::get_radius), static_cast<void (GPUParticlesAttractorSphere3D::*)(double)>(&GPUParticlesAttractorSphere3D::set_radius)>((new std::string("radius"))->c_str());
}