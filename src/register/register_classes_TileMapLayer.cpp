#include <godot_cpp/classes/tile_map_layer.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TileMapLayer() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<TileMapLayer>("TileMapLayer")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<PackedByteArray(TileMapLayer::*)()const>(&TileMapLayer::get_tile_map_data_as_array),static_cast<void(TileMapLayer::*)(const PackedByteArray &)>(&TileMapLayer::set_tile_map_data_from_array)>("tile_map_data")
            .property<static_cast<bool(TileMapLayer::*)()const>(&TileMapLayer::is_enabled),static_cast<void(TileMapLayer::*)(bool)>(&TileMapLayer::set_enabled)>("enabled")
            .property<static_cast<Ref<TileSet>(TileMapLayer::*)()const>(&TileMapLayer::get_tile_set),static_cast<void(TileMapLayer::*)(const Ref<TileSet> &)>(&TileMapLayer::set_tile_set)>("tile_set")
            .property<static_cast<int32_t(TileMapLayer::*)()const>(&TileMapLayer::get_y_sort_origin),static_cast<void(TileMapLayer::*)(int32_t)>(&TileMapLayer::set_y_sort_origin)>("y_sort_origin")
            .property<static_cast<int32_t(TileMapLayer::*)()const>(&TileMapLayer::get_rendering_quadrant_size),static_cast<void(TileMapLayer::*)(int32_t)>(&TileMapLayer::set_rendering_quadrant_size)>("rendering_quadrant_size")
            .property<static_cast<bool(TileMapLayer::*)()const>(&TileMapLayer::is_collision_enabled),static_cast<void(TileMapLayer::*)(bool)>(&TileMapLayer::set_collision_enabled)>("collision_enabled")
            .property<static_cast<bool(TileMapLayer::*)()const>(&TileMapLayer::is_using_kinematic_bodies),static_cast<void(TileMapLayer::*)(bool)>(&TileMapLayer::set_use_kinematic_bodies)>("use_kinematic_bodies")
            .property<static_cast<TileMapLayer::DebugVisibilityMode(TileMapLayer::*)()const>(&TileMapLayer::get_collision_visibility_mode),static_cast<void(TileMapLayer::*)(TileMapLayer::DebugVisibilityMode)>(&TileMapLayer::set_collision_visibility_mode)>("collision_visibility_mode")
            .property<static_cast<bool(TileMapLayer::*)()const>(&TileMapLayer::is_navigation_enabled),static_cast<void(TileMapLayer::*)(bool)>(&TileMapLayer::set_navigation_enabled)>("navigation_enabled")
            .property<static_cast<TileMapLayer::DebugVisibilityMode(TileMapLayer::*)()const>(&TileMapLayer::get_navigation_visibility_mode),static_cast<void(TileMapLayer::*)(TileMapLayer::DebugVisibilityMode)>(&TileMapLayer::set_navigation_visibility_mode)>("navigation_visibility_mode")
            .fun<static_cast<bool(TileMapLayer::*)(const Vector2i &)>(&TileMapLayer::_use_tile_data_runtime_update)>("_use_tile_data_runtime_update")
            .fun<static_cast<void(TileMapLayer::*)(const Vector2i &,TileData *)>(&TileMapLayer::_tile_data_runtime_update)>("_tile_data_runtime_update")
            .fun<static_cast<void(TileMapLayer::*)(const Vector2i &,int32_t,const Vector2i &,int32_t)>(&TileMapLayer::set_cell)>("set_cell")
            .fun<static_cast<void(TileMapLayer::*)(const Vector2i &)>(&TileMapLayer::erase_cell)>("erase_cell")
            .fun<static_cast<void(TileMapLayer::*)()>(&TileMapLayer::fix_invalid_tiles)>("fix_invalid_tiles")
            .fun<static_cast<void(TileMapLayer::*)()>(&TileMapLayer::clear)>("clear")
            .fun<static_cast<int32_t(TileMapLayer::*)(const Vector2i &)const>(&TileMapLayer::get_cell_source_id)>("get_cell_source_id")
            .fun<static_cast<Vector2i(TileMapLayer::*)(const Vector2i &)const>(&TileMapLayer::get_cell_atlas_coords)>("get_cell_atlas_coords")
            .fun<static_cast<int32_t(TileMapLayer::*)(const Vector2i &)const>(&TileMapLayer::get_cell_alternative_tile)>("get_cell_alternative_tile")
            .fun<static_cast<TileData *(TileMapLayer::*)(const Vector2i &)const>(&TileMapLayer::get_cell_tile_data)>("get_cell_tile_data")
            .fun<static_cast<TypedArray<Vector2i>(TileMapLayer::*)()const>(&TileMapLayer::get_used_cells)>("get_used_cells")
            .fun<static_cast<TypedArray<Vector2i>(TileMapLayer::*)(int32_t,const Vector2i &,int32_t)const>(&TileMapLayer::get_used_cells_by_id)>("get_used_cells_by_id")
            .fun<static_cast<Rect2i(TileMapLayer::*)()const>(&TileMapLayer::get_used_rect)>("get_used_rect")
            .fun<static_cast<Ref<TileMapPattern>(TileMapLayer::*)(const TypedArray<Vector2i> &)>(&TileMapLayer::get_pattern)>("get_pattern")
            .fun<static_cast<void(TileMapLayer::*)(const Vector2i &,const Ref<TileMapPattern> &)>(&TileMapLayer::set_pattern)>("set_pattern")
            .fun<static_cast<void(TileMapLayer::*)(const TypedArray<Vector2i> &,int32_t,int32_t,bool)>(&TileMapLayer::set_cells_terrain_connect)>("set_cells_terrain_connect")
            .fun<static_cast<void(TileMapLayer::*)(const TypedArray<Vector2i> &,int32_t,int32_t,bool)>(&TileMapLayer::set_cells_terrain_path)>("set_cells_terrain_path")
            .fun<static_cast<bool(TileMapLayer::*)(const RID &)const>(&TileMapLayer::has_body_rid)>("has_body_rid")
            .fun<static_cast<Vector2i(TileMapLayer::*)(const RID &)const>(&TileMapLayer::get_coords_for_body_rid)>("get_coords_for_body_rid")
            .fun<static_cast<void(TileMapLayer::*)()>(&TileMapLayer::update_internals)>("update_internals")
            .fun<static_cast<void(TileMapLayer::*)()>(&TileMapLayer::notify_runtime_tile_data_update)>("notify_runtime_tile_data_update")
            .fun<static_cast<Vector2i(TileMapLayer::*)(const Vector2i &,const Vector2i &,const Ref<TileMapPattern> &)>(&TileMapLayer::map_pattern)>("map_pattern")
            .fun<static_cast<TypedArray<Vector2i>(TileMapLayer::*)(const Vector2i &)>(&TileMapLayer::get_surrounding_cells)>("get_surrounding_cells")
            .fun<static_cast<Vector2i(TileMapLayer::*)(const Vector2i &,TileSet::CellNeighbor)const>(&TileMapLayer::get_neighbor_cell)>("get_neighbor_cell")
            .fun<static_cast<Vector2(TileMapLayer::*)(const Vector2i &)const>(&TileMapLayer::map_to_local)>("map_to_local")
            .fun<static_cast<Vector2i(TileMapLayer::*)(const Vector2 &)const>(&TileMapLayer::local_to_map)>("local_to_map")
            .fun<static_cast<void(TileMapLayer::*)(const RID &)>(&TileMapLayer::set_navigation_map)>("set_navigation_map")
            .fun<static_cast<RID(TileMapLayer::*)()const>(&TileMapLayer::get_navigation_map)>("get_navigation_map")
;    qjs::Value _DebugVisibilityMode = context->newObject();
    _DebugVisibilityMode["DEBUG_VISIBILITY_MODE_DEFAULT"] = TileMapLayer::DebugVisibilityMode::DEBUG_VISIBILITY_MODE_DEFAULT;
    _DebugVisibilityMode["DEBUG_VISIBILITY_MODE_FORCE_HIDE"] = TileMapLayer::DebugVisibilityMode::DEBUG_VISIBILITY_MODE_FORCE_HIDE;
    _DebugVisibilityMode["DEBUG_VISIBILITY_MODE_FORCE_SHOW"] = TileMapLayer::DebugVisibilityMode::DEBUG_VISIBILITY_MODE_FORCE_SHOW;
    _module.add("DebugVisibilityMode", std::move(_DebugVisibilityMode));
}