#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/gpu_particles_collision_sphere3d.hpp>

using namespace godot;

void register_classes_GPUParticlesCollisionSphere3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<GPUParticlesCollisionSphere3D>("GPUParticlesCollisionSphere3D")
           .constructor<>()
           .property<GPUParticlesCollisionSphere3D::get_radius, GPUParticlesCollisionSphere3D::set_radius>("radius")
;}