#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/aabb.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/concave_polygon_shape3d.hpp>
#include <godot_cpp/classes/convex_polygon_shape3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_vector3_array.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Mesh() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<Mesh>("Mesh")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<Vector2i(Mesh::*)()const>(&Mesh::get_lightmap_size_hint),static_cast<void(Mesh::*)(const Vector2i &)>(&Mesh::set_lightmap_size_hint)>("lightmap_size_hint")
            .fun<static_cast<int32_t(Mesh::*)()const>(&Mesh::_get_surface_count)>("_get_surface_count")
            .fun<static_cast<int32_t(Mesh::*)(int32_t)const>(&Mesh::_surface_get_array_len)>("_surface_get_array_len")
            .fun<static_cast<int32_t(Mesh::*)(int32_t)const>(&Mesh::_surface_get_array_index_len)>("_surface_get_array_index_len")
            .fun<static_cast<Array(Mesh::*)(int32_t)const>(&Mesh::_surface_get_arrays)>("_surface_get_arrays")
            .fun<static_cast<TypedArray<Array>(Mesh::*)(int32_t)const>(&Mesh::_surface_get_blend_shape_arrays)>("_surface_get_blend_shape_arrays")
            .fun<static_cast<Dictionary(Mesh::*)(int32_t)const>(&Mesh::_surface_get_lods)>("_surface_get_lods")
            .fun<static_cast<uint32_t(Mesh::*)(int32_t)const>(&Mesh::_surface_get_format)>("_surface_get_format")
            .fun<static_cast<uint32_t(Mesh::*)(int32_t)const>(&Mesh::_surface_get_primitive_type)>("_surface_get_primitive_type")
            .fun<static_cast<void(Mesh::*)(int32_t,const Ref<Material> &)>(&Mesh::_surface_set_material)>("_surface_set_material")
            .fun<static_cast<Ref<Material>(Mesh::*)(int32_t)const>(&Mesh::_surface_get_material)>("_surface_get_material")
            .fun<static_cast<int32_t(Mesh::*)()const>(&Mesh::_get_blend_shape_count)>("_get_blend_shape_count")
            .fun<static_cast<StringName(Mesh::*)(int32_t)const>(&Mesh::_get_blend_shape_name)>("_get_blend_shape_name")
            .fun<static_cast<void(Mesh::*)(int32_t,const StringName &)>(&Mesh::_set_blend_shape_name)>("_set_blend_shape_name")
            .fun<static_cast<AABB(Mesh::*)()const>(&Mesh::_get_aabb)>("_get_aabb")
            .fun<static_cast<AABB(Mesh::*)()const>(&Mesh::get_aabb)>("get_aabb")
            .fun<static_cast<PackedVector3Array(Mesh::*)()const>(&Mesh::get_faces)>("get_faces")
            .fun<static_cast<int32_t(Mesh::*)()const>(&Mesh::get_surface_count)>("get_surface_count")
            .fun<static_cast<Array(Mesh::*)(int32_t)const>(&Mesh::surface_get_arrays)>("surface_get_arrays")
            .fun<static_cast<TypedArray<Array>(Mesh::*)(int32_t)const>(&Mesh::surface_get_blend_shape_arrays)>("surface_get_blend_shape_arrays")
            .fun<static_cast<void(Mesh::*)(int32_t,const Ref<Material> &)>(&Mesh::surface_set_material)>("surface_set_material")
            .fun<static_cast<Ref<Material>(Mesh::*)(int32_t)const>(&Mesh::surface_get_material)>("surface_get_material")
            .fun<static_cast<Ref<Resource>(Mesh::*)()const>(&Mesh::create_placeholder)>("create_placeholder")
            .fun<static_cast<Ref<ConcavePolygonShape3D>(Mesh::*)()const>(&Mesh::create_trimesh_shape)>("create_trimesh_shape")
            .fun<static_cast<Ref<ConvexPolygonShape3D>(Mesh::*)(bool,bool)const>(&Mesh::create_convex_shape)>("create_convex_shape")
            .fun<static_cast<Ref<Mesh>(Mesh::*)(double)const>(&Mesh::create_outline)>("create_outline")
            .fun<static_cast<Ref<TriangleMesh>(Mesh::*)()const>(&Mesh::generate_triangle_mesh)>("generate_triangle_mesh")
;    qjs::Value _PrimitiveType = context->newObject();
    _PrimitiveType["PRIMITIVE_POINTS"] = Mesh::PrimitiveType::PRIMITIVE_POINTS;
    _PrimitiveType["PRIMITIVE_LINES"] = Mesh::PrimitiveType::PRIMITIVE_LINES;
    _PrimitiveType["PRIMITIVE_LINE_STRIP"] = Mesh::PrimitiveType::PRIMITIVE_LINE_STRIP;
    _PrimitiveType["PRIMITIVE_TRIANGLES"] = Mesh::PrimitiveType::PRIMITIVE_TRIANGLES;
    _PrimitiveType["PRIMITIVE_TRIANGLE_STRIP"] = Mesh::PrimitiveType::PRIMITIVE_TRIANGLE_STRIP;
    _module.add("PrimitiveType", std::move(_PrimitiveType));
    qjs::Value _ArrayType = context->newObject();
    _ArrayType["ARRAY_VERTEX"] = Mesh::ArrayType::ARRAY_VERTEX;
    _ArrayType["ARRAY_NORMAL"] = Mesh::ArrayType::ARRAY_NORMAL;
    _ArrayType["ARRAY_TANGENT"] = Mesh::ArrayType::ARRAY_TANGENT;
    _ArrayType["ARRAY_COLOR"] = Mesh::ArrayType::ARRAY_COLOR;
    _ArrayType["ARRAY_TEX_UV"] = Mesh::ArrayType::ARRAY_TEX_UV;
    _ArrayType["ARRAY_TEX_UV2"] = Mesh::ArrayType::ARRAY_TEX_UV2;
    _ArrayType["ARRAY_CUSTOM0"] = Mesh::ArrayType::ARRAY_CUSTOM0;
    _ArrayType["ARRAY_CUSTOM1"] = Mesh::ArrayType::ARRAY_CUSTOM1;
    _ArrayType["ARRAY_CUSTOM2"] = Mesh::ArrayType::ARRAY_CUSTOM2;
    _ArrayType["ARRAY_CUSTOM3"] = Mesh::ArrayType::ARRAY_CUSTOM3;
    _ArrayType["ARRAY_BONES"] = Mesh::ArrayType::ARRAY_BONES;
    _ArrayType["ARRAY_WEIGHTS"] = Mesh::ArrayType::ARRAY_WEIGHTS;
    _ArrayType["ARRAY_INDEX"] = Mesh::ArrayType::ARRAY_INDEX;
    _ArrayType["ARRAY_MAX"] = Mesh::ArrayType::ARRAY_MAX;
    _module.add("ArrayType", std::move(_ArrayType));
    qjs::Value _ArrayCustomFormat = context->newObject();
    _ArrayCustomFormat["ARRAY_CUSTOM_RGBA8_UNORM"] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGBA8_UNORM;
    _ArrayCustomFormat["ARRAY_CUSTOM_RGBA8_SNORM"] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGBA8_SNORM;
    _ArrayCustomFormat["ARRAY_CUSTOM_RG_HALF"] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RG_HALF;
    _ArrayCustomFormat["ARRAY_CUSTOM_RGBA_HALF"] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGBA_HALF;
    _ArrayCustomFormat["ARRAY_CUSTOM_R_FLOAT"] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_R_FLOAT;
    _ArrayCustomFormat["ARRAY_CUSTOM_RG_FLOAT"] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RG_FLOAT;
    _ArrayCustomFormat["ARRAY_CUSTOM_RGB_FLOAT"] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGB_FLOAT;
    _ArrayCustomFormat["ARRAY_CUSTOM_RGBA_FLOAT"] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_RGBA_FLOAT;
    _ArrayCustomFormat["ARRAY_CUSTOM_MAX"] = Mesh::ArrayCustomFormat::ARRAY_CUSTOM_MAX;
    _module.add("ArrayCustomFormat", std::move(_ArrayCustomFormat));
    qjs::Value _ArrayFormat = context->newObject();
    _ArrayFormat["ARRAY_FORMAT_VERTEX"] = Mesh::ArrayFormat::ARRAY_FORMAT_VERTEX;
    _ArrayFormat["ARRAY_FORMAT_NORMAL"] = Mesh::ArrayFormat::ARRAY_FORMAT_NORMAL;
    _ArrayFormat["ARRAY_FORMAT_TANGENT"] = Mesh::ArrayFormat::ARRAY_FORMAT_TANGENT;
    _ArrayFormat["ARRAY_FORMAT_COLOR"] = Mesh::ArrayFormat::ARRAY_FORMAT_COLOR;
    _ArrayFormat["ARRAY_FORMAT_TEX_UV"] = Mesh::ArrayFormat::ARRAY_FORMAT_TEX_UV;
    _ArrayFormat["ARRAY_FORMAT_TEX_UV2"] = Mesh::ArrayFormat::ARRAY_FORMAT_TEX_UV2;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM0"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM0;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM1"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM1;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM2"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM2;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM3"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM3;
    _ArrayFormat["ARRAY_FORMAT_BONES"] = Mesh::ArrayFormat::ARRAY_FORMAT_BONES;
    _ArrayFormat["ARRAY_FORMAT_WEIGHTS"] = Mesh::ArrayFormat::ARRAY_FORMAT_WEIGHTS;
    _ArrayFormat["ARRAY_FORMAT_INDEX"] = Mesh::ArrayFormat::ARRAY_FORMAT_INDEX;
    _ArrayFormat["ARRAY_FORMAT_BLEND_SHAPE_MASK"] = Mesh::ArrayFormat::ARRAY_FORMAT_BLEND_SHAPE_MASK;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM_BASE"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM_BASE;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM_BITS"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM_BITS;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM0_SHIFT"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM0_SHIFT;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM1_SHIFT"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM1_SHIFT;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM2_SHIFT"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM2_SHIFT;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM3_SHIFT"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM3_SHIFT;
    _ArrayFormat["ARRAY_FORMAT_CUSTOM_MASK"] = Mesh::ArrayFormat::ARRAY_FORMAT_CUSTOM_MASK;
    _ArrayFormat["ARRAY_COMPRESS_FLAGS_BASE"] = Mesh::ArrayFormat::ARRAY_COMPRESS_FLAGS_BASE;
    _ArrayFormat["ARRAY_FLAG_USE_2D_VERTICES"] = Mesh::ArrayFormat::ARRAY_FLAG_USE_2D_VERTICES;
    _ArrayFormat["ARRAY_FLAG_USE_DYNAMIC_UPDATE"] = Mesh::ArrayFormat::ARRAY_FLAG_USE_DYNAMIC_UPDATE;
    _ArrayFormat["ARRAY_FLAG_USE_8_BONE_WEIGHTS"] = Mesh::ArrayFormat::ARRAY_FLAG_USE_8_BONE_WEIGHTS;
    _ArrayFormat["ARRAY_FLAG_USES_EMPTY_VERTEX_ARRAY"] = Mesh::ArrayFormat::ARRAY_FLAG_USES_EMPTY_VERTEX_ARRAY;
    _ArrayFormat["ARRAY_FLAG_COMPRESS_ATTRIBUTES"] = Mesh::ArrayFormat::ARRAY_FLAG_COMPRESS_ATTRIBUTES;
    _module.add("ArrayFormat", std::move(_ArrayFormat));
    qjs::Value _BlendShapeMode = context->newObject();
    _BlendShapeMode["BLEND_SHAPE_MODE_NORMALIZED"] = Mesh::BlendShapeMode::BLEND_SHAPE_MODE_NORMALIZED;
    _BlendShapeMode["BLEND_SHAPE_MODE_RELATIVE"] = Mesh::BlendShapeMode::BLEND_SHAPE_MODE_RELATIVE;
    _module.add("BlendShapeMode", std::move(_BlendShapeMode));
}