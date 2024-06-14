
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ArrayMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ArrayMesh>("ArrayMesh")
			.constructor<>()
			.base<Mesh>()
			.property<static_cast<Mesh::BlendShapeMode (ArrayMesh::*)() const>(&ArrayMesh::get_blend_shape_mode), static_cast<void (ArrayMesh::*)(Mesh::BlendShapeMode)>(&ArrayMesh::set_blend_shape_mode)>((new std::string("blend_shape_mode"))->c_str())
			.property<static_cast<AABB (ArrayMesh::*)() const>(&ArrayMesh::get_custom_aabb), static_cast<void (ArrayMesh::*)(const AABB &)>(&ArrayMesh::set_custom_aabb)>((new std::string("custom_aabb"))->c_str())
			.property<static_cast<Ref<ArrayMesh> (ArrayMesh::*)() const>(&ArrayMesh::get_shadow_mesh), static_cast<void (ArrayMesh::*)(const Ref<ArrayMesh> &)>(&ArrayMesh::set_shadow_mesh)>((new std::string("shadow_mesh"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)(const StringName &)>(&ArrayMesh::add_blend_shape)>((new std::string("add_blend_shape"))->c_str())
			.fun<static_cast<int32_t (ArrayMesh::*)() const>(&ArrayMesh::get_blend_shape_count)>((new std::string("get_blend_shape_count"))->c_str())
			.fun<static_cast<StringName (ArrayMesh::*)(int32_t) const>(&ArrayMesh::get_blend_shape_name)>((new std::string("get_blend_shape_name"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)(int32_t, const StringName &)>(&ArrayMesh::set_blend_shape_name)>((new std::string("set_blend_shape_name"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)()>(&ArrayMesh::clear_blend_shapes)>((new std::string("clear_blend_shapes"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)(Mesh::PrimitiveType, const Array &, const TypedArray<Array> &, const Dictionary &, BitField<Mesh::ArrayFormat>)>(&ArrayMesh::add_surface_from_arrays)>((new std::string("add_surface_from_arrays"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)()>(&ArrayMesh::clear_surfaces)>((new std::string("clear_surfaces"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)(int32_t, int32_t, const PackedByteArray &)>(&ArrayMesh::surface_update_vertex_region)>((new std::string("surface_update_vertex_region"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)(int32_t, int32_t, const PackedByteArray &)>(&ArrayMesh::surface_update_attribute_region)>((new std::string("surface_update_attribute_region"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)(int32_t, int32_t, const PackedByteArray &)>(&ArrayMesh::surface_update_skin_region)>((new std::string("surface_update_skin_region"))->c_str())
			.fun<static_cast<int32_t (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_array_len)>((new std::string("surface_get_array_len"))->c_str())
			.fun<static_cast<int32_t (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_array_index_len)>((new std::string("surface_get_array_index_len"))->c_str())
			.fun<static_cast<BitField<Mesh::ArrayFormat> (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_format)>((new std::string("surface_get_format"))->c_str())
			.fun<static_cast<Mesh::PrimitiveType (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_primitive_type)>((new std::string("surface_get_primitive_type"))->c_str())
			.fun<static_cast<int32_t (ArrayMesh::*)(const String &) const>(&ArrayMesh::surface_find_by_name)>((new std::string("surface_find_by_name"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)(int32_t, const String &)>(&ArrayMesh::surface_set_name)>((new std::string("surface_set_name"))->c_str())
			.fun<static_cast<String (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_name)>((new std::string("surface_get_name"))->c_str())
			.fun<static_cast<void (ArrayMesh::*)()>(&ArrayMesh::regen_normal_maps)>((new std::string("regen_normal_maps"))->c_str())
			.fun<static_cast<Error (ArrayMesh::*)(const Transform3D &, double)>(&ArrayMesh::lightmap_unwrap)>((new std::string("lightmap_unwrap"))->c_str());
}