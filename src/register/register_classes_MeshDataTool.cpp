#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh_data_tool.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MeshDataTool() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MeshDataTool>("MeshDataTool")
			.constructor<>()
			.fun<static_cast<void (MeshDataTool::*)()>(&MeshDataTool::clear)>("clear")
			.fun<static_cast<Error (MeshDataTool::*)(const Ref<ArrayMesh> &, int32_t)>(&MeshDataTool::create_from_surface)>("create_from_surface")
			.fun<static_cast<Error (MeshDataTool::*)(const Ref<ArrayMesh> &, uint64_t)>(&MeshDataTool::commit_to_surface)>("commit_to_surface")
			.fun<static_cast<uint64_t (MeshDataTool::*)() const>(&MeshDataTool::get_format)>("get_format")
			.fun<static_cast<int32_t (MeshDataTool::*)() const>(&MeshDataTool::get_vertex_count)>("get_vertex_count")
			.fun<static_cast<int32_t (MeshDataTool::*)() const>(&MeshDataTool::get_edge_count)>("get_edge_count")
			.fun<static_cast<int32_t (MeshDataTool::*)() const>(&MeshDataTool::get_face_count)>("get_face_count")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Vector3 &)>(&MeshDataTool::set_vertex)>("set_vertex")
			.fun<static_cast<Vector3 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex)>("get_vertex")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Vector3 &)>(&MeshDataTool::set_vertex_normal)>("set_vertex_normal")
			.fun<static_cast<Vector3 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_normal)>("get_vertex_normal")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Plane &)>(&MeshDataTool::set_vertex_tangent)>("set_vertex_tangent")
			.fun<static_cast<Plane (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_tangent)>("get_vertex_tangent")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Vector2 &)>(&MeshDataTool::set_vertex_uv)>("set_vertex_uv")
			.fun<static_cast<Vector2 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_uv)>("get_vertex_uv")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Vector2 &)>(&MeshDataTool::set_vertex_uv2)>("set_vertex_uv2")
			.fun<static_cast<Vector2 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_uv2)>("get_vertex_uv2")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Color &)>(&MeshDataTool::set_vertex_color)>("set_vertex_color")
			.fun<static_cast<Color (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_color)>("get_vertex_color")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const PackedInt32Array &)>(&MeshDataTool::set_vertex_bones)>("set_vertex_bones")
			.fun<static_cast<PackedInt32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_bones)>("get_vertex_bones")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const PackedFloat32Array &)>(&MeshDataTool::set_vertex_weights)>("set_vertex_weights")
			.fun<static_cast<PackedFloat32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_weights)>("get_vertex_weights")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Variant &)>(&MeshDataTool::set_vertex_meta)>("set_vertex_meta")
			.fun<static_cast<Variant (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_meta)>("get_vertex_meta")
			.fun<static_cast<PackedInt32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_edges)>("get_vertex_edges")
			.fun<static_cast<PackedInt32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_faces)>("get_vertex_faces")
			.fun<static_cast<int32_t (MeshDataTool::*)(int32_t, int32_t) const>(&MeshDataTool::get_edge_vertex)>("get_edge_vertex")
			.fun<static_cast<PackedInt32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_edge_faces)>("get_edge_faces")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Variant &)>(&MeshDataTool::set_edge_meta)>("set_edge_meta")
			.fun<static_cast<Variant (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_edge_meta)>("get_edge_meta")
			.fun<static_cast<int32_t (MeshDataTool::*)(int32_t, int32_t) const>(&MeshDataTool::get_face_vertex)>("get_face_vertex")
			.fun<static_cast<int32_t (MeshDataTool::*)(int32_t, int32_t) const>(&MeshDataTool::get_face_edge)>("get_face_edge")
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Variant &)>(&MeshDataTool::set_face_meta)>("set_face_meta")
			.fun<static_cast<Variant (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_face_meta)>("get_face_meta")
			.fun<static_cast<Vector3 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_face_normal)>("get_face_normal")
			.fun<static_cast<void (MeshDataTool::*)(const Ref<Material> &)>(&MeshDataTool::set_material)>("set_material")
			.fun<static_cast<Ref<Material> (MeshDataTool::*)() const>(&MeshDataTool::get_material)>("get_material");
}