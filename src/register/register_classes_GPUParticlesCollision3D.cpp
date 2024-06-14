
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticlesCollision3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticlesCollision3D>("GPUParticlesCollision3D")
			.constructor<>()
			.base<VisualInstance3D>()
			.property<static_cast<uint32_t (GPUParticlesCollision3D::*)() const>(&GPUParticlesCollision3D::get_cull_mask), static_cast<void (GPUParticlesCollision3D::*)(uint32_t)>(&GPUParticlesCollision3D::set_cull_mask)>((new std::string("cull_mask"))->c_str());
}