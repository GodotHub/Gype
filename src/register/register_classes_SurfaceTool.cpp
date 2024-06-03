#include "register/register_classes.h"
#include "register/utils.h"
#include <godot_cpp/classes/surface_tool.hpp>

using namespace godot;

void register_classes_SurfaceTool() {
    qjs::Context::Module &_module = _General;
    _module.class_<SurfaceTool>("SurfaceTool")
           .constructor<>()
		    .fun<static_cast<void(SurfaceTool::*)(SurfaceTool::SkinWeightCount)>(&SurfaceTool::set_skin_weight_count)>("set_skin_weight_count")
		    .fun<static_cast<SurfaceTool::SkinWeightCount(SurfaceTool::*)()const>(&SurfaceTool::get_skin_weight_count)>("get_skin_weight_count")
		    .fun<static_cast<void(SurfaceTool::*)(int32_t,SurfaceTool::CustomFormat)>(&SurfaceTool::set_custom_format)>("set_custom_format")
		    .fun<static_cast<SurfaceTool::CustomFormat(SurfaceTool::*)(int32_t)const>(&SurfaceTool::get_custom_format)>("get_custom_format")
		    .fun<static_cast<void(SurfaceTool::*)(Mesh::PrimitiveType)>(&SurfaceTool::begin)>("begin")
		    .fun<static_cast<void(SurfaceTool::*)(const Vector3 &)>(&SurfaceTool::add_vertex)>("add_vertex")
		    .fun<static_cast<void(SurfaceTool::*)(const Color &)>(&SurfaceTool::set_color)>("set_color")
		    .fun<static_cast<void(SurfaceTool::*)(const Vector3 &)>(&SurfaceTool::set_normal)>("set_normal")
		    .fun<static_cast<void(SurfaceTool::*)(const Plane &)>(&SurfaceTool::set_tangent)>("set_tangent")
		    .fun<static_cast<void(SurfaceTool::*)(const Vector2 &)>(&SurfaceTool::set_uv)>("set_uv")
		    .fun<static_cast<void(SurfaceTool::*)(const Vector2 &)>(&SurfaceTool::set_uv2)>("set_uv2")
		    .fun<static_cast<void(SurfaceTool::*)(const PackedInt32Array &)>(&SurfaceTool::set_bones)>("set_bones")
		    .fun<static_cast<void(SurfaceTool::*)(const PackedFloat32Array &)>(&SurfaceTool::set_weights)>("set_weights")
		    .fun<static_cast<void(SurfaceTool::*)(int32_t,const Color &)>(&SurfaceTool::set_custom)>("set_custom")
		    .fun<static_cast<void(SurfaceTool::*)(uint32_t)>(&SurfaceTool::set_smooth_group)>("set_smooth_group")
		    .fun<static_cast<void(SurfaceTool::*)(const PackedVector3Array &,const PackedVector2Array &,const PackedColorArray &,const PackedVector2Array &,const PackedVector3Array &,const TypedArray<Plane> &)>(&SurfaceTool::add_triangle_fan)>("add_triangle_fan")
		    .fun<static_cast<void(SurfaceTool::*)(int32_t)>(&SurfaceTool::add_index)>("add_index")
		    .fun<static_cast<void(SurfaceTool::*)()>(&SurfaceTool::index)>("index")
		    .fun<static_cast<void(SurfaceTool::*)()>(&SurfaceTool::deindex)>("deindex")
		    .fun<static_cast<void(SurfaceTool::*)(bool)>(&SurfaceTool::generate_normals)>("generate_normals")
		    .fun<static_cast<void(SurfaceTool::*)()>(&SurfaceTool::generate_tangents)>("generate_tangents")
		    .fun<static_cast<void(SurfaceTool::*)()>(&SurfaceTool::optimize_indices_for_cache)>("optimize_indices_for_cache")
		    .fun<static_cast<AABB(SurfaceTool::*)()const>(&SurfaceTool::get_aabb)>("get_aabb")
		    .fun<static_cast<PackedInt32Array(SurfaceTool::*)(double,int32_t)>(&SurfaceTool::generate_lod)>("generate_lod")
		    .fun<static_cast<void(SurfaceTool::*)(const Ref<Material> &)>(&SurfaceTool::set_material)>("set_material")
		    .fun<static_cast<Mesh::PrimitiveType(SurfaceTool::*)()const>(&SurfaceTool::get_primitive_type)>("get_primitive_type")
		    .fun<static_cast<void(SurfaceTool::*)()>(&SurfaceTool::clear)>("clear")
		    .fun<static_cast<void(SurfaceTool::*)(const Ref<Mesh> &,int32_t)>(&SurfaceTool::create_from)>("create_from")
		    .fun<static_cast<void(SurfaceTool::*)(const Ref<Mesh> &,int32_t,const String &)>(&SurfaceTool::create_from_blend_shape)>("create_from_blend_shape")
		    .fun<static_cast<void(SurfaceTool::*)(const Ref<Mesh> &,int32_t,const Transform3D &)>(&SurfaceTool::append_from)>("append_from")
		    .fun<static_cast<Ref<ArrayMesh>(SurfaceTool::*)(const Ref<ArrayMesh> &,uint64_t)>(&SurfaceTool::commit)>("commit")
		    .fun<static_cast<Array(SurfaceTool::*)()>(&SurfaceTool::commit_to_arrays)>("commit_to_arrays")
;}