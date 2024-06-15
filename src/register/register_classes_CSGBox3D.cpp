#include <godot_cpp/classes/csg_box3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CSGBox3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CSGBox3D>("CSGBox3D")
            .constructor<>()
            .base<CSGPrimitive3D>()
            .property<static_cast<Vector3(CSGBox3D::*)()const>(&CSGBox3D::get_size),static_cast<void(CSGBox3D::*)(const Vector3 &)>(&CSGBox3D::set_size)>("size")
            .property<static_cast<Ref<Material>(CSGBox3D::*)()const>(&CSGBox3D::get_material),static_cast<void(CSGBox3D::*)(const Ref<Material> &)>(&CSGBox3D::set_material)>("material")
;}