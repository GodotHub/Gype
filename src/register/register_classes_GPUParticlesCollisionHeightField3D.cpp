#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision_height_field3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_GPUParticlesCollisionHeightField3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<GPUParticlesCollisionHeightField3D>("GPUParticlesCollisionHeightField3D")
			.constructor<>()
			.base<GPUParticlesCollision3D>()
			.property<static_cast<Vector3 (GPUParticlesCollisionHeightField3D::*)() const>(&GPUParticlesCollisionHeightField3D::get_size), static_cast<void (GPUParticlesCollisionHeightField3D::*)(const Vector3 &)>(&GPUParticlesCollisionHeightField3D::set_size)>((new std::string("size"))->c_str())
			.property<static_cast<GPUParticlesCollisionHeightField3D::Resolution (GPUParticlesCollisionHeightField3D::*)() const>(&GPUParticlesCollisionHeightField3D::get_resolution), static_cast<void (GPUParticlesCollisionHeightField3D::*)(GPUParticlesCollisionHeightField3D::Resolution)>(&GPUParticlesCollisionHeightField3D::set_resolution)>((new std::string("resolution"))->c_str())
			.property<static_cast<GPUParticlesCollisionHeightField3D::UpdateMode (GPUParticlesCollisionHeightField3D::*)() const>(&GPUParticlesCollisionHeightField3D::get_update_mode), static_cast<void (GPUParticlesCollisionHeightField3D::*)(GPUParticlesCollisionHeightField3D::UpdateMode)>(&GPUParticlesCollisionHeightField3D::set_update_mode)>((new std::string("update_mode"))->c_str())
			.property<static_cast<bool (GPUParticlesCollisionHeightField3D::*)() const>(&GPUParticlesCollisionHeightField3D::is_follow_camera_enabled), static_cast<void (GPUParticlesCollisionHeightField3D::*)(bool)>(&GPUParticlesCollisionHeightField3D::set_follow_camera_enabled)>((new std::string("follow_camera_enabled"))->c_str());
	qjs::Value _Resolution = context->newObject();
	_Resolution[(new std::string("RESOLUTION_256"))->c_str()] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_256;
	_Resolution[(new std::string("RESOLUTION_512"))->c_str()] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_512;
	_Resolution[(new std::string("RESOLUTION_1024"))->c_str()] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_1024;
	_Resolution[(new std::string("RESOLUTION_2048"))->c_str()] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_2048;
	_Resolution[(new std::string("RESOLUTION_4096"))->c_str()] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_4096;
	_Resolution[(new std::string("RESOLUTION_8192"))->c_str()] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_8192;
	_Resolution[(new std::string("RESOLUTION_MAX"))->c_str()] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_MAX;
	_module.add("Resolution", std::move(_Resolution));
	qjs::Value _UpdateMode = context->newObject();
	_UpdateMode[(new std::string("UPDATE_MODE_WHEN_MOVED"))->c_str()] = GPUParticlesCollisionHeightField3D::UpdateMode::UPDATE_MODE_WHEN_MOVED;
	_UpdateMode[(new std::string("UPDATE_MODE_ALWAYS"))->c_str()] = GPUParticlesCollisionHeightField3D::UpdateMode::UPDATE_MODE_ALWAYS;
	_module.add("UpdateMode", std::move(_UpdateMode));
}