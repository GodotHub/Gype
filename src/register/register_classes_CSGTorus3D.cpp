#include <godot_cpp/classes/csg_torus3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CSGTorus3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CSGTorus3D>("CSGTorus3D")
            .constructor<>()
            .base<CSGPrimitive3D>()
            .property<static_cast<double(CSGTorus3D::*)()const>(&CSGTorus3D::get_inner_radius),static_cast<void(CSGTorus3D::*)(double)>(&CSGTorus3D::set_inner_radius)>("inner_radius")
            .property<static_cast<double(CSGTorus3D::*)()const>(&CSGTorus3D::get_outer_radius),static_cast<void(CSGTorus3D::*)(double)>(&CSGTorus3D::set_outer_radius)>("outer_radius")
            .property<static_cast<int32_t(CSGTorus3D::*)()const>(&CSGTorus3D::get_sides),static_cast<void(CSGTorus3D::*)(int32_t)>(&CSGTorus3D::set_sides)>("sides")
            .property<static_cast<int32_t(CSGTorus3D::*)()const>(&CSGTorus3D::get_ring_sides),static_cast<void(CSGTorus3D::*)(int32_t)>(&CSGTorus3D::set_ring_sides)>("ring_sides")
            .property<static_cast<bool(CSGTorus3D::*)()const>(&CSGTorus3D::get_smooth_faces),static_cast<void(CSGTorus3D::*)(bool)>(&CSGTorus3D::set_smooth_faces)>("smooth_faces")
            .property<static_cast<Ref<Material>(CSGTorus3D::*)()const>(&CSGTorus3D::get_material),static_cast<void(CSGTorus3D::*)(const Ref<Material> &)>(&CSGTorus3D::set_material)>("material")
;}