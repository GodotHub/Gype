#include <godot_cpp/classes/csg_mesh3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CSGMesh3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<CSGMesh3D>("CSGMesh3D")
            .constructor<>()
            .base<CSGPrimitive3D>()
            .property<static_cast<Ref<Mesh>(CSGMesh3D::*)()>(&CSGMesh3D::get_mesh),static_cast<void(CSGMesh3D::*)(const Ref<Mesh> &)>(&CSGMesh3D::set_mesh)>("mesh")
            .property<static_cast<Ref<Material>(CSGMesh3D::*)()const>(&CSGMesh3D::get_material),static_cast<void(CSGMesh3D::*)(const Ref<Material> &)>(&CSGMesh3D::set_material)>("material")
;}