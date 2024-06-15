#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/variant/packed_vector2_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>

#include "register/register_classes.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TileData() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TileData>("TileData")
            .constructor<>()
            .base<Object>()
            .property<static_cast<bool(TileData::*)()const>(&TileData::get_flip_h),static_cast<void(TileData::*)(bool)>(&TileData::set_flip_h)>("flip_h")
            .property<static_cast<bool(TileData::*)()const>(&TileData::get_flip_v),static_cast<void(TileData::*)(bool)>(&TileData::set_flip_v)>("flip_v")
            .property<static_cast<bool(TileData::*)()const>(&TileData::get_transpose),static_cast<void(TileData::*)(bool)>(&TileData::set_transpose)>("transpose")
            .property<static_cast<Vector2i(TileData::*)()const>(&TileData::get_texture_origin),static_cast<void(TileData::*)(const Vector2i &)>(&TileData::set_texture_origin)>("texture_origin")
            .property<static_cast<Color(TileData::*)()const>(&TileData::get_modulate),static_cast<void(TileData::*)(const Color &)>(&TileData::set_modulate)>("modulate")
            .property<static_cast<Ref<Material>(TileData::*)()const>(&TileData::get_material),static_cast<void(TileData::*)(const Ref<Material> &)>(&TileData::set_material)>("material")
            .property<static_cast<int32_t(TileData::*)()const>(&TileData::get_z_index),static_cast<void(TileData::*)(int32_t)>(&TileData::set_z_index)>("z_index")
            .property<static_cast<int32_t(TileData::*)()const>(&TileData::get_y_sort_origin),static_cast<void(TileData::*)(int32_t)>(&TileData::set_y_sort_origin)>("y_sort_origin")
            .property<static_cast<int32_t(TileData::*)()const>(&TileData::get_terrain_set),static_cast<void(TileData::*)(int32_t)>(&TileData::set_terrain_set)>("terrain_set")
            .property<static_cast<int32_t(TileData::*)()const>(&TileData::get_terrain),static_cast<void(TileData::*)(int32_t)>(&TileData::set_terrain)>("terrain")
            .property<static_cast<double(TileData::*)()const>(&TileData::get_probability),static_cast<void(TileData::*)(double)>(&TileData::set_probability)>("probability")
            .fun<static_cast<void(TileData::*)(int32_t,const Ref<OccluderPolygon2D> &)>(&TileData::set_occluder)>("set_occluder")
            .fun<static_cast<Ref<OccluderPolygon2D>(TileData::*)(int32_t,bool,bool,bool)const>(&TileData::get_occluder)>("get_occluder")
            .fun<static_cast<void(TileData::*)(int32_t,const Vector2 &)>(&TileData::set_constant_linear_velocity)>("set_constant_linear_velocity")
            .fun<static_cast<Vector2(TileData::*)(int32_t)const>(&TileData::get_constant_linear_velocity)>("get_constant_linear_velocity")
            .fun<static_cast<void(TileData::*)(int32_t,double)>(&TileData::set_constant_angular_velocity)>("set_constant_angular_velocity")
            .fun<static_cast<double(TileData::*)(int32_t)const>(&TileData::get_constant_angular_velocity)>("get_constant_angular_velocity")
            .fun<static_cast<void(TileData::*)(int32_t,int32_t)>(&TileData::set_collision_polygons_count)>("set_collision_polygons_count")
            .fun<static_cast<int32_t(TileData::*)(int32_t)const>(&TileData::get_collision_polygons_count)>("get_collision_polygons_count")
            .fun<static_cast<void(TileData::*)(int32_t)>(&TileData::add_collision_polygon)>("add_collision_polygon")
            .fun<static_cast<void(TileData::*)(int32_t,int32_t)>(&TileData::remove_collision_polygon)>("remove_collision_polygon")
            .fun<static_cast<void(TileData::*)(int32_t,int32_t,const PackedVector2Array &)>(&TileData::set_collision_polygon_points)>("set_collision_polygon_points")
            .fun<static_cast<PackedVector2Array(TileData::*)(int32_t,int32_t)const>(&TileData::get_collision_polygon_points)>("get_collision_polygon_points")
            .fun<static_cast<void(TileData::*)(int32_t,int32_t,bool)>(&TileData::set_collision_polygon_one_way)>("set_collision_polygon_one_way")
            .fun<static_cast<bool(TileData::*)(int32_t,int32_t)const>(&TileData::is_collision_polygon_one_way)>("is_collision_polygon_one_way")
            .fun<static_cast<void(TileData::*)(int32_t,int32_t,double)>(&TileData::set_collision_polygon_one_way_margin)>("set_collision_polygon_one_way_margin")
            .fun<static_cast<double(TileData::*)(int32_t,int32_t)const>(&TileData::get_collision_polygon_one_way_margin)>("get_collision_polygon_one_way_margin")
            .fun<static_cast<void(TileData::*)(TileSet::CellNeighbor,int32_t)>(&TileData::set_terrain_peering_bit)>("set_terrain_peering_bit")
            .fun<static_cast<int32_t(TileData::*)(TileSet::CellNeighbor)const>(&TileData::get_terrain_peering_bit)>("get_terrain_peering_bit")
            .fun<static_cast<bool(TileData::*)(TileSet::CellNeighbor)const>(&TileData::is_valid_terrain_peering_bit)>("is_valid_terrain_peering_bit")
            .fun<static_cast<void(TileData::*)(int32_t,const Ref<NavigationPolygon> &)>(&TileData::set_navigation_polygon)>("set_navigation_polygon")
            .fun<static_cast<Ref<NavigationPolygon>(TileData::*)(int32_t,bool,bool,bool)const>(&TileData::get_navigation_polygon)>("get_navigation_polygon")
            .fun<static_cast<void(TileData::*)(const String &,const Variant &)>(&TileData::set_custom_data)>("set_custom_data")
            .fun<static_cast<Variant(TileData::*)(const String &)const>(&TileData::get_custom_data)>("get_custom_data")
            .fun<static_cast<void(TileData::*)(int32_t,const Variant &)>(&TileData::set_custom_data_by_layer_id)>("set_custom_data_by_layer_id")
            .fun<static_cast<Variant(TileData::*)(int32_t)const>(&TileData::get_custom_data_by_layer_id)>("get_custom_data_by_layer_id")
;}