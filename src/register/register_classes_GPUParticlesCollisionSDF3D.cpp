#include <godot_cpp/classes/gpu_particles_collision_sdf3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_GPUParticlesCollisionSDF3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<GPUParticlesCollisionSDF3D>("GPUParticlesCollisionSDF3D")
            .constructor<>()
            .base<GPUParticlesCollision3D>()
            .property<static_cast<Vector3(GPUParticlesCollisionSDF3D::*)()const>(&GPUParticlesCollisionSDF3D::get_size),static_cast<void(GPUParticlesCollisionSDF3D::*)(const Vector3 &)>(&GPUParticlesCollisionSDF3D::set_size)>("size")
            .property<static_cast<GPUParticlesCollisionSDF3D::Resolution(GPUParticlesCollisionSDF3D::*)()const>(&GPUParticlesCollisionSDF3D::get_resolution),static_cast<void(GPUParticlesCollisionSDF3D::*)(GPUParticlesCollisionSDF3D::Resolution)>(&GPUParticlesCollisionSDF3D::set_resolution)>("resolution")
            .property<static_cast<double(GPUParticlesCollisionSDF3D::*)()const>(&GPUParticlesCollisionSDF3D::get_thickness),static_cast<void(GPUParticlesCollisionSDF3D::*)(double)>(&GPUParticlesCollisionSDF3D::set_thickness)>("thickness")
            .property<static_cast<uint32_t(GPUParticlesCollisionSDF3D::*)()const>(&GPUParticlesCollisionSDF3D::get_bake_mask),static_cast<void(GPUParticlesCollisionSDF3D::*)(uint32_t)>(&GPUParticlesCollisionSDF3D::set_bake_mask)>("bake_mask")
            .property<static_cast<Ref<Texture3D>(GPUParticlesCollisionSDF3D::*)()const>(&GPUParticlesCollisionSDF3D::get_texture),static_cast<void(GPUParticlesCollisionSDF3D::*)(const Ref<Texture3D> &)>(&GPUParticlesCollisionSDF3D::set_texture)>("texture")
            .fun<static_cast<void(GPUParticlesCollisionSDF3D::*)(int32_t,bool)>(&GPUParticlesCollisionSDF3D::set_bake_mask_value)>("set_bake_mask_value")
            .fun<static_cast<bool(GPUParticlesCollisionSDF3D::*)(int32_t)const>(&GPUParticlesCollisionSDF3D::get_bake_mask_value)>("get_bake_mask_value")
;    qjs::Value _Resolution = context->newObject();
    _Resolution["RESOLUTION_16"] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_16;
    _Resolution["RESOLUTION_32"] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_32;
    _Resolution["RESOLUTION_64"] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_64;
    _Resolution["RESOLUTION_128"] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_128;
    _Resolution["RESOLUTION_256"] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_256;
    _Resolution["RESOLUTION_512"] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_512;
    _Resolution["RESOLUTION_MAX"] = GPUParticlesCollisionSDF3D::Resolution::RESOLUTION_MAX;
    _module.add("Resolution", std::move(_Resolution));
}