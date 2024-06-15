#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GPUParticlesAttractor3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<GPUParticlesAttractor3D>("GPUParticlesAttractor3D")
            .constructor<>()
            .base<VisualInstance3D>()
            .property<static_cast<double(GPUParticlesAttractor3D::*)()const>(&GPUParticlesAttractor3D::get_strength),static_cast<void(GPUParticlesAttractor3D::*)(double)>(&GPUParticlesAttractor3D::set_strength)>("strength")
            .property<static_cast<double(GPUParticlesAttractor3D::*)()const>(&GPUParticlesAttractor3D::get_attenuation),static_cast<void(GPUParticlesAttractor3D::*)(double)>(&GPUParticlesAttractor3D::set_attenuation)>("attenuation")
            .property<static_cast<double(GPUParticlesAttractor3D::*)()const>(&GPUParticlesAttractor3D::get_directionality),static_cast<void(GPUParticlesAttractor3D::*)(double)>(&GPUParticlesAttractor3D::set_directionality)>("directionality")
            .property<static_cast<uint32_t(GPUParticlesAttractor3D::*)()const>(&GPUParticlesAttractor3D::get_cull_mask),static_cast<void(GPUParticlesAttractor3D::*)(uint32_t)>(&GPUParticlesAttractor3D::set_cull_mask)>("cull_mask")
;}