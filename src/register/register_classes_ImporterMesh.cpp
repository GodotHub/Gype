
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ImporterMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ImporterMesh>("ImporterMesh")
			.constructor<>()
			.base<Resource>()
			.fun<static_cast<void (ImporterMesh::*)(const String &)>(&ImporterMesh::add_blend_shape)>((new std::string("add_blend_shape"))->c_str())
			.fun<static_cast<int32_t (ImporterMesh::*)() const>(&ImporterMesh::get_blend_shape_count)>((new std::string("get_blend_shape_count"))->c_str())
			.fun<static_cast<String (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_blend_shape_name)>((new std::string("get_blend_shape_name"))->c_str())
			.fun<static_cast<void (ImporterMesh::*)(Mesh::BlendShapeMode)>(&ImporterMesh::set_blend_shape_mode)>((new std::string("set_blend_shape_mode"))->c_str())
			.fun<static_cast<Mesh::BlendShapeMode (ImporterMesh::*)() const>(&ImporterMesh::get_blend_shape_mode)>((new std::string("get_blend_shape_mode"))->c_str())
			.fun<static_cast<void (ImporterMesh::*)(Mesh::PrimitiveType, const Array &, const TypedArray<Array> &, const Dictionary &, const Ref<Material> &, const String &, uint64_t)>(&ImporterMesh::add_surface)>((new std::string("add_surface"))->c_str())
			.fun<static_cast<int32_t (ImporterMesh::*)() const>(&ImporterMesh::get_surface_count)>((new std::string("get_surface_count"))->c_str())
			.fun<static_cast<Mesh::PrimitiveType (ImporterMesh::*)(int32_t)>(&ImporterMesh::get_surface_primitive_type)>((new std::string("get_surface_primitive_type"))->c_str())
			.fun<static_cast<String (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_name)>((new std::string("get_surface_name"))->c_str())
			.fun<static_cast<Array (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_arrays)>((new std::string("get_surface_arrays"))->c_str())
			.fun<static_cast<Array (ImporterMesh::*)(int32_t, int32_t) const>(&ImporterMesh::get_surface_blend_shape_arrays)>((new std::string("get_surface_blend_shape_arrays"))->c_str())
			.fun<static_cast<int32_t (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_lod_count)>((new std::string("get_surface_lod_count"))->c_str())
			.fun<static_cast<double (ImporterMesh::*)(int32_t, int32_t) const>(&ImporterMesh::get_surface_lod_size)>((new std::string("get_surface_lod_size"))->c_str())
			.fun<static_cast<PackedInt32Array (ImporterMesh::*)(int32_t, int32_t) const>(&ImporterMesh::get_surface_lod_indices)>((new std::string("get_surface_lod_indices"))->c_str())
			.fun<static_cast<Ref<Material> (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_material)>((new std::string("get_surface_material"))->c_str())
			.fun<static_cast<uint64_t (ImporterMesh::*)(int32_t) const>(&ImporterMesh::get_surface_format)>((new std::string("get_surface_format"))->c_str())
			.fun<static_cast<void (ImporterMesh::*)(int32_t, const String &)>(&ImporterMesh::set_surface_name)>((new std::string("set_surface_name"))->c_str())
			.fun<static_cast<void (ImporterMesh::*)(int32_t, const Ref<Material> &)>(&ImporterMesh::set_surface_material)>((new std::string("set_surface_material"))->c_str())
			.fun<static_cast<void (ImporterMesh::*)(double, double, const Array &)>(&ImporterMesh::generate_lods)>((new std::string("generate_lods"))->c_str())
			.fun<static_cast<Ref<ArrayMesh> (ImporterMesh::*)(const Ref<ArrayMesh> &)>(&ImporterMesh::get_mesh)>((new std::string("get_mesh"))->c_str())
			.fun<static_cast<void (ImporterMesh::*)()>(&ImporterMesh::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (ImporterMesh::*)(const Vector2i &)>(&ImporterMesh::set_lightmap_size_hint)>((new std::string("set_lightmap_size_hint"))->c_str())
			.fun<static_cast<Vector2i (ImporterMesh::*)() const>(&ImporterMesh::get_lightmap_size_hint)>((new std::string("get_lightmap_size_hint"))->c_str());
}