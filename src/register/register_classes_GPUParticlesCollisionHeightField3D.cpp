#include <godot_cpp/classes/gpu_particles_collision_height_field3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GPUParticlesCollisionHeightField3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<GPUParticlesCollisionHeightField3D>("GPUParticlesCollisionHeightField3D")
            .constructor<>()
            .base<GPUParticlesCollision3D>()
            .property<static_cast<Vector3(GPUParticlesCollisionHeightField3D::*)()const>(&GPUParticlesCollisionHeightField3D::get_size),static_cast<void(GPUParticlesCollisionHeightField3D::*)(const Vector3 &)>(&GPUParticlesCollisionHeightField3D::set_size)>("size")
            .property<static_cast<GPUParticlesCollisionHeightField3D::Resolution(GPUParticlesCollisionHeightField3D::*)()const>(&GPUParticlesCollisionHeightField3D::get_resolution),static_cast<void(GPUParticlesCollisionHeightField3D::*)(GPUParticlesCollisionHeightField3D::Resolution)>(&GPUParticlesCollisionHeightField3D::set_resolution)>("resolution")
            .property<static_cast<GPUParticlesCollisionHeightField3D::UpdateMode(GPUParticlesCollisionHeightField3D::*)()const>(&GPUParticlesCollisionHeightField3D::get_update_mode),static_cast<void(GPUParticlesCollisionHeightField3D::*)(GPUParticlesCollisionHeightField3D::UpdateMode)>(&GPUParticlesCollisionHeightField3D::set_update_mode)>("update_mode")
            .property<static_cast<bool(GPUParticlesCollisionHeightField3D::*)()const>(&GPUParticlesCollisionHeightField3D::is_follow_camera_enabled),static_cast<void(GPUParticlesCollisionHeightField3D::*)(bool)>(&GPUParticlesCollisionHeightField3D::set_follow_camera_enabled)>("follow_camera_enabled")
;    qjs::Value _Resolution = context->newObject();
    _Resolution["RESOLUTION_256"] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_256;
    _Resolution["RESOLUTION_512"] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_512;
    _Resolution["RESOLUTION_1024"] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_1024;
    _Resolution["RESOLUTION_2048"] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_2048;
    _Resolution["RESOLUTION_4096"] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_4096;
    _Resolution["RESOLUTION_8192"] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_8192;
    _Resolution["RESOLUTION_MAX"] = GPUParticlesCollisionHeightField3D::Resolution::RESOLUTION_MAX;
    _module.add("Resolution", std::move(_Resolution));
    qjs::Value _UpdateMode = context->newObject();
    _UpdateMode["UPDATE_MODE_WHEN_MOVED"] = GPUParticlesCollisionHeightField3D::UpdateMode::UPDATE_MODE_WHEN_MOVED;
    _UpdateMode["UPDATE_MODE_ALWAYS"] = GPUParticlesCollisionHeightField3D::UpdateMode::UPDATE_MODE_ALWAYS;
    _module.add("UpdateMode", std::move(_UpdateMode));
}