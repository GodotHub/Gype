
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_map_layer.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_TileMapLayer() {
	qjs::Context::Module &_module = get_Node2D_module();
	_module.class_<TileMapLayer>("TileMapLayer")
			.constructor<>()
			.base<Node2D>()
			.property<static_cast<PackedByteArray (TileMapLayer::*)() const>(&TileMapLayer::get_tile_map_data_as_array), static_cast<void (TileMapLayer::*)(const PackedByteArray &)>(&TileMapLayer::set_tile_map_data_from_array)>((new std::string("tile_map_data"))->c_str())
			.property<static_cast<bool (TileMapLayer::*)() const>(&TileMapLayer::is_enabled), static_cast<void (TileMapLayer::*)(bool)>(&TileMapLayer::set_enabled)>((new std::string("enabled"))->c_str())
			.property<static_cast<Ref<TileSet> (TileMapLayer::*)() const>(&TileMapLayer::get_tile_set), static_cast<void (TileMapLayer::*)(const Ref<TileSet> &)>(&TileMapLayer::set_tile_set)>((new std::string("tile_set"))->c_str())
			.property<static_cast<int32_t (TileMapLayer::*)() const>(&TileMapLayer::get_y_sort_origin), static_cast<void (TileMapLayer::*)(int32_t)>(&TileMapLayer::set_y_sort_origin)>((new std::string("y_sort_origin"))->c_str())
			.property<static_cast<int32_t (TileMapLayer::*)() const>(&TileMapLayer::get_rendering_quadrant_size), static_cast<void (TileMapLayer::*)(int32_t)>(&TileMapLayer::set_rendering_quadrant_size)>((new std::string("rendering_quadrant_size"))->c_str())
			.property<static_cast<bool (TileMapLayer::*)() const>(&TileMapLayer::is_collision_enabled), static_cast<void (TileMapLayer::*)(bool)>(&TileMapLayer::set_collision_enabled)>((new std::string("collision_enabled"))->c_str())
			.property<static_cast<bool (TileMapLayer::*)() const>(&TileMapLayer::is_using_kinematic_bodies), static_cast<void (TileMapLayer::*)(bool)>(&TileMapLayer::set_use_kinematic_bodies)>((new std::string("use_kinematic_bodies"))->c_str())
			.property<static_cast<TileMapLayer::DebugVisibilityMode (TileMapLayer::*)() const>(&TileMapLayer::get_collision_visibility_mode), static_cast<void (TileMapLayer::*)(TileMapLayer::DebugVisibilityMode)>(&TileMapLayer::set_collision_visibility_mode)>((new std::string("collision_visibility_mode"))->c_str())
			.property<static_cast<bool (TileMapLayer::*)() const>(&TileMapLayer::is_navigation_enabled), static_cast<void (TileMapLayer::*)(bool)>(&TileMapLayer::set_navigation_enabled)>((new std::string("navigation_enabled"))->c_str())
			.property<static_cast<TileMapLayer::DebugVisibilityMode (TileMapLayer::*)() const>(&TileMapLayer::get_navigation_visibility_mode), static_cast<void (TileMapLayer::*)(TileMapLayer::DebugVisibilityMode)>(&TileMapLayer::set_navigation_visibility_mode)>((new std::string("navigation_visibility_mode"))->c_str())
			.fun<static_cast<bool (TileMapLayer::*)(const Vector2i &)>(&TileMapLayer::_use_tile_data_runtime_update)>((new std::string("_use_tile_data_runtime_update"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)(const Vector2i &, TileData *)>(&TileMapLayer::_tile_data_runtime_update)>((new std::string("_tile_data_runtime_update"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)(const Vector2i &, int32_t, const Vector2i &, int32_t)>(&TileMapLayer::set_cell)>((new std::string("set_cell"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)(const Vector2i &)>(&TileMapLayer::erase_cell)>((new std::string("erase_cell"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)()>(&TileMapLayer::fix_invalid_tiles)>((new std::string("fix_invalid_tiles"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)()>(&TileMapLayer::clear)>((new std::string("clear"))->c_str())
			.fun<static_cast<int32_t (TileMapLayer::*)(const Vector2i &) const>(&TileMapLayer::get_cell_source_id)>((new std::string("get_cell_source_id"))->c_str())
			.fun<static_cast<Vector2i (TileMapLayer::*)(const Vector2i &) const>(&TileMapLayer::get_cell_atlas_coords)>((new std::string("get_cell_atlas_coords"))->c_str())
			.fun<static_cast<int32_t (TileMapLayer::*)(const Vector2i &) const>(&TileMapLayer::get_cell_alternative_tile)>((new std::string("get_cell_alternative_tile"))->c_str())
			.fun<static_cast<TileData *(TileMapLayer::*)(const Vector2i &) const>(&TileMapLayer::get_cell_tile_data)>((new std::string("get_cell_tile_data"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TileMapLayer::*)() const>(&TileMapLayer::get_used_cells)>((new std::string("get_used_cells"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TileMapLayer::*)(int32_t, const Vector2i &, int32_t) const>(&TileMapLayer::get_used_cells_by_id)>((new std::string("get_used_cells_by_id"))->c_str())
			.fun<static_cast<Rect2i (TileMapLayer::*)() const>(&TileMapLayer::get_used_rect)>((new std::string("get_used_rect"))->c_str())
			.fun<static_cast<Ref<TileMapPattern> (TileMapLayer::*)(const TypedArray<Vector2i> &)>(&TileMapLayer::get_pattern)>((new std::string("get_pattern"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)(const Vector2i &, const Ref<TileMapPattern> &)>(&TileMapLayer::set_pattern)>((new std::string("set_pattern"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)(const TypedArray<Vector2i> &, int32_t, int32_t, bool)>(&TileMapLayer::set_cells_terrain_connect)>((new std::string("set_cells_terrain_connect"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)(const TypedArray<Vector2i> &, int32_t, int32_t, bool)>(&TileMapLayer::set_cells_terrain_path)>((new std::string("set_cells_terrain_path"))->c_str())
			.fun<static_cast<bool (TileMapLayer::*)(const RID &) const>(&TileMapLayer::has_body_rid)>((new std::string("has_body_rid"))->c_str())
			.fun<static_cast<Vector2i (TileMapLayer::*)(const RID &) const>(&TileMapLayer::get_coords_for_body_rid)>((new std::string("get_coords_for_body_rid"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)()>(&TileMapLayer::update_internals)>((new std::string("update_internals"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)()>(&TileMapLayer::notify_runtime_tile_data_update)>((new std::string("notify_runtime_tile_data_update"))->c_str())
			.fun<static_cast<Vector2i (TileMapLayer::*)(const Vector2i &, const Vector2i &, const Ref<TileMapPattern> &)>(&TileMapLayer::map_pattern)>((new std::string("map_pattern"))->c_str())
			.fun<static_cast<TypedArray<Vector2i> (TileMapLayer::*)(const Vector2i &)>(&TileMapLayer::get_surrounding_cells)>((new std::string("get_surrounding_cells"))->c_str())
			.fun<static_cast<Vector2i (TileMapLayer::*)(const Vector2i &, TileSet::CellNeighbor) const>(&TileMapLayer::get_neighbor_cell)>((new std::string("get_neighbor_cell"))->c_str())
			.fun<static_cast<Vector2 (TileMapLayer::*)(const Vector2i &) const>(&TileMapLayer::map_to_local)>((new std::string("map_to_local"))->c_str())
			.fun<static_cast<Vector2i (TileMapLayer::*)(const Vector2 &) const>(&TileMapLayer::local_to_map)>((new std::string("local_to_map"))->c_str())
			.fun<static_cast<void (TileMapLayer::*)(const RID &)>(&TileMapLayer::set_navigation_map)>((new std::string("set_navigation_map"))->c_str())
			.fun<static_cast<RID (TileMapLayer::*)() const>(&TileMapLayer::get_navigation_map)>((new std::string("get_navigation_map"))->c_str());
	qjs::Value _DebugVisibilityMode = context->newObject();
	_DebugVisibilityMode[(new std::string("DEBUG_VISIBILITY_MODE_DEFAULT"))->c_str()] = TileMapLayer::DebugVisibilityMode::DEBUG_VISIBILITY_MODE_DEFAULT;
	_DebugVisibilityMode[(new std::string("DEBUG_VISIBILITY_MODE_FORCE_HIDE"))->c_str()] = TileMapLayer::DebugVisibilityMode::DEBUG_VISIBILITY_MODE_FORCE_HIDE;
	_DebugVisibilityMode[(new std::string("DEBUG_VISIBILITY_MODE_FORCE_SHOW"))->c_str()] = TileMapLayer::DebugVisibilityMode::DEBUG_VISIBILITY_MODE_FORCE_SHOW;
	_module.add("DebugVisibilityMode", std::move(_DebugVisibilityMode));
}