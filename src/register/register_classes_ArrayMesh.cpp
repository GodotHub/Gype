#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/core/type_info.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_ArrayMesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<ArrayMesh>("ArrayMesh")
			.constructor<>()
			.property<&ArrayMesh::get_blend_shape_mode, &ArrayMesh::set_blend_shape_mode>("blend_shape_mode")
			.property<&ArrayMesh::get_custom_aabb, &ArrayMesh::set_custom_aabb>("custom_aabb")
			.property<&ArrayMesh::get_shadow_mesh, &ArrayMesh::set_shadow_mesh>("shadow_mesh")
			.fun<static_cast<void (ArrayMesh::*)(const StringName &)>(&ArrayMesh::add_blend_shape)>("add_blend_shape")
			.fun<static_cast<int32_t (ArrayMesh::*)() const>(&ArrayMesh::get_blend_shape_count)>("get_blend_shape_count")
			.fun<static_cast<StringName (ArrayMesh::*)(int32_t) const>(&ArrayMesh::get_blend_shape_name)>("get_blend_shape_name")
			.fun<static_cast<void (ArrayMesh::*)(int32_t, const StringName &)>(&ArrayMesh::set_blend_shape_name)>("set_blend_shape_name")
			.fun<static_cast<void (ArrayMesh::*)()>(&ArrayMesh::clear_blend_shapes)>("clear_blend_shapes")
			.fun<static_cast<void (ArrayMesh::*)(Mesh::PrimitiveType, const Array &, const TypedArray<Array> &, const Dictionary &, BitField<Mesh::ArrayFormat>)>(&ArrayMesh::add_surface_from_arrays)>("add_surface_from_arrays")
			.fun<static_cast<void (ArrayMesh::*)()>(&ArrayMesh::clear_surfaces)>("clear_surfaces")
			.fun<static_cast<void (ArrayMesh::*)(int32_t, int32_t, const PackedByteArray &)>(&ArrayMesh::surface_update_vertex_region)>("surface_update_vertex_region")
			.fun<static_cast<void (ArrayMesh::*)(int32_t, int32_t, const PackedByteArray &)>(&ArrayMesh::surface_update_attribute_region)>("surface_update_attribute_region")
			.fun<static_cast<void (ArrayMesh::*)(int32_t, int32_t, const PackedByteArray &)>(&ArrayMesh::surface_update_skin_region)>("surface_update_skin_region")
			.fun<static_cast<int32_t (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_array_len)>("surface_get_array_len")
			.fun<static_cast<int32_t (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_array_index_len)>("surface_get_array_index_len")
			.fun<static_cast<BitField<Mesh::ArrayFormat> (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_format)>("surface_get_format")
			.fun<static_cast<Mesh::PrimitiveType (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_primitive_type)>("surface_get_primitive_type")
			.fun<static_cast<int32_t (ArrayMesh::*)(const String &) const>(&ArrayMesh::surface_find_by_name)>("surface_find_by_name")
			.fun<static_cast<void (ArrayMesh::*)(int32_t, const String &)>(&ArrayMesh::surface_set_name)>("surface_set_name")
			.fun<static_cast<String (ArrayMesh::*)(int32_t) const>(&ArrayMesh::surface_get_name)>("surface_get_name")
			.fun<static_cast<void (ArrayMesh::*)()>(&ArrayMesh::regen_normal_maps)>("regen_normal_maps")
			.fun<static_cast<Error (ArrayMesh::*)(const Transform3D &, double)>(&ArrayMesh::lightmap_unwrap)>("lightmap_unwrap");
}