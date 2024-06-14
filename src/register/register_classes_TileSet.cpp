
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TileSet() {
	qjs::Context::Module &_module = get_General_module();
	_module.class_<TileSet>("TileSet")
			.constructor<>()
			.base<Resource>()
			.property<static_cast<TileSet::TileShape (TileSet::*)() const>(&TileSet::get_tile_shape), static_cast<void (TileSet::*)(TileSet::TileShape)>(&TileSet::set_tile_shape)>((new std::string("tile_shape"))->c_str())
			.property<static_cast<TileSet::TileLayout (TileSet::*)() const>(&TileSet::get_tile_layout), static_cast<void (TileSet::*)(TileSet::TileLayout)>(&TileSet::set_tile_layout)>((new std::string("tile_layout"))->c_str())
			.property<static_cast<TileSet::TileOffsetAxis (TileSet::*)() const>(&TileSet::get_tile_offset_axis), static_cast<void (TileSet::*)(TileSet::TileOffsetAxis)>(&TileSet::set_tile_offset_axis)>((new std::string("tile_offset_axis"))->c_str())
			.property<static_cast<Vector2i (TileSet::*)() const>(&TileSet::get_tile_size), static_cast<void (TileSet::*)(const Vector2i &)>(&TileSet::set_tile_size)>((new std::string("tile_size"))->c_str())
			.property<static_cast<bool (TileSet::*)() const>(&TileSet::is_uv_clipping), static_cast<void (TileSet::*)(bool)>(&TileSet::set_uv_clipping)>((new std::string("uv_clipping"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)() const>(&TileSet::get_next_source_id)>((new std::string("get_next_source_id"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)(const Ref<TileSetSource> &, int32_t)>(&TileSet::add_source)>((new std::string("add_source"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::remove_source)>((new std::string("remove_source"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::set_source_id)>((new std::string("set_source_id"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)() const>(&TileSet::get_source_count)>((new std::string("get_source_count"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)(int32_t) const>(&TileSet::get_source_id)>((new std::string("get_source_id"))->c_str())
			.fun<static_cast<bool (TileSet::*)(int32_t) const>(&TileSet::has_source)>((new std::string("has_source"))->c_str())
			.fun<static_cast<Ref<TileSetSource> (TileSet::*)(int32_t) const>(&TileSet::get_source)>((new std::string("get_source"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)() const>(&TileSet::get_occlusion_layers_count)>((new std::string("get_occlusion_layers_count"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::add_occlusion_layer)>((new std::string("add_occlusion_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::move_occlusion_layer)>((new std::string("move_occlusion_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::remove_occlusion_layer)>((new std::string("remove_occlusion_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::set_occlusion_layer_light_mask)>((new std::string("set_occlusion_layer_light_mask"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)(int32_t) const>(&TileSet::get_occlusion_layer_light_mask)>((new std::string("get_occlusion_layer_light_mask"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, bool)>(&TileSet::set_occlusion_layer_sdf_collision)>((new std::string("set_occlusion_layer_sdf_collision"))->c_str())
			.fun<static_cast<bool (TileSet::*)(int32_t) const>(&TileSet::get_occlusion_layer_sdf_collision)>((new std::string("get_occlusion_layer_sdf_collision"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)() const>(&TileSet::get_physics_layers_count)>((new std::string("get_physics_layers_count"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::add_physics_layer)>((new std::string("add_physics_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::move_physics_layer)>((new std::string("move_physics_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::remove_physics_layer)>((new std::string("remove_physics_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, uint32_t)>(&TileSet::set_physics_layer_collision_layer)>((new std::string("set_physics_layer_collision_layer"))->c_str())
			.fun<static_cast<uint32_t (TileSet::*)(int32_t) const>(&TileSet::get_physics_layer_collision_layer)>((new std::string("get_physics_layer_collision_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, uint32_t)>(&TileSet::set_physics_layer_collision_mask)>((new std::string("set_physics_layer_collision_mask"))->c_str())
			.fun<static_cast<uint32_t (TileSet::*)(int32_t) const>(&TileSet::get_physics_layer_collision_mask)>((new std::string("get_physics_layer_collision_mask"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, const Ref<PhysicsMaterial> &)>(&TileSet::set_physics_layer_physics_material)>((new std::string("set_physics_layer_physics_material"))->c_str())
			.fun<static_cast<Ref<PhysicsMaterial> (TileSet::*)(int32_t) const>(&TileSet::get_physics_layer_physics_material)>((new std::string("get_physics_layer_physics_material"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)() const>(&TileSet::get_terrain_sets_count)>((new std::string("get_terrain_sets_count"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::add_terrain_set)>((new std::string("add_terrain_set"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::move_terrain_set)>((new std::string("move_terrain_set"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::remove_terrain_set)>((new std::string("remove_terrain_set"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, TileSet::TerrainMode)>(&TileSet::set_terrain_set_mode)>((new std::string("set_terrain_set_mode"))->c_str())
			.fun<static_cast<TileSet::TerrainMode (TileSet::*)(int32_t) const>(&TileSet::get_terrain_set_mode)>((new std::string("get_terrain_set_mode"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)(int32_t) const>(&TileSet::get_terrains_count)>((new std::string("get_terrains_count"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::add_terrain)>((new std::string("add_terrain"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t, int32_t)>(&TileSet::move_terrain)>((new std::string("move_terrain"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::remove_terrain)>((new std::string("remove_terrain"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t, const String &)>(&TileSet::set_terrain_name)>((new std::string("set_terrain_name"))->c_str())
			.fun<static_cast<String (TileSet::*)(int32_t, int32_t) const>(&TileSet::get_terrain_name)>((new std::string("get_terrain_name"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t, const Color &)>(&TileSet::set_terrain_color)>((new std::string("set_terrain_color"))->c_str())
			.fun<static_cast<Color (TileSet::*)(int32_t, int32_t) const>(&TileSet::get_terrain_color)>((new std::string("get_terrain_color"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)() const>(&TileSet::get_navigation_layers_count)>((new std::string("get_navigation_layers_count"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::add_navigation_layer)>((new std::string("add_navigation_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::move_navigation_layer)>((new std::string("move_navigation_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::remove_navigation_layer)>((new std::string("remove_navigation_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, uint32_t)>(&TileSet::set_navigation_layer_layers)>((new std::string("set_navigation_layer_layers"))->c_str())
			.fun<static_cast<uint32_t (TileSet::*)(int32_t) const>(&TileSet::get_navigation_layer_layers)>((new std::string("get_navigation_layer_layers"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t, bool)>(&TileSet::set_navigation_layer_layer_value)>((new std::string("set_navigation_layer_layer_value"))->c_str())
			.fun<static_cast<bool (TileSet::*)(int32_t, int32_t) const>(&TileSet::get_navigation_layer_layer_value)>((new std::string("get_navigation_layer_layer_value"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)() const>(&TileSet::get_custom_data_layers_count)>((new std::string("get_custom_data_layers_count"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::add_custom_data_layer)>((new std::string("add_custom_data_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::move_custom_data_layer)>((new std::string("move_custom_data_layer"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::remove_custom_data_layer)>((new std::string("remove_custom_data_layer"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)(const String &) const>(&TileSet::get_custom_data_layer_by_name)>((new std::string("get_custom_data_layer_by_name"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, const String &)>(&TileSet::set_custom_data_layer_name)>((new std::string("set_custom_data_layer_name"))->c_str())
			.fun<static_cast<String (TileSet::*)(int32_t) const>(&TileSet::get_custom_data_layer_name)>((new std::string("get_custom_data_layer_name"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, Variant::Type)>(&TileSet::set_custom_data_layer_type)>((new std::string("set_custom_data_layer_type"))->c_str())
			.fun<static_cast<Variant::Type (TileSet::*)(int32_t) const>(&TileSet::get_custom_data_layer_type)>((new std::string("get_custom_data_layer_type"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, int32_t)>(&TileSet::set_source_level_tile_proxy)>((new std::string("set_source_level_tile_proxy"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)(int32_t)>(&TileSet::get_source_level_tile_proxy)>((new std::string("get_source_level_tile_proxy"))->c_str())
			.fun<static_cast<bool (TileSet::*)(int32_t)>(&TileSet::has_source_level_tile_proxy)>((new std::string("has_source_level_tile_proxy"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::remove_source_level_tile_proxy)>((new std::string("remove_source_level_tile_proxy"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, const Vector2i &, int32_t, const Vector2i &)>(&TileSet::set_coords_level_tile_proxy)>((new std::string("set_coords_level_tile_proxy"))->c_str())
			.fun<static_cast<Array (TileSet::*)(int32_t, const Vector2i &)>(&TileSet::get_coords_level_tile_proxy)>((new std::string("get_coords_level_tile_proxy"))->c_str())
			.fun<static_cast<bool (TileSet::*)(int32_t, const Vector2i &)>(&TileSet::has_coords_level_tile_proxy)>((new std::string("has_coords_level_tile_proxy"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, const Vector2i &)>(&TileSet::remove_coords_level_tile_proxy)>((new std::string("remove_coords_level_tile_proxy"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, const Vector2i &, int32_t, int32_t, const Vector2i &, int32_t)>(&TileSet::set_alternative_level_tile_proxy)>((new std::string("set_alternative_level_tile_proxy"))->c_str())
			.fun<static_cast<Array (TileSet::*)(int32_t, const Vector2i &, int32_t)>(&TileSet::get_alternative_level_tile_proxy)>((new std::string("get_alternative_level_tile_proxy"))->c_str())
			.fun<static_cast<bool (TileSet::*)(int32_t, const Vector2i &, int32_t)>(&TileSet::has_alternative_level_tile_proxy)>((new std::string("has_alternative_level_tile_proxy"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t, const Vector2i &, int32_t)>(&TileSet::remove_alternative_level_tile_proxy)>((new std::string("remove_alternative_level_tile_proxy"))->c_str())
			.fun<static_cast<Array (TileSet::*)(int32_t, const Vector2i &, int32_t) const>(&TileSet::map_tile_proxy)>((new std::string("map_tile_proxy"))->c_str())
			.fun<static_cast<void (TileSet::*)()>(&TileSet::cleanup_invalid_tile_proxies)>((new std::string("cleanup_invalid_tile_proxies"))->c_str())
			.fun<static_cast<void (TileSet::*)()>(&TileSet::clear_tile_proxies)>((new std::string("clear_tile_proxies"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)(const Ref<TileMapPattern> &, int32_t)>(&TileSet::add_pattern)>((new std::string("add_pattern"))->c_str())
			.fun<static_cast<Ref<TileMapPattern> (TileSet::*)(int32_t)>(&TileSet::get_pattern)>((new std::string("get_pattern"))->c_str())
			.fun<static_cast<void (TileSet::*)(int32_t)>(&TileSet::remove_pattern)>((new std::string("remove_pattern"))->c_str())
			.fun<static_cast<int32_t (TileSet::*)()>(&TileSet::get_patterns_count)>((new std::string("get_patterns_count"))->c_str());
	qjs::Value _TileShape = context->newObject();
	_TileShape[(new std::string("TILE_SHAPE_SQUARE"))->c_str()] = TileSet::TileShape::TILE_SHAPE_SQUARE;
	_TileShape[(new std::string("TILE_SHAPE_ISOMETRIC"))->c_str()] = TileSet::TileShape::TILE_SHAPE_ISOMETRIC;
	_TileShape[(new std::string("TILE_SHAPE_HALF_OFFSET_SQUARE"))->c_str()] = TileSet::TileShape::TILE_SHAPE_HALF_OFFSET_SQUARE;
	_TileShape[(new std::string("TILE_SHAPE_HEXAGON"))->c_str()] = TileSet::TileShape::TILE_SHAPE_HEXAGON;
	_module.add("TileShape", std::move(_TileShape));
	qjs::Value _TileLayout = context->newObject();
	_TileLayout[(new std::string("TILE_LAYOUT_STACKED"))->c_str()] = TileSet::TileLayout::TILE_LAYOUT_STACKED;
	_TileLayout[(new std::string("TILE_LAYOUT_STACKED_OFFSET"))->c_str()] = TileSet::TileLayout::TILE_LAYOUT_STACKED_OFFSET;
	_TileLayout[(new std::string("TILE_LAYOUT_STAIRS_RIGHT"))->c_str()] = TileSet::TileLayout::TILE_LAYOUT_STAIRS_RIGHT;
	_TileLayout[(new std::string("TILE_LAYOUT_STAIRS_DOWN"))->c_str()] = TileSet::TileLayout::TILE_LAYOUT_STAIRS_DOWN;
	_TileLayout[(new std::string("TILE_LAYOUT_DIAMOND_RIGHT"))->c_str()] = TileSet::TileLayout::TILE_LAYOUT_DIAMOND_RIGHT;
	_TileLayout[(new std::string("TILE_LAYOUT_DIAMOND_DOWN"))->c_str()] = TileSet::TileLayout::TILE_LAYOUT_DIAMOND_DOWN;
	_module.add("TileLayout", std::move(_TileLayout));
	qjs::Value _TileOffsetAxis = context->newObject();
	_TileOffsetAxis[(new std::string("TILE_OFFSET_AXIS_HORIZONTAL"))->c_str()] = TileSet::TileOffsetAxis::TILE_OFFSET_AXIS_HORIZONTAL;
	_TileOffsetAxis[(new std::string("TILE_OFFSET_AXIS_VERTICAL"))->c_str()] = TileSet::TileOffsetAxis::TILE_OFFSET_AXIS_VERTICAL;
	_module.add("TileOffsetAxis", std::move(_TileOffsetAxis));
	qjs::Value _CellNeighbor = context->newObject();
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_RIGHT_SIDE"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_RIGHT_SIDE;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_RIGHT_CORNER"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_RIGHT_CORNER;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_BOTTOM_RIGHT_SIDE"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_RIGHT_SIDE;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_BOTTOM_RIGHT_CORNER"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_RIGHT_CORNER;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_BOTTOM_SIDE"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_SIDE;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_BOTTOM_CORNER"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_CORNER;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_BOTTOM_LEFT_SIDE"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_LEFT_SIDE;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_BOTTOM_LEFT_CORNER"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_BOTTOM_LEFT_CORNER;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_LEFT_SIDE"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_LEFT_SIDE;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_LEFT_CORNER"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_LEFT_CORNER;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_TOP_LEFT_SIDE"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_LEFT_SIDE;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_TOP_LEFT_CORNER"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_LEFT_CORNER;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_TOP_SIDE"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_SIDE;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_TOP_CORNER"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_CORNER;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_TOP_RIGHT_SIDE"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_RIGHT_SIDE;
	_CellNeighbor[(new std::string("CELL_NEIGHBOR_TOP_RIGHT_CORNER"))->c_str()] = TileSet::CellNeighbor::CELL_NEIGHBOR_TOP_RIGHT_CORNER;
	_module.add("CellNeighbor", std::move(_CellNeighbor));
	qjs::Value _TerrainMode = context->newObject();
	_TerrainMode[(new std::string("TERRAIN_MODE_MATCH_CORNERS_AND_SIDES"))->c_str()] = TileSet::TerrainMode::TERRAIN_MODE_MATCH_CORNERS_AND_SIDES;
	_TerrainMode[(new std::string("TERRAIN_MODE_MATCH_CORNERS"))->c_str()] = TileSet::TerrainMode::TERRAIN_MODE_MATCH_CORNERS;
	_TerrainMode[(new std::string("TERRAIN_MODE_MATCH_SIDES"))->c_str()] = TileSet::TerrainMode::TERRAIN_MODE_MATCH_SIDES;
	_module.add("TerrainMode", std::move(_TerrainMode));
}