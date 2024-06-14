
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/surface_tool.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/transform3d.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector3.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_SurfaceTool() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<SurfaceTool>("SurfaceTool")
			.constructor<>()
			.base<RefCounted>()
			.fun<static_cast<void (SurfaceTool::*)(SurfaceTool::SkinWeightCount)>(&SurfaceTool::set_skin_weight_count)>((new std::string("set_skin_weight_count"))->c_str())
			.fun<static_cast<SurfaceTool::SkinWeightCount (SurfaceTool::*)() const>(&SurfaceTool::get_skin_weight_count)>((new std::string("get_skin_weight_count"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(int32_t, SurfaceTool::CustomFormat)>(&SurfaceTool::set_custom_format)>((new std::string("set_custom_format"))->c_str())
			.fun<static_cast<SurfaceTool::CustomFormat (SurfaceTool::*)(int32_t) const>(&SurfaceTool::get_custom_format)>((new std::string("get_custom_format"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(Mesh::PrimitiveType)>(&SurfaceTool::begin)>((new std::string("begin"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Vector3 &)>(&SurfaceTool::add_vertex)>((new std::string("add_vertex"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Color &)>(&SurfaceTool::set_color)>((new std::string("set_color"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Vector3 &)>(&SurfaceTool::set_normal)>((new std::string("set_normal"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Plane &)>(&SurfaceTool::set_tangent)>((new std::string("set_tangent"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Vector2 &)>(&SurfaceTool::set_uv)>((new std::string("set_uv"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Vector2 &)>(&SurfaceTool::set_uv2)>((new std::string("set_uv2"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const PackedInt32Array &)>(&SurfaceTool::set_bones)>((new std::string("set_bones"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const PackedFloat32Array &)>(&SurfaceTool::set_weights)>((new std::string("set_weights"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(int32_t, const Color &)>(&SurfaceTool::set_custom)>((new std::string("set_custom"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(uint32_t)>(&SurfaceTool::set_smooth_group)>((new std::string("set_smooth_group"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const PackedVector3Array &, const PackedVector2Array &, const PackedColorArray &, const PackedVector2Array &, const PackedVector3Array &, const TypedArray<Plane> &)>(&SurfaceTool::add_triangle_fan)>((new std::string("add_triangle_fan"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(int32_t)>(&SurfaceTool::add_index)>((new std::string("add_index"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)()>(&SurfaceTool::index)>((new std::string("index"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)()>(&SurfaceTool::deindex)>((new std::string("deindex"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(bool)>(&SurfaceTool::generate_normals)>((new std::string("generate_normals"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)()>(&SurfaceTool::generate_tangents)>((new std::string("generate_tangents"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)()>(&SurfaceTool::optimize_indices_for_cache)>((new std::string("optimize_indices_for_cache"))->c_str())
			.fun<static_cast<AABB (SurfaceTool::*)() const>(&SurfaceTool::get_aabb)>((new std::string("get_aabb"))->c_str())
			.fun<static_cast<PackedInt32Array (SurfaceTool::*)(double, int32_t)>(&SurfaceTool::generate_lod)>((new std::string("generate_lod"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Ref<Material> &)>(&SurfaceTool::set_material)>((new std::string("set_material"))->c_str())
			.fun<static_cast<Mesh::PrimitiveType (SurfaceTool::*)() const>(&SurfaceTool::get_primitive_type)>((new std::string("get_primitive_type"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)()>(&SurfaceTool::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Ref<Mesh> &, int32_t)>(&SurfaceTool::create_from)>((new std::string("create_from"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Array &, Mesh::PrimitiveType)>(&SurfaceTool::create_from_arrays)>((new std::string("create_from_arrays"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Ref<Mesh> &, int32_t, const String &)>(&SurfaceTool::create_from_blend_shape)>((new std::string("create_from_blend_shape"))->c_str())
			.fun<static_cast<void (SurfaceTool::*)(const Ref<Mesh> &, int32_t, const Transform3D &)>(&SurfaceTool::append_from)>((new std::string("append_from"))->c_str())
			.fun<static_cast<Ref<ArrayMesh> (SurfaceTool::*)(const Ref<ArrayMesh> &, uint64_t)>(&SurfaceTool::commit)>((new std::string("commit"))->c_str())
			.fun<static_cast<Array (SurfaceTool::*)()>(&SurfaceTool::commit_to_arrays)>((new std::string("commit_to_arrays"))->c_str());
	qjs::Value _CustomFormat = context->newObject();
	_CustomFormat[(new std::string("CUSTOM_RGBA8_UNORM"))->c_str()] = SurfaceTool::CustomFormat::CUSTOM_RGBA8_UNORM;
	_CustomFormat[(new std::string("CUSTOM_RGBA8_SNORM"))->c_str()] = SurfaceTool::CustomFormat::CUSTOM_RGBA8_SNORM;
	_CustomFormat[(new std::string("CUSTOM_RG_HALF"))->c_str()] = SurfaceTool::CustomFormat::CUSTOM_RG_HALF;
	_CustomFormat[(new std::string("CUSTOM_RGBA_HALF"))->c_str()] = SurfaceTool::CustomFormat::CUSTOM_RGBA_HALF;
	_CustomFormat[(new std::string("CUSTOM_R_FLOAT"))->c_str()] = SurfaceTool::CustomFormat::CUSTOM_R_FLOAT;
	_CustomFormat[(new std::string("CUSTOM_RG_FLOAT"))->c_str()] = SurfaceTool::CustomFormat::CUSTOM_RG_FLOAT;
	_CustomFormat[(new std::string("CUSTOM_RGB_FLOAT"))->c_str()] = SurfaceTool::CustomFormat::CUSTOM_RGB_FLOAT;
	_CustomFormat[(new std::string("CUSTOM_RGBA_FLOAT"))->c_str()] = SurfaceTool::CustomFormat::CUSTOM_RGBA_FLOAT;
	_CustomFormat[(new std::string("CUSTOM_MAX"))->c_str()] = SurfaceTool::CustomFormat::CUSTOM_MAX;
	_module.add("CustomFormat", std::move(_CustomFormat));
	qjs::Value _SkinWeightCount = context->newObject();
	_SkinWeightCount[(new std::string("SKIN_4_WEIGHTS"))->c_str()] = SurfaceTool::SkinWeightCount::SKIN_4_WEIGHTS;
	_SkinWeightCount[(new std::string("SKIN_8_WEIGHTS"))->c_str()] = SurfaceTool::SkinWeightCount::SKIN_8_WEIGHTS;
	_module.add("SkinWeightCount", std::move(_SkinWeightCount));
}