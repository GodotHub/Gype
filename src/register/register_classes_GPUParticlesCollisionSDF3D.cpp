
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision_sdf3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticlesCollisionSDF3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticlesCollisionSDF3D>("GPUParticlesCollisionSDF3D")
			.constructor<>()
			.base<GPUParticlesCollision3D>()
			.property<static_cast<Vector3 (GPUParticlesCollisionSDF3D::*)() const>(&GPUParticlesCollisionSDF3D::get_size), static_cast<void (GPUParticlesCollisionSDF3D::*)(const Vector3 &)>(&GPUParticlesCollisionSDF3D::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<GPUParticlesCollisionSDF3D::Resolution (GPUParticlesCollisionSDF3D::*)() const>(&GPUParticlesCollisionSDF3D::get_resolution), static_cast<void (GPUParticlesCollisionSDF3D::*)(GPUParticlesCollisionSDF3D::Resolution)>(&GPUParticlesCollisionSDF3D::set_resolution)>((new std::string("resolution"))->c_str())
			.property<static_cast<double (GPUParticlesCollisionSDF3D::*)() const>(&GPUParticlesCollisionSDF3D::get_thickness), static_cast<void (GPUParticlesCollisionSDF3D::*)(double)>(&GPUParticlesCollisionSDF3D::set_thickness)>((new std::string("thickness"))->c_str())
			.property<static_cast<uint32_t (GPUParticlesCollisionSDF3D::*)() const>(&GPUParticlesCollisionSDF3D::get_bake_mask), static_cast<void (GPUParticlesCollisionSDF3D::*)(uint32_t)>(&GPUParticlesCollisionSDF3D::set_bake_mask)>((new std::string("bake_mask"))->c_str())
			.property<static_cast<Ref<Texture3D> (GPUParticlesCollisionSDF3D::*)() const>(&GPUParticlesCollisionSDF3D::get_texture), static_cast<void (GPUParticlesCollisionSDF3D::*)(const Ref<Texture3D> &)>(&GPUParticlesCollisionSDF3D::set_texture)>((new std::string("texture"))->c_str())
			.fun<static_cast<void (GPUParticlesCollisionSDF3D::*)(int32_t, bool)>(&GPUParticlesCollisionSDF3D::set_bake_mask_value)>((new std::string("set_bake_mask_value"))->c_str())
			.fun<static_cast<bool (GPUParticlesCollisionSDF3D::*)(int32_t) const>(&GPUParticlesCollisionSDF3D::get_bake_mask_value)>((new std::string("get_bake_mask_value"))->c_str());
	qjs::Value _Resolution = context->newObject();
	_Resolution[(new std::string("RESOLUTION_16"))->c_str()] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_16;
	_Resolution[(new std::string("RESOLUTION_32"))->c_str()] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_32;
	_Resolution[(new std::string("RESOLUTION_64"))->c_str()] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_64;
	_Resolution[(new std::string("RESOLUTION_128"))->c_str()] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_128;
	_Resolution[(new std::string("RESOLUTION_256"))->c_str()] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_256;
	_Resolution[(new std::string("RESOLUTION_512"))->c_str()] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_512;
	_Resolution[(new std::string("RESOLUTION_MAX"))->c_str()] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_MAX;
	_module.add("Resolution", std::move(_Resolution));
}