#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision_box3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticlesCollisionBox3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticlesCollisionBox3D>("GPUParticlesCollisionBox3D")
			.constructor<>()
			.base<GPUParticlesCollision3D>()
			.property<static_cast<Vector3 (GPUParticlesCollisionBox3D::*)() const>(&GPUParticlesCollisionBox3D::get_size), static_cast<void (GPUParticlesCollisionBox3D::*)(const Vector3 &)>(&GPUParticlesCollisionBox3D::set_size)>((new std::string("size"))->c_str());
}