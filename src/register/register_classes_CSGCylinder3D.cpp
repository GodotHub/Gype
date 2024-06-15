#include <godot_cpp/classes/csg_cylinder3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CSGCylinder3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CSGCylinder3D>("CSGCylinder3D")
            .constructor<>()
            .base<CSGPrimitive3D>()
            .property<static_cast<double(CSGCylinder3D::*)()const>(&CSGCylinder3D::get_radius),static_cast<void(CSGCylinder3D::*)(double)>(&CSGCylinder3D::set_radius)>("radius")
            .property<static_cast<double(CSGCylinder3D::*)()const>(&CSGCylinder3D::get_height),static_cast<void(CSGCylinder3D::*)(double)>(&CSGCylinder3D::set_height)>("height")
            .property<static_cast<int32_t(CSGCylinder3D::*)()const>(&CSGCylinder3D::get_sides),static_cast<void(CSGCylinder3D::*)(int32_t)>(&CSGCylinder3D::set_sides)>("sides")
            .property<static_cast<bool(CSGCylinder3D::*)()const>(&CSGCylinder3D::is_cone),static_cast<void(CSGCylinder3D::*)(bool)>(&CSGCylinder3D::set_cone)>("cone")
            .property<static_cast<bool(CSGCylinder3D::*)()const>(&CSGCylinder3D::get_smooth_faces),static_cast<void(CSGCylinder3D::*)(bool)>(&CSGCylinder3D::set_smooth_faces)>("smooth_faces")
            .property<static_cast<Ref<Material>(CSGCylinder3D::*)()const>(&CSGCylinder3D::get_material),static_cast<void(CSGCylinder3D::*)(const Ref<Material> &)>(&CSGCylinder3D::set_material)>("material")
;}