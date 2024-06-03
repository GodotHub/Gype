#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/mesh_instance3d.hpp>

using namespace godot;

void register_classes_MeshInstance3D() {
    qjs::Context::Module &_module = _Node3D;
    _module.class_<MeshInstance3D>("MeshInstance3D")
           .constructor<>()
           .property<MeshInstance3D::get_mesh, MeshInstance3D::set_mesh>("mesh")
           .property<MeshInstance3D::get_skin, MeshInstance3D::set_skin>("skin")
           .property<MeshInstance3D::get_skeleton_path, MeshInstance3D::set_skeleton_path>("skeleton")
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
;}