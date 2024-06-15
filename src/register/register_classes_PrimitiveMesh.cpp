#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/variant/array.hpp>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_PrimitiveMesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<PrimitiveMesh>("PrimitiveMesh")
            .constructor<>()
            .base<Mesh>()
            .property<static_cast<Ref<Material>(PrimitiveMesh::*)()const>(&PrimitiveMesh::get_material),static_cast<void(PrimitiveMesh::*)(const Ref<Material> &)>(&PrimitiveMesh::set_material)>("material")
            .property<static_cast<AABB(PrimitiveMesh::*)()const>(&PrimitiveMesh::get_custom_aabb),static_cast<void(PrimitiveMesh::*)(const AABB &)>(&PrimitiveMesh::set_custom_aabb)>("custom_aabb")
            .property<static_cast<bool(PrimitiveMesh::*)()const>(&PrimitiveMesh::get_flip_faces),static_cast<void(PrimitiveMesh::*)(bool)>(&PrimitiveMesh::set_flip_faces)>("flip_faces")
            .property<static_cast<bool(PrimitiveMesh::*)()const>(&PrimitiveMesh::get_add_uv2),static_cast<void(PrimitiveMesh::*)(bool)>(&PrimitiveMesh::set_add_uv2)>("add_uv2")
            .property<static_cast<double(PrimitiveMesh::*)()const>(&PrimitiveMesh::get_uv2_padding),static_cast<void(PrimitiveMesh::*)(double)>(&PrimitiveMesh::set_uv2_padding)>("uv2_padding")
            .fun<static_cast<Array(PrimitiveMesh::*)()const>(&PrimitiveMesh::_create_mesh_array)>("_create_mesh_array")
            .fun<static_cast<Array(PrimitiveMesh::*)()const>(&PrimitiveMesh::get_mesh_arrays)>("get_mesh_arrays")
            .fun<static_cast<void(PrimitiveMesh::*)()>(&PrimitiveMesh::request_update)>("request_update")
;}