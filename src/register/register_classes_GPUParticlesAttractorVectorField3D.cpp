#include <godot_cpp/classes/gpu_particles_attractor_vector_field3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GPUParticlesAttractorVectorField3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<GPUParticlesAttractorVectorField3D>("GPUParticlesAttractorVectorField3D")
            .constructor<>()
            .base<GPUParticlesAttractor3D>()
            .property<static_cast<Vector3(GPUParticlesAttractorVectorField3D::*)()const>(&GPUParticlesAttractorVectorField3D::get_size),static_cast<void(GPUParticlesAttractorVectorField3D::*)(const Vector3 &)>(&GPUParticlesAttractorVectorField3D::set_size)>("size")
            .property<static_cast<Ref<Texture3D>(GPUParticlesAttractorVectorField3D::*)()const>(&GPUParticlesAttractorVectorField3D::get_texture),static_cast<void(GPUParticlesAttractorVectorField3D::*)(const Ref<Texture3D> &)>(&GPUParticlesAttractorVectorField3D::set_texture)>("texture")
;}