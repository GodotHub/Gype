#include <godot_cpp/classes/gpu_particles_collision_sdf3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticlesCollisionSDF3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticlesCollisionSDF3D>("GPUParticlesCollisionSDF3D")
			.constructor<>()
			.property<&GPUParticlesCollisionSDF3D::get_size, &GPUParticlesCollisionSDF3D::set_size>("size")
			.property<&GPUParticlesCollisionSDF3D::get_resolution, &GPUParticlesCollisionSDF3D::set_resolution>("resolution")
			.property<&GPUParticlesCollisionSDF3D::get_thickness, &GPUParticlesCollisionSDF3D::set_thickness>("thickness")
			.property<&GPUParticlesCollisionSDF3D::get_bake_mask, &GPUParticlesCollisionSDF3D::set_bake_mask>("bake_mask")
			.property<&GPUParticlesCollisionSDF3D::get_texture, &GPUParticlesCollisionSDF3D::set_texture>("texture")
			.fun<static_cast<void (GPUParticlesCollisionSDF3D::*)(int32_t, bool)>(&GPUParticlesCollisionSDF3D::set_bake_mask_value)>("set_bake_mask_value")
			.fun<static_cast<bool (GPUParticlesCollisionSDF3D::*)(int32_t) const>(&GPUParticlesCollisionSDF3D::get_bake_mask_value)>("get_bake_mask_value");
}