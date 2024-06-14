
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_map.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TileMap() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<TileMap>("TileMap")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<Ref<TileSet> (TileMap::*)() const>(&TileMap::get_tileset), static_cast<void (TileMap::*)(const Ref<TileSet> &)>(&TileMap::set_tileset)>((new std::string("tile_set"))->c_str())
			.property<static_cast<int32_t (TileMap::*)() const>(&TileMap::get_rendering_quadrant_size), static_cast<void (TileMap::*)(int32_t)>(&TileMap::set_rendering_quadrant_size)>((new std::string("rendering_quadrant_size"))->c_str())
			.property<static_cast<bool (TileMap::*)() const>(&TileMap::is_collision_animatable), static_cast<void (TileMap::*)(bool)>(&TileMap::set_collision_animatable)>((new std::string("collision_animatable"))->c_str())
			.property<static_cast<TileMap::VisibilityMode (TileMap::*)() const>(&TileMap::get_collision_visibility_mode), static_cast<void (TileMap::*)(TileMap::VisibilityMode)>(&TileMap::set_collision_visibility_mode)>((new std::string("collision_visibility_mode"))->c_str())
			.property<static_cast<TileMap::VisibilityMode (TileMap::*)() const>(&TileMap::get_navigation_visibility_mode), static_cast<void (TileMap::*)(TileMap::VisibilityMode)>(&TileMap::set_navigation_visibility_mode)>((new std::string("navigation_visibility_mode"))->c_str())
			.fun<static_cast<bool (TileMap::*)(int32_t, const Vector2i &)>(&TileMap::_use_tile_data_runtime_update)>((new std::string("_use_tile_data_runtime_update"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const Vector2i &, TileData *)>(&TileMap::_tile_data_runtime_update)>((new std::string("_tile_data_runtime_update"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const RID &)>(&TileMap::set_navigation_map)>((new std::string("set_navigation_map"))->c_str())
			.fun<static_cast<RID (TileMap::*)(int32_t) const>(&TileMap::get_navigation_map)>((new std::string("get_navigation_map"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t)>(&TileMap::force_update)>((new std::string("force_update"))->c_str())
			.fun<static_cast<int32_t (TileMap::*)() const>(&TileMap::get_layers_count)>((new std::string("get_layers_count"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t)>(&TileMap::add_layer)>((new std::string("add_layer"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, int32_t)>(&TileMap::move_layer)>((new std::string("move_layer"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t)>(&TileMap::remove_layer)>((new std::string("remove_layer"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const String &)>(&TileMap::set_layer_name)>((new std::string("set_layer_name"))->c_str())
			.fun<static_cast<String (TileMap::*)(int32_t) const>(&TileMap::get_layer_name)>((new std::string("get_layer_name"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, bool)>(&TileMap::set_layer_enabled)>((new std::string("set_layer_enabled"))->c_str())
			.fun<static_cast<bool (TileMap::*)(int32_t) const>(&TileMap::is_layer_enabled)>((new std::string("is_layer_enabled"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const Color &)>(&TileMap::set_layer_modulate)>((new std::string("set_layer_modulate"))->c_str())
			.fun<static_cast<Color (TileMap::*)(int32_t) const>(&TileMap::get_layer_modulate)>((new std::string("get_layer_modulate"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, bool)>(&TileMap::set_layer_y_sort_enabled)>((new std::string("set_layer_y_sort_enabled"))->c_str())
			.fun<static_cast<bool (TileMap::*)(int32_t) const>(&TileMap::is_layer_y_sort_enabled)>((new std::string("is_layer_y_sort_enabled"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, int32_t)>(&TileMap::set_layer_y_sort_origin)>((new std::string("set_layer_y_sort_origin"))->c_str())
			.fun<static_cast<int32_t (TileMap::*)(int32_t) const>(&TileMap::get_layer_y_sort_origin)>((new std::string("get_layer_y_sort_origin"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, int32_t)>(&TileMap::set_layer_z_index)>((new std::string("set_layer_z_index"))->c_str())
			.fun<static_cast<int32_t (TileMap::*)(int32_t) const>(&TileMap::get_layer_z_index)>((new std::string("get_layer_z_index"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, bool)>(&TileMap::set_layer_navigation_enabled)>((new std::string("set_layer_navigation_enabled"))->c_str())
			.fun<static_cast<bool (TileMap::*)(int32_t) const>(&TileMap::is_layer_navigation_enabled)>((new std::string("is_layer_navigation_enabled"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const RID &)>(&TileMap::set_layer_navigation_map)>((new std::string("set_layer_navigation_map"))->c_str())
			.fun<static_cast<RID (TileMap::*)(int32_t) const>(&TileMap::get_layer_navigation_map)>((new std::string("get_layer_navigation_map"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const Vector2i &, int32_t, const Vector2i &, int32_t)>(&TileMap::set_cell)>((new std::string("set_cell"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const Vector2i &)>(&TileMap::erase_cell)>((new std::string("erase_cell"))->c_str())
			.fun<static_cast<int32_t (TileMap::*)(int32_t, const Vector2i &, bool) const>(&TileMap::get_cell_source_id)>((new std::string("get_cell_source_id"))->c_str())
			.fun<static_cast<Vector2i (TileMap::*)(int32_t, const Vector2i &, bool) const>(&TileMap::get_cell_atlas_coords)>((new std::string("get_cell_atlas_coords"))->c_str())
			.fun<static_cast<int32_t (TileMap::*)(int32_t, const Vector2i &, bool) const>(&TileMap::get_cell_alternative_tile)>((new std::string("get_cell_alternative_tile"))->c_str())
			.fun<static_cast<TileData *(TileMap::*)(int32_t, const Vector2i &, bool) const>(&TileMap::get_cell_tile_data)>((new std::string("get_cell_tile_data"))->c_str())
			.fun<static_cast<Vector2i (TileMap::*)(const RID &)>(&TileMap::get_coords_for_body_rid)>((new std::string("get_coords_for_body_rid"))->c_str())
			.fun<static_cast<int32_t (TileMap::*)(const RID &)>(&TileMap::get_layer_for_body_rid)>((new std::string("get_layer_for_body_rid"))->c_str())
			.fun<static_cast<Ref<TileMapPattern> (TileMap::*)(int32_t, const TypedArray<Vector2i> &)>(&TileMap::get_pattern)>((new std::string("get_pattern"))->c_str())
			.fun<static_cast<Vector2i (TileMap::*)(const Vector2i &, const Vector2i &, const Ref<TileMapPattern> &)>(&TileMap::map_pattern)>((new std::string("map_pattern"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const Vector2i &, const Ref<TileMapPattern> &)>(&TileMap::set_pattern)>((new std::string("set_pattern"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const TypedArray<Vector2i> &, int32_t, int32_t, bool)>(&TileMap::set_cells_terrain_connect)>((new std::string("set_cells_terrain_connect"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t, const TypedArray<Vector2i> &, int32_t, int32_t, bool)>(&TileMap::set_cells_terrain_path)>((new std::string("set_cells_terrain_path"))->c_str())
			.fun<static_cast<void (TileMap::*)()>(&TileMap::fix_invalid_tiles)>((new std::string("fix_invalid_tiles"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t)>(&TileMap::clear_layer)>((new std::string("clear_layer"))->c_str())
			.fun<static_cast<void (TileMap::*)()>(&TileMap::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<void (TileMap::*)()>(&TileMap::update_internals)>((new std::string("update_internals"))->c_str())
			.fun<static_cast<void (TileMap::*)(int32_t)>(&TileMap::notify_runtime_tile_data_update)>((new std::string("notify_runtime_tile_data_update"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TileMap::*)(const Vector2i &)>(&TileMap::get_surrounding_cells)>((new std::string("get_surrounding_cells"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TileMap::*)(int32_t) const>(&TileMap::get_used_cells)>((new std::string("get_used_cells"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TileMap::*)(int32_t, int32_t, const Vector2i &, int32_t) const>(&TileMap::get_used_cells_by_id)>((new std::string("get_used_cells_by_id"))->c_str())
			.fun<static_cast<Rect2i (TileMap::*)() const>(&TileMap::get_used_rect)>((new std::string("get_used_rect"))->c_str())
			.fun<static_cast<Vector2 (TileMap::*)(const Vector2i &) const>(&TileMap::map_to_local)>((new std::string("map_to_local"))->c_str())
			.fun<static_cast<Vector2i (TileMap::*)(const Vector2 &) const>(&TileMap::local_to_map)>((new std::string("local_to_map"))->c_str())
			.fun<static_cast<Vector2i (TileMap::*)(const Vector2i &, TileSet::CellNeighbor) const>(&TileMap::get_neighbor_cell)>((new std::string("get_neighbor_cell"))->c_str());
	qjs::Value _VisibilityMode = context->newObject();
	_VisibilityMode[(new std::string("VISIBILITY_MODE_DEFAULT"))->c_str()] = TileMap::VisibilityMode::VISIBILITY_MODE_DEFAULT;
	_VisibilityMode[(new std::string("VISIBILITY_MODE_FORCE_HIDE"))->c_str()] = TileMap::VisibilityMode::VISIBILITY_MODE_FORCE_HIDE;
	_VisibilityMode[(new std::string("VISIBILITY_MODE_FORCE_SHOW"))->c_str()] = TileMap::VisibilityMode::VISIBILITY_MODE_FORCE_SHOW;
	_module.add("VisibilityMode", std::move(_VisibilityMode));
}