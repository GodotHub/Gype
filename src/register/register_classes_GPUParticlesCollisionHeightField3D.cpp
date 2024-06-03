#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gpu_particles_collision_height_field3d.hpp>

using namespace godot;

void register_classes_GPUParticlesCollisionHeightField3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<GPUParticlesCollisionHeightField3D>("GPUParticlesCollisionHeightField3D")
           .constructor<>()
           .property<GPUParticlesCollisionHeightField3D::get_size, GPUParticlesCollisionHeightField3D::set_size>("size")
           .property<GPUParticlesCollisionHeightField3D::get_resolution, GPUParticlesCollisionHeightField3D::set_resolution>("resolution")
           .property<GPUParticlesCollisionHeightField3D::get_update_mode, GPUParticlesCollisionHeightField3D::set_update_mode>("update_mode")
           .property<GPUParticlesCollisionHeightField3D::is_follow_camera_enabled, GPUParticlesCollisionHeightField3D::set_follow_camera_enabled>("follow_camera_enabled")
;}