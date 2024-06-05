#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ImporterMesh() {
	qjs::Context::Module &_module = _General;
	_module.class_<ImporterMesh>("ImporterMesh")
			.constructor<>()
			.fun<static_cast<void (ImporterMesh::*)(const String &)>(&ImporterMesh::add_blend_shape)>("add_blend_shape")
			.fun<static_cast<int32_t (ImporterMesh::*)() const>(&ImporterMesh::get_blend_shape_count)>("get_blend_shape_count")
			.fun<static_cast<String (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_blend_shape_name)>("get_blend_shape_name")
			.fun<static_cast<void (ImporterMesh::*)(Mesh::BlendShapeMode)>(&ImporterMesh::set_blend_shape_mode)>("set_blend_shape_mode")
			.fun<static_cast<Mesh::BlendShapeMode (ImporterMesh::*)() const>(&ImporterMesh::get_blend_shape_mode)>("get_blend_shape_mode")
			.fun<static_cast<void (ImporterMesh::*)(Mesh::PrimitiveType, const Array &, const TypedArray<Array> &, const Dictionary &, const Ref<Material> &, const String &, uint64_t)>(&ImporterMesh::add_surface)>("add_surface")
			.fun<static_cast<int32_t (ImporterMesh::*)() const>(&ImporterMesh::get_surface_count)>("get_surface_count")
			.fun<static_cast<Mesh::PrimitiveType (ImporterMesh::*)(int32_t)>(&ImporterMesh::get_surface_primitive_type)>("get_surface_primitive_type")
			.fun<static_cast<String (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_name)>("get_surface_name")
			.fun<static_cast<Array (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_arrays)>("get_surface_arrays")
			.fun<static_cast<Array (ImporterMesh::*)(int32_t, int32_t) const>(&ImporterMesh::get_surface_blend_shape_arrays)>("get_surface_blend_shape_arrays")
			.fun<static_cast<int32_t (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_lod_count)>("get_surface_lod_count")
			.fun<static_cast<double (ImporterMesh::*)(int32_t, int32_t) const>(&ImporterMesh::get_surface_lod_size)>("get_surface_lod_size")
			.fun<static_cast<PackedInt32Array (ImporterMesh::*)(int32_t, int32_t) const>(&ImporterMesh::get_surface_lod_indices)>("get_surface_lod_indices")
			.fun<static_cast<Ref<Material> (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_material)>("get_surface_material")
			.fun<static_cast<uint64_t (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_format)>("get_surface_format")
			.fun<static_cast<void (ImporterMesh::*)(int32_t, const String &)>(&ImporterMesh::set_surface_name)>("set_surface_name")
			.fun<static_cast<void (ImporterMesh::*)(int32_t, const Ref<Material> &)>(&ImporterMesh::set_surface_material)>("set_surface_material")
			.fun<static_cast<void (ImporterMesh::*)(double, double, const Array &)>(&ImporterMesh::generate_lods)>("generate_lods")
			.fun<static_cast<Ref<ArrayMesh> (ImporterMesh::*)(const Ref<ArrayMesh> &)>(&ImporterMesh::get_mesh)>("get_mesh")
			.fun<static_cast<void (ImporterMesh::*)()>(&ImporterMesh::clear)>("clear")
			.fun<static_cast<void (ImporterMesh::*)(const Vector2i &)>(&ImporterMesh::set_lightmap_size_hint)>("set_lightmap_size_hint")
			.fun<static_cast<Vector2i (ImporterMesh::*)() const>(&ImporterMesh::get_lightmap_size_hint)>("get_lightmap_size_hint");
}