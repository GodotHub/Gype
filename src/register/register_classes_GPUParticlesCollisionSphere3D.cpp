#include <godot_cpp/classes/gpu_particles_collision_sphere3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GPUParticlesCollisionSphere3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<GPUParticlesCollisionSphere3D>("GPUParticlesCollisionSphere3D")
            .constructor<>()
            .base<GPUParticlesCollision3D>()
            .property<static_cast<double(GPUParticlesCollisionSphere3D::*)()const>(&GPUParticlesCollisionSphere3D::get_radius),static_cast<void(GPUParticlesCollisionSphere3D::*)(double)>(&GPUParticlesCollisionSphere3D::set_radius)>("radius")
;}