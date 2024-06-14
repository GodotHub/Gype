
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>

#include "qjspp.hpp"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TileData() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TileData>("TileData")
			.constructor<>()
			.base<Object>()
			.property<static_cast<bool (TileData::*)() const>(&TileData::get_flip_h), static_cast<void (TileData::*)(bool)>(&TileData::set_flip_h)>((new std::string("flip_h"))->c_str())
			.property<static_cast<bool (TileData::*)() const>(&TileData::get_flip_v), static_cast<void (TileData::*)(bool)>(&TileData::set_flip_v)>((new std::string("flip_v"))->c_str())
			.property<static_cast<bool (TileData::*)() const>(&TileData::get_transpose), static_cast<void (TileData::*)(bool)>(&TileData::set_transpose)>((new std::string("transpose"))->c_str())
			.property<static_cast<Vector2i (TileData::*)() const>(&TileData::get_texture_origin), static_cast<void (TileData::*)(const Vector2i &)>(&TileData::set_texture_origin)>((new std::string("texture_origin"))->c_str())
			.property<static_cast<Color (TileData::*)() const>(&TileData::get_modulate), static_cast<void (TileData::*)(const Color &)>(&TileData::set_modulate)>((new std::string("modulate"))->c_str())
			.property<static_cast<Ref<Material> (TileData::*)() const>(&TileData::get_material), static_cast<void (TileData::*)(const Ref<Material> &)>(&TileData::set_material)>((new std::string("material"))->c_str())
			.property<static_cast<int32_t (TileData::*)() const>(&TileData::get_z_index), static_cast<void (TileData::*)(int32_t)>(&TileData::set_z_index)>((new std::string("z_index"))->c_str())
			.property<static_cast<int32_t (TileData::*)() const>(&TileData::get_y_sort_origin), static_cast<void (TileData::*)(int32_t)>(&TileData::set_y_sort_origin)>((new std::string("y_sort_origin"))->c_str())
			.property<static_cast<int32_t (TileData::*)() const>(&TileData::get_terrain_set), static_cast<void (TileData::*)(int32_t)>(&TileData::set_terrain_set)>((new std::string("terrain_set"))->c_str())
			.property<static_cast<int32_t (TileData::*)() const>(&TileData::get_terrain), static_cast<void (TileData::*)(int32_t)>(&TileData::set_terrain)>((new std::string("terrain"))->c_str())
			.property<static_cast<double (TileData::*)() const>(&TileData::get_probability), static_cast<void (TileData::*)(double)>(&TileData::set_probability)>((new std::string("probability"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, const Ref<OccluderPolygon2D> &)>(&TileData::set_occluder)>((new std::string("set_occluder"))->c_str())
			.fun<static_cast<Ref<OccluderPolygon2D> (TileData::*)(int32_t, bool, bool, bool) const>(&TileData::get_occluder)>((new std::string("get_occluder"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, const Vector2 &)>(&TileData::set_constant_linear_velocity)>((new std::string("set_constant_linear_velocity"))->c_str())
			.fun<static_cast<Vector2 (TileData::*)(int32_t) const>(&TileData::get_constant_linear_velocity)>((new std::string("get_constant_linear_velocity"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, double)>(&TileData::set_constant_angular_velocity)>((new std::string("set_constant_angular_velocity"))->c_str())
			.fun<static_cast<double (TileData::*)(int32_t) const>(&TileData::get_constant_angular_velocity)>((new std::string("get_constant_angular_velocity"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, int32_t)>(&TileData::set_collision_polygons_count)>((new std::string("set_collision_polygons_count"))->c_str())
			.fun<static_cast<int32_t (TileData::*)(int32_t) const>(&TileData::get_collision_polygons_count)>((new std::string("get_collision_polygons_count"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t)>(&TileData::add_collision_polygon)>((new std::string("add_collision_polygon"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, int32_t)>(&TileData::remove_collision_polygon)>((new std::string("remove_collision_polygon"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, int32_t, const PackedVector2Array &)>(&TileData::set_collision_polygon_points)>((new std::string("set_collision_polygon_points"))->c_str())
			.fun<static_cast<PackedVector2Array (TileData::*)(int32_t, int32_t) const>(&TileData::get_collision_polygon_points)>((new std::string("get_collision_polygon_points"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, int32_t, bool)>(&TileData::set_collision_polygon_one_way)>((new std::string("set_collision_polygon_one_way"))->c_str())
			.fun<static_cast<bool (TileData::*)(int32_t, int32_t) const>(&TileData::is_collision_polygon_one_way)>((new std::string("is_collision_polygon_one_way"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, int32_t, double)>(&TileData::set_collision_polygon_one_way_margin)>((new std::string("set_collision_polygon_one_way_margin"))->c_str())
			.fun<static_cast<double (TileData::*)(int32_t, int32_t) const>(&TileData::get_collision_polygon_one_way_margin)>((new std::string("get_collision_polygon_one_way_margin"))->c_str())
			.fun<static_cast<void (TileData::*)(TileSet::CellNeighbor, int32_t)>(&TileData::set_terrain_peering_bit)>((new std::string("set_terrain_peering_bit"))->c_str())
			.fun<static_cast<int32_t (TileData::*)(TileSet::CellNeighbor) const>(&TileData::get_terrain_peering_bit)>((new std::string("get_terrain_peering_bit"))->c_str())
			.fun<static_cast<bool (TileData::*)(TileSet::CellNeighbor) const>(&TileData::is_valid_terrain_peering_bit)>((new std::string("is_valid_terrain_peering_bit"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, const Ref<NavigationPolygon> &)>(&TileData::set_navigation_polygon)>((new std::string("set_navigation_polygon"))->c_str())
			.fun<static_cast<Ref<NavigationPolygon> (TileData::*)(int32_t, bool, bool, bool) const>(&TileData::get_navigation_polygon)>((new std::string("get_navigation_polygon"))->c_str())
			.fun<static_cast<void (TileData::*)(const String &, const Variant &)>(&TileData::set_custom_data)>((new std::string("set_custom_data"))->c_str())
			.fun<static_cast<Variant (TileData::*)(const String &) const>(&TileData::get_custom_data)>((new std::string("get_custom_data"))->c_str())
			.fun<static_cast<void (TileData::*)(int32_t, const Variant &)>(&TileData::set_custom_data_by_layer_id)>((new std::string("set_custom_data_by_layer_id"))->c_str())
			.fun<static_cast<Variant (TileData::*)(int32_t) const>(&TileData::get_custom_data_by_layer_id)>((new std::string("get_custom_data_by_layer_id"))->c_str());
}