#include "qjspp.hpp"
#include "register/register_classes.h"
#include <godot_cpp/classes/gpu_particles_attractor_vector_field3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>

using namespace godot;

void register_classes_GPUParticlesAttractorVectorField3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticlesAttractorVectorField3D>("GPUParticlesAttractorVectorField3D")
			.constructor<>()
			.property<&GPUParticlesAttractorVectorField3D::get_size, &GPUParticlesAttractorVectorField3D::set_size>("size")
			.property<&GPUParticlesAttractorVectorField3D::get_texture, &GPUParticlesAttractorVectorField3D::set_texture>("texture");
}