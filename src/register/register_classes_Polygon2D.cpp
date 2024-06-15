#include <godot_cpp/classes/polygon2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_Polygon2D() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<Polygon2D>("Polygon2D")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Color(Polygon2D::*)()const>(&Polygon2D::get_color),static_cast<void(Polygon2D::*)(const Color &)>(&Polygon2D::set_color)>("color")
            .property<static_cast<Vector2(Polygon2D::*)()const>(&Polygon2D::get_offset),static_cast<void(Polygon2D::*)(const Vector2 &)>(&Polygon2D::set_offset)>("offset")
            .property<static_cast<bool(Polygon2D::*)()const>(&Polygon2D::get_antialiased),static_cast<void(Polygon2D::*)(bool)>(&Polygon2D::set_antialiased)>("antialiased")
            .property<static_cast<Ref<Texture2D>(Polygon2D::*)()const>(&Polygon2D::get_texture),static_cast<void(Polygon2D::*)(const Ref<Texture2D> &)>(&Polygon2D::set_texture)>("texture")
            .property<static_cast<Vector2(Polygon2D::*)()const>(&Polygon2D::get_texture_offset),static_cast<void(Polygon2D::*)(const Vector2 &)>(&Polygon2D::set_texture_offset)>("texture_offset")
            .property<static_cast<Vector2(Polygon2D::*)()const>(&Polygon2D::get_texture_scale),static_cast<void(Polygon2D::*)(const Vector2 &)>(&Polygon2D::set_texture_scale)>("texture_scale")
            .property<static_cast<double(Polygon2D::*)()const>(&Polygon2D::get_texture_rotation),static_cast<void(Polygon2D::*)(double)>(&Polygon2D::set_texture_rotation)>("texture_rotation")
            .property<static_cast<NodePath(Polygon2D::*)()const>(&Polygon2D::get_skeleton),static_cast<void(Polygon2D::*)(const NodePath &)>(&Polygon2D::set_skeleton)>("skeleton")
            .property<static_cast<bool(Polygon2D::*)()const>(&Polygon2D::get_invert_enabled),static_cast<void(Polygon2D::*)(bool)>(&Polygon2D::set_invert_enabled)>("invert_enabled")
            .property<static_cast<double(Polygon2D::*)()const>(&Polygon2D::get_invert_border),static_cast<void(Polygon2D::*)(double)>(&Polygon2D::set_invert_border)>("invert_border")
            .property<static_cast<PackedVector2Array(Polygon2D::*)()const>(&Polygon2D::get_polygon),static_cast<void(Polygon2D::*)(const PackedVector2Array &)>(&Polygon2D::set_polygon)>("polygon")
            .property<static_cast<PackedVector2Array(Polygon2D::*)()const>(&Polygon2D::get_uv),static_cast<void(Polygon2D::*)(const PackedVector2Array &)>(&Polygon2D::set_uv)>("uv")
            .property<static_cast<PackedColorArray(Polygon2D::*)()const>(&Polygon2D::get_vertex_colors),static_cast<void(Polygon2D::*)(const PackedColorArray &)>(&Polygon2D::set_vertex_colors)>("vertex_colors")
            .property<static_cast<Array(Polygon2D::*)()const>(&Polygon2D::get_polygons),static_cast<void(Polygon2D::*)(const Array &)>(&Polygon2D::set_polygons)>("polygons")
            .property<static_cast<int32_t(Polygon2D::*)()const>(&Polygon2D::get_internal_vertex_count),static_cast<void(Polygon2D::*)(int32_t)>(&Polygon2D::set_internal_vertex_count)>("internal_vertex_count")
            .fun<static_cast<void(Polygon2D::*)(const NodePath &,const PackedFloat32Array &)>(&Polygon2D::add_bone)>("add_bone")
            .fun<static_cast<int32_t(Polygon2D::*)()const>(&Polygon2D::get_bone_count)>("get_bone_count")
            .fun<static_cast<NodePath(Polygon2D::*)(int32_t)const>(&Polygon2D::get_bone_path)>("get_bone_path")
            .fun<static_cast<PackedFloat32Array(Polygon2D::*)(int32_t)const>(&Polygon2D::get_bone_weights)>("get_bone_weights")
            .fun<static_cast<void(Polygon2D::*)(int32_t)>(&Polygon2D::erase_bone)>("erase_bone")
            .fun<static_cast<void(Polygon2D::*)()>(&Polygon2D::clear_bones)>("clear_bones")
            .fun<static_cast<void(Polygon2D::*)(int32_t,const NodePath &)>(&Polygon2D::set_bone_path)>("set_bone_path")
            .fun<static_cast<void(Polygon2D::*)(int32_t,const PackedFloat32Array &)>(&Polygon2D::set_bone_weights)>("set_bone_weights")
;}