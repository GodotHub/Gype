#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_MeshInstance3D() {
    qjs::Context::Module &_module = get_Node3D_module();
    _module.class_<MeshInstance3D>("MeshInstance3D")
            .constructor<>()
            .base<GeometryInstance3D>()
            .property<static_cast<Ref<Mesh>(MeshInstance3D::*)()const>(&MeshInstance3D::get_mesh),static_cast<void(MeshInstance3D::*)(const Ref<Mesh> &)>(&MeshInstance3D::set_mesh)>("mesh")
            .property<static_cast<Ref<Skin>(MeshInstance3D::*)()const>(&MeshInstance3D::get_skin),static_cast<void(MeshInstance3D::*)(const Ref<Skin> &)>(&MeshInstance3D::set_skin)>("skin")
            .property<static_cast<NodePath(MeshInstance3D::*)()>(&MeshInstance3D::get_skeleton_path),static_cast<void(MeshInstance3D::*)(const NodePath &)>(&MeshInstance3D::set_skeleton_path)>("skeleton")
            .fun<static_cast<Ref<SkinReference>(MeshInstance3D::*)()const>(&MeshInstance3D::get_skin_reference)>("get_skin_reference")
            .fun<static_cast<int32_t(MeshInstance3D::*)()const>(&MeshInstance3D::get_surface_override_material_count)>("get_surface_override_material_count")
            .fun<static_cast<void(MeshInstance3D::*)(int32_t,const Ref<Material> &)>(&MeshInstance3D::set_surface_override_material)>("set_surface_override_material")
            .fun<static_cast<Ref<Material>(MeshInstance3D::*)(int32_t)const>(&MeshInstance3D::get_surface_override_material)>("get_surface_override_material")
            .fun<static_cast<Ref<Material>(MeshInstance3D::*)(int32_t)const>(&MeshInstance3D::get_active_material)>("get_active_material")
            .fun<static_cast<void(MeshInstance3D::*)()>(&MeshInstance3D::create_trimesh_collision)>("create_trimesh_collision")
            .fun<static_cast<void(MeshInstance3D::*)(bool,bool)>(&MeshInstance3D::create_convex_collision)>("create_convex_collision")
            .fun<static_cast<void(MeshInstance3D::*)(const Ref<MeshConvexDecompositionSettings> &)>(&MeshInstance3D::create_multiple_convex_collisions)>("create_multiple_convex_collisions")
            .fun<static_cast<int32_t(MeshInstance3D::*)()const>(&MeshInstance3D::get_blend_shape_count)>("get_blend_shape_count")
            .fun<static_cast<int32_t(MeshInstance3D::*)(const StringName &)>(&MeshInstance3D::find_blend_shape_by_name)>("find_blend_shape_by_name")
            .fun<static_cast<double(MeshInstance3D::*)(int32_t)const>(&MeshInstance3D::get_blend_shape_value)>("get_blend_shape_value")
            .fun<static_cast<void(MeshInstance3D::*)(int32_t,double)>(&MeshInstance3D::set_blend_shape_value)>("set_blend_shape_value")
            .fun<static_cast<void(MeshInstance3D::*)()>(&MeshInstance3D::create_debug_tangents)>("create_debug_tangents")
            .fun<static_cast<Ref<ArrayMesh>(MeshInstance3D::*)(const Ref<ArrayMesh> &)>(&MeshInstance3D::bake_mesh_from_current_blend_shape_mix)>("bake_mesh_from_current_blend_shape_mix")
;}