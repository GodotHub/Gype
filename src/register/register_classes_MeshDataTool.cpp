
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh_data_tool.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_MeshDataTool() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<MeshDataTool>("MeshDataTool")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (MeshDataTool::*)()>(&MeshDataTool::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<Error (MeshDataTool::*)(const Ref<ArrayMesh> &, int32_t)>(&MeshDataTool::create_from_surface)>((new std::string("create_from_surface"))->c_str())
			.fun<static_cast<Error (MeshDataTool::*)(const Ref<ArrayMesh> &, uint64_t)>(&MeshDataTool::commit_to_surface)>((new std::string("commit_to_surface"))->c_str())
			.fun<static_cast<uint64_t (MeshDataTool::*)() const>(&MeshDataTool::get_format)>((new std::string("get_format"))->c_str())
			.fun<static_cast<int32_t (MeshDataTool::*)() const>(&MeshDataTool::get_vertex_count)>((new std::string("get_vertex_count"))->c_str())
			.fun<static_cast<int32_t (MeshDataTool::*)() const>(&MeshDataTool::get_edge_count)>((new std::string("get_edge_count"))->c_str())
			.fun<static_cast<int32_t (MeshDataTool::*)() const>(&MeshDataTool::get_face_count)>((new std::string("get_face_count"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Vector3 &)>(&MeshDataTool::set_vertex)>((new std::string("set_vertex"))->c_str())
			.fun<static_cast<Vector3 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex)>((new std::string("get_vertex"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Vector3 &)>(&MeshDataTool::set_vertex_normal)>((new std::string("set_vertex_normal"))->c_str())
			.fun<static_cast<Vector3 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_normal)>((new std::string("get_vertex_normal"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Plane &)>(&MeshDataTool::set_vertex_tangent)>((new std::string("set_vertex_tangent"))->c_str())
			.fun<static_cast<Plane (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_tangent)>((new std::string("get_vertex_tangent"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Vector2 &)>(&MeshDataTool::set_vertex_uv)>((new std::string("set_vertex_uv"))->c_str())
			.fun<static_cast<Vector2 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_uv)>((new std::string("get_vertex_uv"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Vector2 &)>(&MeshDataTool::set_vertex_uv2)>((new std::string("set_vertex_uv2"))->c_str())
			.fun<static_cast<Vector2 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_uv2)>((new std::string("get_vertex_uv2"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Color &)>(&MeshDataTool::set_vertex_color)>((new std::string("set_vertex_color"))->c_str())
			.fun<static_cast<Color (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_color)>((new std::string("get_vertex_color"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const PackedInt32Array &)>(&MeshDataTool::set_vertex_bones)>((new std::string("set_vertex_bones"))->c_str())
			.fun<static_cast<PackedInt32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_bones)>((new std::string("get_vertex_bones"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const PackedFloat32Array &)>(&MeshDataTool::set_vertex_weights)>((new std::string("set_vertex_weights"))->c_str())
			.fun<static_cast<PackedFloat32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_weights)>((new std::string("get_vertex_weights"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Variant &)>(&MeshDataTool::set_vertex_meta)>((new std::string("set_vertex_meta"))->c_str())
			.fun<static_cast<Variant (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_meta)>((new std::string("get_vertex_meta"))->c_str())
			.fun<static_cast<PackedInt32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_edges)>((new std::string("get_vertex_edges"))->c_str())
			.fun<static_cast<PackedInt32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_vertex_faces)>((new std::string("get_vertex_faces"))->c_str())
			.fun<static_cast<int32_t (MeshDataTool::*)(int32_t, int32_t) const>(&MeshDataTool::get_edge_vertex)>((new std::string("get_edge_vertex"))->c_str())
			.fun<static_cast<PackedInt32Array (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_edge_faces)>((new std::string("get_edge_faces"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Variant &)>(&MeshDataTool::set_edge_meta)>((new std::string("set_edge_meta"))->c_str())
			.fun<static_cast<Variant (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_edge_meta)>((new std::string("get_edge_meta"))->c_str())
			.fun<static_cast<int32_t (MeshDataTool::*)(int32_t, int32_t) const>(&MeshDataTool::get_face_vertex)>((new std::string("get_face_vertex"))->c_str())
			.fun<static_cast<int32_t (MeshDataTool::*)(int32_t, int32_t) const>(&MeshDataTool::get_face_edge)>((new std::string("get_face_edge"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(int32_t, const Variant &)>(&MeshDataTool::set_face_meta)>((new std::string("set_face_meta"))->c_str())
			.fun<static_cast<Variant (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_face_meta)>((new std::string("get_face_meta"))->c_str())
			.fun<static_cast<Vector3 (MeshDataTool::*)(int32_t) const>(&MeshDataTool::get_face_normal)>((new std::string("get_face_normal"))->c_str())
			.fun<static_cast<void (MeshDataTool::*)(const Ref<Material> &)>(&MeshDataTool::set_material)>((new std::string("set_material"))->c_str())
			.fun<static_cast<Ref<Material> (MeshDataTool::*)() const>(&MeshDataTool::get_material)>((new std::string("get_material"))->c_str());
}