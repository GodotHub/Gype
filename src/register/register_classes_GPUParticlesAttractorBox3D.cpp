#include <godot_cpp/classes/gpu_particles_attractor_box3d.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GPUParticlesAttractorBox3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<GPUParticlesAttractorBox3D>("GPUParticlesAttractorBox3D")
            .constructor<>()
            .base<GPUParticlesAttractor3D>()
            .property<static_cast<Vector3(GPUParticlesAttractorBox3D::*)()const>(&GPUParticlesAttractorBox3D::get_size),static_cast<void(GPUParticlesAttractorBox3D::*)(const Vector3 &)>(&GPUParticlesAttractorBox3D::set_size)>("size")
;}