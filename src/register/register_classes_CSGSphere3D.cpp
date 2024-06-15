#include <godot_cpp/classes/csg_sphere3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CSGSphere3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CSGSphere3D>("CSGSphere3D")
            .constructor<>()
            .base<CSGPrimitive3D>()
            .property<static_cast<double(CSGSphere3D::*)()const>(&CSGSphere3D::get_radius),static_cast<void(CSGSphere3D::*)(double)>(&CSGSphere3D::set_radius)>("radius")
            .property<static_cast<int32_t(CSGSphere3D::*)()const>(&CSGSphere3D::get_radial_segments),static_cast<void(CSGSphere3D::*)(int32_t)>(&CSGSphere3D::set_radial_segments)>("radial_segments")
            .property<static_cast<int32_t(CSGSphere3D::*)()const>(&CSGSphere3D::get_rings),static_cast<void(CSGSphere3D::*)(int32_t)>(&CSGSphere3D::set_rings)>("rings")
            .property<static_cast<bool(CSGSphere3D::*)()const>(&CSGSphere3D::get_smooth_faces),static_cast<void(CSGSphere3D::*)(bool)>(&CSGSphere3D::set_smooth_faces)>("smooth_faces")
            .property<static_cast<Ref<Material>(CSGSphere3D::*)()const>(&CSGSphere3D::get_material),static_cast<void(CSGSphere3D::*)(const Ref<Material> &)>(&CSGSphere3D::set_material)>("material")
;}