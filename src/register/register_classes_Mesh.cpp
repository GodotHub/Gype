#include <godot_cpp/classes/concave_polygon_shape3d.hpp>
#include <godot_cpp/classes/convex_polygon_shape3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Mesh() {
	qjs::Context::Module &_module = _General;
	_module.class_<Mesh>("Mesh")
			.constructor<>()
			.property<&Mesh::get_lightmap_size_hint, &Mesh::set_lightmap_size_hint>("lightmap_size_hint")
			.fun<static_cast<int32_t (Mesh::*)() const>(&Mesh::_get_surface_count)>("_get_surface_count")
			.fun<static_cast<int32_t (Mesh::*)(int32_t) const>(&Mesh::_surface_get_array_len)>("_surface_get_array_len")
			.fun<static_cast<int32_t (Mesh::*)(int32_t) const>(&Mesh::_surface_get_array_index_len)>("_surface_get_array_index_len")
			.fun<static_cast<Array (Mesh::*)(int32_t) const>(&Mesh::_surface_get_arrays)>("_surface_get_arrays")
			.fun<static_cast<TypedArray<Array> (Mesh::*)(int32_t) const>(&Mesh::_surface_get_blend_shape_arrays)>("_surface_get_blend_shape_arrays")
			.fun<static_cast<Dictionary (Mesh::*)(int32_t) const>(&Mesh::_surface_get_lods)>("_surface_get_lods")
			.fun<static_cast<uint32_t (Mesh::*)(int32_t) const>(&Mesh::_surface_get_format)>("_surface_get_format")
			.fun<static_cast<uint32_t (Mesh::*)(int32_t) const>(&Mesh::_surface_get_primitive_type)>("_surface_get_primitive_type")
			.fun<static_cast<void (Mesh::*)(int32_t, const Ref<Material> &)>(&Mesh::_surface_set_material)>("_surface_set_material")
			.fun<static_cast<Ref<Material> (Mesh::*)(int32_t) const>(&Mesh::_surface_get_material)>("_surface_get_material")
			.fun<static_cast<int32_t (Mesh::*)() const>(&Mesh::_get_blend_shape_count)>("_get_blend_shape_count")
			.fun<static_cast<StringName (Mesh::*)(int32_t) const>(&Mesh::_get_blend_shape_name)>("_get_blend_shape_name")
			.fun<static_cast<void (Mesh::*)(int32_t, const StringName &)>(&Mesh::_set_blend_shape_name)>("_set_blend_shape_name")
			.fun<static_cast<AABB (Mesh::*)() const>(&Mesh::_get_aabb)>("_get_aabb")
			.fun<static_cast<AABB (Mesh::*)() const>(&Mesh::get_aabb)>("get_aabb")
			.fun<static_cast<PackedVector3Array (Mesh::*)() const>(&Mesh::get_faces)>("get_faces")
			.fun<static_cast<int32_t (Mesh::*)() const>(&Mesh::get_surface_count)>("get_surface_count")
			.fun<static_cast<Array (Mesh::*)(int32_t) const>(&Mesh::surface_get_arrays)>("surface_get_arrays")
			.fun<static_cast<TypedArray<Array> (Mesh::*)(int32_t) const>(&Mesh::surface_get_blend_shape_arrays)>("surface_get_blend_shape_arrays")
			.fun<static_cast<void (Mesh::*)(int32_t, const Ref<Material> &)>(&Mesh::surface_set_material)>("surface_set_material")
			.fun<static_cast<Ref<Material> (Mesh::*)(int32_t) const>(&Mesh::surface_get_material)>("surface_get_material")
			.fun<static_cast<Ref<Resource> (Mesh::*)() const>(&Mesh::create_placeholder)>("create_placeholder")
			.fun<static_cast<Ref<ConcavePolygonShape3D> (Mesh::*)() const>(&Mesh::create_trimesh_shape)>("create_trimesh_shape")
			.fun<static_cast<Ref<ConvexPolygonShape3D> (Mesh::*)(bool, bool) const>(&Mesh::create_convex_shape)>("create_convex_shape")
			.fun<static_cast<Ref<Mesh> (Mesh::*)(double) const>(&Mesh::create_outline)>("create_outline")
			.fun<static_cast<Ref<TriangleMesh> (Mesh::*)() const>(&Mesh::generate_triangle_mesh)>("generate_triangle_mesh");
}