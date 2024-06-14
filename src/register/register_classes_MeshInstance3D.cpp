
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>
#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MeshInstance3D() {
	qjs::Context::Module &_module = get_Node3D_module();
	_module.class_<MeshInstance3D>("MeshInstance3D")
			.constructor<>()
			.base<GeometryInstance3D>()
			.property<static_cast<Ref<Mesh> (MeshInstance3D::*)() const>(&MeshInstance3D::get_mesh), static_cast<void (MeshInstance3D::*)(const Ref<Mesh> &)>(&MeshInstance3D::set_mesh)>((new std::string("mesh"))->c_str())
			.property<static_cast<Ref<Skin> (MeshInstance3D::*)() const>(&MeshInstance3D::get_skin), static_cast<void (MeshInstance3D::*)(const Ref<Skin> &)>(&MeshInstance3D::set_skin)>((new std::string("skin"))->c_str())
			.property<static_cast<NodePath (MeshInstance3D::*)()>(&MeshInstance3D::get_skeleton_path), static_cast<void (MeshInstance3D::*)(const NodePath &)>(&MeshInstance3D::set_skeleton_path)>((new std::string("skeleton"))->c_str())
			.fun<static_cast<Ref<SkinReference> (MeshInstance3D::*)() const>(&MeshInstance3D::get_skin_reference)>((new std::string("get_skin_reference"))->c_str())
			.fun<static_cast<int32_t (MeshInstance3D::*)() const>(&MeshInstance3D::get_surface_override_material_count)>((new std::string("get_surface_override_material_count"))->c_str())
			.fun<static_cast<void (MeshInstance3D::*)(int32_t, const Ref<Material> &)>(&MeshInstance3D::set_surface_override_material)>((new std::string("set_surface_override_material"))->c_str())
			.fun<static_cast<Ref<Material> (MeshInstance3D::*)(int32_t) const>(&MeshInstance3D::get_surface_override_material)>((new std::string("get_surface_override_material"))->c_str())
			.fun<static_cast<Ref<Material> (MeshInstance3D::*)(int32_t) const>(&MeshInstance3D::get_active_material)>((new std::string("get_active_material"))->c_str())
			.fun<static_cast<void (MeshInstance3D::*)()>(&MeshInstance3D::create_trimesh_collision)>((new std::string("create_trimesh_collision"))->c_str())
			.fun<static_cast<void (MeshInstance3D::*)(bool, bool)>(&MeshInstance3D::create_convex_collision)>((new std::string("create_convex_collision"))->c_str())
			.fun<static_cast<void (MeshInstance3D::*)(const Ref<MeshConvexDecompositionSettings> &)>(&MeshInstance3D::create_multiple_convex_collisions)>((new std::string("create_multiple_convex_collisions"))->c_str())
			.fun<static_cast<int32_t (MeshInstance3D::*)() const>(&MeshInstance3D::get_blend_shape_count)>((new std::string("get_blend_shape_count"))->c_str())
			.fun<static_cast<int32_t (MeshInstance3D::*)(const StringName &)>(&MeshInstance3D::find_blend_shape_by_name)>((new std::string("find_blend_shape_by_name"))->c_str())
			.fun<static_cast<double (MeshInstance3D::*)(int32_t) const>(&MeshInstance3D::get_blend_shape_value)>((new std::string("get_blend_shape_value"))->c_str())
			.fun<static_cast<void (MeshInstance3D::*)(int32_t, double)>(&MeshInstance3D::set_blend_shape_value)>((new std::string("set_blend_shape_value"))->c_str())
			.fun<static_cast<void (MeshInstance3D::*)()>(&MeshInstance3D::create_debug_tangents)>((new std::string("create_debug_tangents"))->c_str())
			.fun<static_cast<Ref<ArrayMesh> (MeshInstance3D::*)(const Ref<ArrayMesh> &)>(&MeshInstance3D::bake_mesh_from_current_blend_shape_mix)>((new std::string("bake_mesh_from_current_blend_shape_mix"))->c_str());
}