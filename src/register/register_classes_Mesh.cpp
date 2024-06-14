
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
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Mesh() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<Mesh>("Mesh")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<Vector2i (Mesh::*)() const>(&Mesh::get_lightmap_size_hint), static_cast<void (Mesh::*)(const Vector2i &)>(&Mesh::set_lightmap_size_hint)>((new std::string("lightmap_size_hint"))->c_str())
			.fun<static_cast<int32_t (Mesh::*)() const>(&Mesh::_get_surface_count)>((new std::string("_get_surface_count"))->c_str())
			.fun<static_cast<int32_t (Mesh::*)(int32_t) const>(&Mesh::_surface_get_array_len)>((new std::string("_surface_get_array_len"))->c_str())
			.fun<static_cast<int32_t (Mesh::*)(int32_t) const>(&Mesh::_surface_get_array_index_len)>((new std::string("_surface_get_array_index_len"))->c_str())
			.fun<static_cast<Array (Mesh::*)(int32_t) const>(&Mesh::_surface_get_arrays)>((new std::string("_surface_get_arrays"))->c_str())
			.fun<static_cast<TypedArray<Array> (Mesh::*)(int32_t) const>(&Mesh::_surface_get_blend_shape_arrays)>((new std::string("_surface_get_blend_shape_arrays"))->c_str())
			.fun<static_cast<Dictionary (Mesh::*)(int32_t) const>(&Mesh::_surface_get_lods)>((new std::string("_surface_get_lods"))->c_str())
			.fun<static_cast<uint32_t (Mesh::*)(int32_t) const>(&Mesh::_surface_get_format)>((new std::string("_surface_get_format"))->c_str())
			.fun<static_cast<uint32_t (Mesh::*)(int32_t) const>(&Mesh::_surface_get_primitive_type)>((new std::string("_surface_get_primitive_type"))->c_str())
			.fun<static_cast<void (Mesh::*)(int32_t, const Ref<Material> &)>(&Mesh::_surface_set_material)>((new std::string("_surface_set_material"))->c_str())
			.fun<static_cast<Ref<Material> (Mesh::*)(int32_t) const>(&Mesh::_surface_get_material)>((new std::string("_surface_get_material"))->c_str())
			.fun<static_cast<int32_t (Mesh::*)() const>(&Mesh::_get_blend_shape_count)>((new std::string("_get_blend_shape_count"))->c_str())
			.fun<static_cast<StringName (Mesh::*)(int32_t) const>(&Mesh::_get_blend_shape_name)>((new std::string("_get_blend_shape_name"))->c_str())
			.fun<static_cast<void (Mesh::*)(int32_t, const StringName &)>(&Mesh::_set_blend_shape_name)>((new std::string("_set_blend_shape_name"))->c_str())
			.fun<static_cast<AABB (Mesh::*)() const>(&Mesh::_get_aabb)>((new std::string("_get_aabb"))->c_str())
			.fun<static_cast<AABB (Mesh::*)() const>(&Mesh::get_aabb)>((new std::string("get_aabb"))->c_str())
			.fun<static_cast<PackedVector3Array (Mesh::*)() const>(&Mesh::get_faces)>((new std::string("get_faces"))->c_str())
			.fun<static_cast<int32_t (Mesh::*)() const>(&Mesh::get_surface_count)>((new std::string("get_surface_count"))->c_str())
			.fun<static_cast<Array (Mesh::*)(int32_t) const>(&Mesh::surface_get_arrays)>((new std::string("surface_get_arrays"))->c_str())
			.fun<static_cast<TypedArray<Array> (Mesh::*)(int32_t) const>(&Mesh::surface_get_blend_shape_arrays)>((new std::string("surface_get_blend_shape_arrays"))->c_str())
			.fun<static_cast<void (Mesh::*)(int32_t, const Ref<Material> &)>(&Mesh::surface_set_material)>((new std::string("surface_set_material"))->c_str())
			.fun<static_cast<Ref<Material> (Mesh::*)(int32_t) const>(&Mesh::surface_get_material)>((new std::string("surface_get_material"))->c_str())
			.fun<static_cast<Ref<Resource> (Mesh::*)() const>(&Mesh::create_placeholder)>((new std::string("create_placeholder"))->c_str())
			.fun<static_cast<Ref<ConcavePolygonShape3D> (Mesh::*)() const>(&Mesh::create_trimesh_shape)>((new std::string("create_trimesh_shape"))->c_str())
			.fun<static_cast<Ref<ConvexPolygonShape3D> (Mesh::*)(bool, bool) const>(&Mesh::create_convex_shape)>((new std::string("create_convex_shape"))->c_str())
			.fun<static_cast<Ref<Mesh> (Mesh::*)(double) const>(&Mesh::create_outline)>((new std::string("create_outline"))->c_str())
			.fun<static_cast<Ref<TriangleMesh> (Mesh::*)() const>(&Mesh::generate_triangle_mesh)>((new std::string("generate_triangle_mesh"))->c_str());
	qjs::Value _PrimitiveType = context->newObject();
	_PrimitiveType[(new std::string("PRIMITIVE_POINTS"))->c_str()] = Mesh::PrimitiveType::PRIMITIVE_POINTS;
	_PrimitiveType[(new std::string("PRIMITIVE_LINES"))->c_str()] = Mesh::PrimitiveType::PRIMITIVE_LINES;
	_PrimitiveType[(new std::string("PRIMITIVE_LINE_STRIP"))->c_str()] = Mesh::PrimitiveType::PRIMITIVE_LINE_STRIP;
	_PrimitiveType[(new std::string("PRIMITIVE_TRIANGLES"))->c_str()] = Mesh::PrimitiveType::PRIMITIVE_TRIANGLES;
	_PrimitiveType[(new std::string("PRIMITIVE_TRIANGLE_STRIP"))->c_str()] = Mesh::PrimitiveType::PRIMITIVE_TRIANGLE_STRIP;
	_module.add("PrimitiveType", std::move(_PrimitiveType));
	qjs::Value _ArrayType = context->newObject();
	_ArrayType[(new std::string("ARRAY_VERTEX"))->c_str()] = Mesh::ArrayType::ARRAY_VERTEX;
	_ArrayType[(new std::string("ARRAY_NORMAL"))->c_str()] = Mesh::ArrayType::ARRAY_NORMAL;
	_ArrayType[(new std::string("ARRAY_TANGENT"))->c_str()] = Mesh::ArrayType::ARRAY_TANGENT;
	_ArrayType[(new std::string("ARRAY_COLOR"))->c_str()] = Mesh::ArrayType::ARRAY_COLOR;
	_ArrayType[(new std::string("ARRAY_TEX_UV"))->c_str()] = Mesh::ArrayType::ARRAY_TEX_UV;
	_ArrayType[(new std::string("ARRAY_TEX_UV2"))->c_str()] = Mesh::ArrayType::ARRAY_TEX_UV2;
	_ArrayType[(new std::string("ARRAY_CUSTOM0"))->c_str()] = Mesh::ArrayType::ARRAY_CUSTOM0;
	_ArrayType[(new std::string("ARRAY_CUSTOM1"))->c_str()] = Mesh::ArrayType::ARRAY_CUSTOM1;
	_ArrayType[(new std::string("ARRAY_CUSTOM2"))->c_str()] = Mesh::ArrayType::ARRAY_CUSTOM2;
	_ArrayType[(new std::string("ARRAY_CUSTOM3"))->c_str()] = Mesh::ArrayType::ARRAY_CUSTOM3;
	_ArrayType[(new std::string("ARRAY_BONES"))->c_str()] = Mesh::ArrayType::ARRAY_BONES;
	_ArrayType[(new std::string("ARRAY_WEIGHTS"))->c_str()] = Mesh::ArrayType::ARRAY_WEIGHTS;
	_ArrayType[(new std::string("ARRAY_INDEX"))->c_str()] = Mesh::ArrayType::ARRAY_INDEX;
	_ArrayType[(new std::string("ARRAY_MAX"))->c_str()] = Mesh::ArrayType::ARRAY_MAX;
	_module.add("ArrayType", std::move(_ArrayType));
	qjs::Value _ArrayCustomFormat = context->newObject();
	_ArrayCustomFormat[(new std::string("ARRAY_CUSTOM_RGBA8_UNORM"))->c_str()] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGBA8_UNORM;
	_ArrayCustomFormat[(new std::string("ARRAY_CUSTOM_RGBA8_SNORM"))->c_str()] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGBA8_SNORM;
	_ArrayCustomFormat[(new std::string("ARRAY_CUSTOM_RG_HALF"))->c_str()] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RG_HALF;
	_ArrayCustomFormat[(new std::string("ARRAY_CUSTOM_RGBA_HALF"))->c_str()] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGBA_HALF;
	_ArrayCustomFormat[(new std::string("ARRAY_CUSTOM_R_FLOAT"))->c_str()] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_R_FLOAT;
	_ArrayCustomFormat[(new std::string("ARRAY_CUSTOM_RG_FLOAT"))->c_str()] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RG_FLOAT;
	_ArrayCustomFormat[(new std::string("ARRAY_CUSTOM_RGB_FLOAT"))->c_str()] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGB_FLOAT;
	_ArrayCustomFormat[(new std::string("ARRAY_CUSTOM_RGBA_FLOAT"))->c_str()] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGBA_FLOAT;
	_ArrayCustomFormat[(new std::string("ARRAY_CUSTOM_MAX"))->c_str()] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_MAX;
	_module.add("ArrayCustomFormat", std::move(_ArrayCustomFormat));
	qjs::Value _ArrayFormat = context->newObject();
	_ArrayFormat[(new std::string("ARRAY_FORMAT_VERTEX"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_VERTEX;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_NORMAL"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_NORMAL;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_TANGENT"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_TANGENT;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_COLOR"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_COLOR;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_TEX_UV"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_TEX_UV;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_TEX_UV2"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_TEX_UV2;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM0"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM0;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM1"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM1;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM2"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM2;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM3"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM3;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_BONES"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_BONES;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_WEIGHTS"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_WEIGHTS;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_INDEX"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_INDEX;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_BLEND_SHAPE_MASK"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_BLEND_SHAPE_MASK;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM_BASE"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM_BASE;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM_BITS"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM_BITS;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM0_SHIFT"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM0_SHIFT;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM1_SHIFT"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM1_SHIFT;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM2_SHIFT"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM2_SHIFT;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM3_SHIFT"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM3_SHIFT;
	_ArrayFormat[(new std::string("ARRAY_FORMAT_CUSTOM_MASK"))->c_str()] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM_MASK;
	_ArrayFormat[(new std::string("ARRAY_COMPRESS_FLAGS_BASE"))->c_str()] = Mesh::ArrayFormat::ARRAY_COMPRESS_FLAGS_BASE;
	_ArrayFormat[(new std::string("ARRAY_FLAG_USE_2D_VERTICES"))->c_str()] = Mesh::ArrayFormat::ARRAY_FLAG_USE_2D_VERTICES;
	_ArrayFormat[(new std::string("ARRAY_FLAG_USE_DYNAMIC_UPDATE"))->c_str()] = Mesh::ArrayFormat::ARRAY_FLAG_USE_DYNAMIC_UPDATE;
	_ArrayFormat[(new std::string("ARRAY_FLAG_USE_8_BONE_WEIGHTS"))->c_str()] = Mesh::ArrayFormat::ARRAY_FLAG_USE_8_BONE_WEIGHTS;
	_ArrayFormat[(new std::string("ARRAY_FLAG_USES_EMPTY_VERTEX_ARRAY"))->c_str()] = Mesh::ArrayFormat::ARRAY_FLAG_USES_EMPTY_VERTEX_ARRAY;
	_ArrayFormat[(new std::string("ARRAY_FLAG_COMPRESS_ATTRIBUTES"))->c_str()] = Mesh::ArrayFormat::ARRAY_FLAG_COMPRESS_ATTRIBUTES;
	_module.add("ArrayFormat", std::move(_ArrayFormat));
	qjs::Value _BlendShapeMode = context->newObject();
	_BlendShapeMode[(new std::string("BLEND_SHAPE_MODE_NORMALIZED"))->c_str()] = Mesh::BlendShapeMode::BLEND_SHAPE_MODE_NORMALIZED;
	_BlendShapeMode[(new std::string("BLEND_SHAPE_MODE_RELATIVE"))->c_str()] = Mesh::BlendShapeMode::BLEND_SHAPE_MODE_RELATIVE;
	_module.add("BlendShapeMode", std::move(_BlendShapeMode));
}