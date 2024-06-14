
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/polygon2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/packed_color_array.hpp>
#include <godot_cpp/variant/packed_float32_array.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_Polygon2D() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<Polygon2D>("Polygon2D")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Color (Polygon2D::*)() const>(&Polygon2D::get_color), static_cast<void (Polygon2D::*)(const Color &)>(&Polygon2D::set_color)>((new std::string("color"))->c_str())
			.property<static_cast<Vector2 (Polygon2D::*)() const>(&Polygon2D::get_offset), static_cast<void (Polygon2D::*)(const Vector2 &)>(&Polygon2D::set_offset)>((new std::string("offset"))->c_str())
			.property<static_cast<bool (Polygon2D::*)() const>(&Polygon2D::get_antialiased), static_cast<void (Polygon2D::*)(bool)>(&Polygon2D::set_antialiased)>((new std::string("antialiased"))->c_str())
			.property<static_cast<Ref<Texture2D> (Polygon2D::*)() const>(&Polygon2D::get_texture), static_cast<void (Polygon2D::*)(const Ref<Texture2D> &)>(&Polygon2D::set_texture)>((new std::string("texture"))->c_str())
			.property<static_cast<Vector2 (Polygon2D::*)() const>(&Polygon2D::get_texture_offset), static_cast<void (Polygon2D::*)(const Vector2 &)>(&Polygon2D::set_texture_offset)>((new std::string("texture_offset"))->c_str())
			.property<static_cast<Vector2 (Polygon2D::*)() const>(&Polygon2D::get_texture_scale), static_cast<void (Polygon2D::*)(const Vector2 &)>(&Polygon2D::set_texture_scale)>((new std::string("texture_scale"))->c_str())
			.property<static_cast<double (Polygon2D::*)() const>(&Polygon2D::get_texture_rotation), static_cast<void (Polygon2D::*)(double)>(&Polygon2D::set_texture_rotation)>((new std::string("texture_rotation"))->c_str())
			.property<static_cast<NodePath (Polygon2D::*)() const>(&Polygon2D::get_skeleton), static_cast<void (Polygon2D::*)(const NodePath &)>(&Polygon2D::set_skeleton)>((new std::string("skeleton"))->c_str())
			.property<static_cast<bool (Polygon2D::*)() const>(&Polygon2D::get_invert_enabled), static_cast<void (Polygon2D::*)(bool)>(&Polygon2D::set_invert_enabled)>((new std::string("invert_enabled"))->c_str())
			.property<static_cast<double (Polygon2D::*)() const>(&Polygon2D::get_invert_border), static_cast<void (Polygon2D::*)(double)>(&Polygon2D::set_invert_border)>((new std::string("invert_border"))->c_str())
			.property<static_cast<PackedVector2Array (Polygon2D::*)() const>(&Polygon2D::get_polygon), static_cast<void (Polygon2D::*)(const PackedVector2Array &)>(&Polygon2D::set_polygon)>((new std::string("polygon"))->c_str())
			.property<static_cast<PackedVector2Array (Polygon2D::*)() const>(&Polygon2D::get_uv), static_cast<void (Polygon2D::*)(const PackedVector2Array &)>(&Polygon2D::set_uv)>((new std::string("uv"))->c_str())
			.property<static_cast<PackedColorArray (Polygon2D::*)() const>(&Polygon2D::get_vertex_colors), static_cast<void (Polygon2D::*)(const PackedColorArray &)>(&Polygon2D::set_vertex_colors)>((new std::string("vertex_colors"))->c_str())
			.property<static_cast<Array (Polygon2D::*)() const>(&Polygon2D::get_polygons), static_cast<void (Polygon2D::*)(const Array &)>(&Polygon2D::set_polygons)>((new std::string("polygons"))->c_str())
			.property<static_cast<int32_t (Polygon2D::*)() const>(&Polygon2D::get_internal_vertex_count), static_cast<void (Polygon2D::*)(int32_t)>(&Polygon2D::set_internal_vertex_count)>((new std::string("internal_vertex_count"))->c_str())
			.fun<static_cast<void (Polygon2D::*)(const NodePath &, const PackedFloat32Array &)>(&Polygon2D::add_bone)>((new std::string("add_bone"))->c_str())
			.fun<static_cast<int32_t (Polygon2D::*)() const>(&Polygon2D::get_bone_count)>((new std::string("get_bone_count"))->c_str())
			.fun<static_cast<NodePath (Polygon2D::*)(int32_t) const>(&Polygon2D::get_bone_path)>((new std::string("get_bone_path"))->c_str())
			.fun<static_cast<PackedFloat32Array (Polygon2D::*)(int32_t) const>(&Polygon2D::get_bone_weights)>((new std::string("get_bone_weights"))->c_str())
			.fun<static_cast<void (Polygon2D::*)(int32_t)>(&Polygon2D::erase_bone)>((new std::string("erase_bone"))->c_str())
			.fun<static_cast<void (Polygon2D::*)()>(&Polygon2D::clear_bones)>((new std::string("clear_bones"))->c_str())
			.fun<static_cast<void (Polygon2D::*)(int32_t, const NodePath &)>(&Polygon2D::set_bone_path)>((new std::string("set_bone_path"))->c_str())
			.fun<static_cast<void (Polygon2D::*)(int32_t, const PackedFloat32Array &)>(&Polygon2D::set_bone_weights)>((new std::string("set_bone_weights"))->c_str());
}