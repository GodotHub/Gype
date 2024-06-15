#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TileSet() {
    qjs::Context::Module &_module = get_General_module();
    _module.class_<TileSet>("TileSet")
            .constructor<>()
            .base<Resource>()
            .property<static_cast<TileSet::TileShape(TileSet::*)()const>(&TileSet::get_tile_shape),static_cast<void(TileSet::*)(TileSet::TileShape)>(&TileSet::set_tile_shape)>("tile_shape")
            .property<static_cast<TileSet::TileLayout(TileSet::*)()const>(&TileSet::get_tile_layout),static_cast<void(TileSet::*)(TileSet::TileLayout)>(&TileSet::set_tile_layout)>("tile_layout")
            .property<static_cast<TileSet::TileOffsetAxis(TileSet::*)()const>(&TileSet::get_tile_offset_axis),static_cast<void(TileSet::*)(TileSet::TileOffsetAxis)>(&TileSet::set_tile_offset_axis)>("tile_offset_axis")
            .property<static_cast<Vector2i(TileSet::*)()const>(&TileSet::get_tile_size),static_cast<void(TileSet::*)(const Vector2i &)>(&TileSet::set_tile_size)>("tile_size")
            .property<static_cast<bool(TileSet::*)()const>(&TileSet::is_uv_clipping),static_cast<void(TileSet::*)(bool)>(&TileSet::set_uv_clipping)>("uv_clipping")
            .fun<static_cast<int32_t(TileSet::*)()const>(&TileSet::get_next_source_id)>("get_next_source_id")
            .fun<static_cast<int32_t(TileSet::*)(const Ref<TileSetSource> &,int32_t)>(&TileSet::add_source)>("add_source")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::remove_source)>("remove_source")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::set_source_id)>("set_source_id")
            .fun<static_cast<int32_t(TileSet::*)()const>(&TileSet::get_source_count)>("get_source_count")
            .fun<static_cast<int32_t(TileSet::*)(int32_t)const>(&TileSet::get_source_id)>("get_source_id")
            .fun<static_cast<bool(TileSet::*)(int32_t)const>(&TileSet::has_source)>("has_source")
            .fun<static_cast<Ref<TileSetSource>(TileSet::*)(int32_t)const>(&TileSet::get_source)>("get_source")
            .fun<static_cast<int32_t(TileSet::*)()const>(&TileSet::get_occlusion_layers_count)>("get_occlusion_layers_count")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::add_occlusion_layer)>("add_occlusion_layer")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::move_occlusion_layer)>("move_occlusion_layer")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::remove_occlusion_layer)>("remove_occlusion_layer")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::set_occlusion_layer_light_mask)>("set_occlusion_layer_light_mask")
            .fun<static_cast<int32_t(TileSet::*)(int32_t)const>(&TileSet::get_occlusion_layer_light_mask)>("get_occlusion_layer_light_mask")
            .fun<static_cast<void(TileSet::*)(int32_t,bool)>(&TileSet::set_occlusion_layer_sdf_collision)>("set_occlusion_layer_sdf_collision")
            .fun<static_cast<bool(TileSet::*)(int32_t)const>(&TileSet::get_occlusion_layer_sdf_collision)>("get_occlusion_layer_sdf_collision")
            .fun<static_cast<int32_t(TileSet::*)()const>(&TileSet::get_physics_layers_count)>("get_physics_layers_count")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::add_physics_layer)>("add_physics_layer")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::move_physics_layer)>("move_physics_layer")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::remove_physics_layer)>("remove_physics_layer")
            .fun<static_cast<void(TileSet::*)(int32_t,uint32_t)>(&TileSet::set_physics_layer_collision_layer)>("set_physics_layer_collision_layer")
            .fun<static_cast<uint32_t(TileSet::*)(int32_t)const>(&TileSet::get_physics_layer_collision_layer)>("get_physics_layer_collision_layer")
            .fun<static_cast<void(TileSet::*)(int32_t,uint32_t)>(&TileSet::set_physics_layer_collision_mask)>("set_physics_layer_collision_mask")
            .fun<static_cast<uint32_t(TileSet::*)(int32_t)const>(&TileSet::get_physics_layer_collision_mask)>("get_physics_layer_collision_mask")
            .fun<static_cast<void(TileSet::*)(int32_t,const Ref<PhysicsMaterial> &)>(&TileSet::set_physics_layer_physics_material)>("set_physics_layer_physics_material")
            .fun<static_cast<Ref<PhysicsMaterial>(TileSet::*)(int32_t)const>(&TileSet::get_physics_layer_physics_material)>("get_physics_layer_physics_material")
            .fun<static_cast<int32_t(TileSet::*)()const>(&TileSet::get_terrain_sets_count)>("get_terrain_sets_count")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::add_terrain_set)>("add_terrain_set")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::move_terrain_set)>("move_terrain_set")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::remove_terrain_set)>("remove_terrain_set")
            .fun<static_cast<void(TileSet::*)(int32_t,TileSet::TerrainMode)>(&TileSet::set_terrain_set_mode)>("set_terrain_set_mode")
            .fun<static_cast<TileSet::TerrainMode(TileSet::*)(int32_t)const>(&TileSet::get_terrain_set_mode)>("get_terrain_set_mode")
            .fun<static_cast<int32_t(TileSet::*)(int32_t)const>(&TileSet::get_terrains_count)>("get_terrains_count")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::add_terrain)>("add_terrain")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t,int32_t)>(&TileSet::move_terrain)>("move_terrain")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::remove_terrain)>("remove_terrain")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t,const String &)>(&TileSet::set_terrain_name)>("set_terrain_name")
            .fun<static_cast<String(TileSet::*)(int32_t,int32_t)const>(&TileSet::get_terrain_name)>("get_terrain_name")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t,const Color &)>(&TileSet::set_terrain_color)>("set_terrain_color")
            .fun<static_cast<Color(TileSet::*)(int32_t,int32_t)const>(&TileSet::get_terrain_color)>("get_terrain_color")
            .fun<static_cast<int32_t(TileSet::*)()const>(&TileSet::get_navigation_layers_count)>("get_navigation_layers_count")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::add_navigation_layer)>("add_navigation_layer")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::move_navigation_layer)>("move_navigation_layer")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::remove_navigation_layer)>("remove_navigation_layer")
            .fun<static_cast<void(TileSet::*)(int32_t,uint32_t)>(&TileSet::set_navigation_layer_layers)>("set_navigation_layer_layers")
            .fun<static_cast<uint32_t(TileSet::*)(int32_t)const>(&TileSet::get_navigation_layer_layers)>("get_navigation_layer_layers")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t,bool)>(&TileSet::set_navigation_layer_layer_value)>("set_navigation_layer_layer_value")
            .fun<static_cast<bool(TileSet::*)(int32_t,int32_t)const>(&TileSet::get_navigation_layer_layer_value)>("get_navigation_layer_layer_value")
            .fun<static_cast<int32_t(TileSet::*)()const>(&TileSet::get_custom_data_layers_count)>("get_custom_data_layers_count")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::add_custom_data_layer)>("add_custom_data_layer")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::move_custom_data_layer)>("move_custom_data_layer")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::remove_custom_data_layer)>("remove_custom_data_layer")
            .fun<static_cast<int32_t(TileSet::*)(const String &)const>(&TileSet::get_custom_data_layer_by_name)>("get_custom_data_layer_by_name")
            .fun<static_cast<void(TileSet::*)(int32_t,const String &)>(&TileSet::set_custom_data_layer_name)>("set_custom_data_layer_name")
            .fun<static_cast<String(TileSet::*)(int32_t)const>(&TileSet::get_custom_data_layer_name)>("get_custom_data_layer_name")
            .fun<static_cast<void(TileSet::*)(int32_t,Variant::Type)>(&TileSet::set_custom_data_layer_type)>("set_custom_data_layer_type")
            .fun<static_cast<Variant::Type(TileSet::*)(int32_t)const>(&TileSet::get_custom_data_layer_type)>("get_custom_data_layer_type")
            .fun<static_cast<void(TileSet::*)(int32_t,int32_t)>(&TileSet::set_source_level_tile_proxy)>("set_source_level_tile_proxy")
            .fun<static_cast<int32_t(TileSet::*)(int32_t)>(&TileSet::get_source_level_tile_proxy)>("get_source_level_tile_proxy")
            .fun<static_cast<bool(TileSet::*)(int32_t)>(&TileSet::has_source_level_tile_proxy)>("has_source_level_tile_proxy")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::remove_source_level_tile_proxy)>("remove_source_level_tile_proxy")
            .fun<static_cast<void(TileSet::*)(int32_t,const Vector2i &,int32_t,const Vector2i &)>(&TileSet::set_coords_level_tile_proxy)>("set_coords_level_tile_proxy")
            .fun<static_cast<Array(TileSet::*)(int32_t,const Vector2i &)>(&TileSet::get_coords_level_tile_proxy)>("get_coords_level_tile_proxy")
            .fun<static_cast<bool(TileSet::*)(int32_t,const Vector2i &)>(&TileSet::has_coords_level_tile_proxy)>("has_coords_level_tile_proxy")
            .fun<static_cast<void(TileSet::*)(int32_t,const Vector2i &)>(&TileSet::remove_coords_level_tile_proxy)>("remove_coords_level_tile_proxy")
            .fun<static_cast<void(TileSet::*)(int32_t,const Vector2i &,int32_t,int32_t,const Vector2i &,int32_t)>(&TileSet::set_alternative_level_tile_proxy)>("set_alternative_level_tile_proxy")
            .fun<static_cast<Array(TileSet::*)(int32_t,const Vector2i &,int32_t)>(&TileSet::get_alternative_level_tile_proxy)>("get_alternative_level_tile_proxy")
            .fun<static_cast<bool(TileSet::*)(int32_t,const Vector2i &,int32_t)>(&TileSet::has_alternative_level_tile_proxy)>("has_alternative_level_tile_proxy")
            .fun<static_cast<void(TileSet::*)(int32_t,const Vector2i &,int32_t)>(&TileSet::remove_alternative_level_tile_proxy)>("remove_alternative_level_tile_proxy")
            .fun<static_cast<Array(TileSet::*)(int32_t,const Vector2i &,int32_t)const>(&TileSet::map_tile_proxy)>("map_tile_proxy")
            .fun<static_cast<void(TileSet::*)()>(&TileSet::cleanup_invalid_tile_proxies)>("cleanup_invalid_tile_proxies")
            .fun<static_cast<void(TileSet::*)()>(&TileSet::clear_tile_proxies)>("clear_tile_proxies")
            .fun<static_cast<int32_t(TileSet::*)(const Ref<TileMapPattern> &,int32_t)>(&TileSet::add_pattern)>("add_pattern")
            .fun<static_cast<Ref<TileMapPattern>(TileSet::*)(int32_t)>(&TileSet::get_pattern)>("get_pattern")
            .fun<static_cast<void(TileSet::*)(int32_t)>(&TileSet::remove_pattern)>("remove_pattern")
            .fun<static_cast<int32_t(TileSet::*)()>(&TileSet::get_patterns_count)>("get_patterns_count")
;    qjs::Value _TileShape = context->newObject();
    _TileShape["TILE_SHAPE_SQUARE"] = TileSet::TileShape::TILE_SHAPE_SQUARE;
    _TileShape["TILE_SHAPE_ISOMETRIC"] = TileSet::TileShape::TILE_SHAPE_ISOMETRIC;
    _TileShape["TILE_SHAPE_HALF_OFFSET_SQUARE"] = TileSet::TileShape::TILE_SHAPE_HALF_OFFSET_SQUARE;
    _TileShape["TILE_SHAPE_HEXAGON"] = TileSet::TileShape::TILE_SHAPE_HEXAGON;
    _module.add("TileShape", std::move(_TileShape));
    qjs::Value _TileLayout = context->newObject();
    _TileLayout["TILE_LAYOUT_STACKED"] = TileSet::TileLayout::TILE_LAYOUT_STACKED;
    _TileLayout["TILE_LAYOUT_STACKED_OFFSET"] = TileSet::TileLayout::TILE_LAYOUT_STACKED_OFFSET;
    _TileLayout["TILE_LAYOUT_STAIRS_RIGHT"] = TileSet::TileLayout::TILE_LAYOUT_STAIRS_RIGHT;
    _TileLayout["TILE_LAYOUT_STAIRS_DOWN"] = TileSet::TileLayout::TILE_LAYOUT_STAIRS_DOWN;
    _TileLayout["TILE_LAYOUT_DIAMOND_RIGHT"] = TileSet::TileLayout::TILE_LAYOUT_DIAMOND_RIGHT;
    _TileLayout["TILE_LAYOUT_DIAMOND_DOWN"] = TileSet::TileLayout::TILE_LAYOUT_DIAMOND_DOWN;
    _module.add("TileLayout", std::move(_TileLayout));
    qjs::Value _TileOffsetAxis = context->newObject();
    _TileOffsetAxis["TILE_OFFSET_AXIS_HORIZONTAL"] = TileSet::TileOffsetAxis::TILE_OFFSET_AXIS_HORIZONTAL;
    _TileOffsetAxis["TILE_OFFSET_AXIS_VERTICAL"] = TileSet::TileOffsetAxis::TILE_OFFSET_AXIS_VERTICAL;
    _module.add("TileOffsetAxis", std::move(_TileOffsetAxis));
    qjs::Value _CellNeighbor = context->newObject();
    _CellNeighbor["CELL_NEIGHBOR_RIGHT_SIDE"] = TileSet::CellNeighbor::CELL_NEIGHBOR_RIGHT_SIDE;
    _CellNeighbor["CELL_NEIGHBOR_RIGHT_CORNER"] = TileSet::CellNeighbor::CELL_NEIGHBOR_RIGHT_CORNER;
    _CellNeighbor["CELL_NEIGHBOR_BOTTOM_RIGHT_SIDE"] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_RIGHT_SIDE;
    _CellNeighbor["CELL_NEIGHBOR_BOTTOM_RIGHT_CORNER"] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_RIGHT_CORNER;
    _CellNeighbor["CELL_NEIGHBOR_BOTTOM_SIDE"] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_SIDE;
    _CellNeighbor["CELL_NEIGHBOR_BOTTOM_CORNER"] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_CORNER;
    _CellNeighbor["CELL_NEIGHBOR_BOTTOM_LEFT_SIDE"] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_LEFT_SIDE;
    _CellNeighbor["CELL_NEIGHBOR_BOTTOM_LEFT_CORNER"] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_LEFT_CORNER;
    _CellNeighbor["CELL_NEIGHBOR_LEFT_SIDE"] = TileSet::CellNeighbor::CELL_NEIGHBOR_LEFT_SIDE;
    _CellNeighbor["CELL_NEIGHBOR_LEFT_CORNER"] = TileSet::CellNeighbor::CELL_NEIGHBOR_LEFT_CORNER;
    _CellNeighbor["CELL_NEIGHBOR_TOP_LEFT_SIDE"] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_LEFT_SIDE;
    _CellNeighbor["CELL_NEIGHBOR_TOP_LEFT_CORNER"] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_LEFT_CORNER;
    _CellNeighbor["CELL_NEIGHBOR_TOP_SIDE"] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_SIDE;
    _CellNeighbor["CELL_NEIGHBOR_TOP_CORNER"] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_CORNER;
    _CellNeighbor["CELL_NEIGHBOR_TOP_RIGHT_SIDE"] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_RIGHT_SIDE;
    _CellNeighbor["CELL_NEIGHBOR_TOP_RIGHT_CORNER"] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_RIGHT_CORNER;
    _module.add("CellNeighbor", std::move(_CellNeighbor));
    qjs::Value _TerrainMode = context->newObject();
    _TerrainMode["TERRAIN_MODE_MATCH_CORNERS_AND_SIDES"] = TileSet::TerrainMode::TERRAIN_MODE_MATCH_CORNERS_AND_SIDES;
    _TerrainMode["TERRAIN_MODE_MATCH_CORNERS"] = TileSet::TerrainMode::TERRAIN_MODE_MATCH_CORNERS;
    _TerrainMode["TERRAIN_MODE_MATCH_SIDES"] = TileSet::TerrainMode::TERRAIN_MODE_MATCH_SIDES;
    _module.add("TerrainMode", std::move(_TerrainMode));
}