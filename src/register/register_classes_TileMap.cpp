#include <godot_cpp/classes/tile_map.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/rect2i.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/variant/vector2i.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_TileMap() {
    qjs::Context::Module &_module = get_Node2D_module();
    _module.class_<TileMap>("TileMap")
            .constructor<>()
            .base<Node2D>()
            .property<static_cast<Ref<TileSet>(TileMap::*)()const>(&TileMap::get_tileset),static_cast<void(TileMap::*)(const Ref<TileSet> &)>(&TileMap::set_tileset)>("tile_set")
            .property<static_cast<int32_t(TileMap::*)()const>(&TileMap::get_rendering_quadrant_size),static_cast<void(TileMap::*)(int32_t)>(&TileMap::set_rendering_quadrant_size)>("rendering_quadrant_size")
            .property<static_cast<bool(TileMap::*)()const>(&TileMap::is_collision_animatable),static_cast<void(TileMap::*)(bool)>(&TileMap::set_collision_animatable)>("collision_animatable")
            .property<static_cast<TileMap::VisibilityMode(TileMap::*)()const>(&TileMap::get_collision_visibility_mode),static_cast<void(TileMap::*)(TileMap::VisibilityMode)>(&TileMap::set_collision_visibility_mode)>("collision_visibility_mode")
            .property<static_cast<TileMap::VisibilityMode(TileMap::*)()const>(&TileMap::get_navigation_visibility_mode),static_cast<void(TileMap::*)(TileMap::VisibilityMode)>(&TileMap::set_navigation_visibility_mode)>("navigation_visibility_mode")
            .fun<static_cast<bool(TileMap::*)(int32_t,const Vector2i &)>(&TileMap::_use_tile_data_runtime_update)>("_use_tile_data_runtime_update")
            .fun<static_cast<void(TileMap::*)(int32_t,const Vector2i &,TileData *)>(&TileMap::_tile_data_runtime_update)>("_tile_data_runtime_update")
            .fun<static_cast<void(TileMap::*)(int32_t,const RID &)>(&TileMap::set_navigation_map)>("set_navigation_map")
            .fun<static_cast<RID(TileMap::*)(int32_t)const>(&TileMap::get_navigation_map)>("get_navigation_map")
            .fun<static_cast<void(TileMap::*)(int32_t)>(&TileMap::force_update)>("force_update")
            .fun<static_cast<int32_t(TileMap::*)()const>(&TileMap::get_layers_count)>("get_layers_count")
            .fun<static_cast<void(TileMap::*)(int32_t)>(&TileMap::add_layer)>("add_layer")
            .fun<static_cast<void(TileMap::*)(int32_t,int32_t)>(&TileMap::move_layer)>("move_layer")
            .fun<static_cast<void(TileMap::*)(int32_t)>(&TileMap::remove_layer)>("remove_layer")
            .fun<static_cast<void(TileMap::*)(int32_t,const String &)>(&TileMap::set_layer_name)>("set_layer_name")
            .fun<static_cast<String(TileMap::*)(int32_t)const>(&TileMap::get_layer_name)>("get_layer_name")
            .fun<static_cast<void(TileMap::*)(int32_t,bool)>(&TileMap::set_layer_enabled)>("set_layer_enabled")
            .fun<static_cast<bool(TileMap::*)(int32_t)const>(&TileMap::is_layer_enabled)>("is_layer_enabled")
            .fun<static_cast<void(TileMap::*)(int32_t,const Color &)>(&TileMap::set_layer_modulate)>("set_layer_modulate")
            .fun<static_cast<Color(TileMap::*)(int32_t)const>(&TileMap::get_layer_modulate)>("get_layer_modulate")
            .fun<static_cast<void(TileMap::*)(int32_t,bool)>(&TileMap::set_layer_y_sort_enabled)>("set_layer_y_sort_enabled")
            .fun<static_cast<bool(TileMap::*)(int32_t)const>(&TileMap::is_layer_y_sort_enabled)>("is_layer_y_sort_enabled")
            .fun<static_cast<void(TileMap::*)(int32_t,int32_t)>(&TileMap::set_layer_y_sort_origin)>("set_layer_y_sort_origin")
            .fun<static_cast<int32_t(TileMap::*)(int32_t)const>(&TileMap::get_layer_y_sort_origin)>("get_layer_y_sort_origin")
            .fun<static_cast<void(TileMap::*)(int32_t,int32_t)>(&TileMap::set_layer_z_index)>("set_layer_z_index")
            .fun<static_cast<int32_t(TileMap::*)(int32_t)const>(&TileMap::get_layer_z_index)>("get_layer_z_index")
            .fun<static_cast<void(TileMap::*)(int32_t,bool)>(&TileMap::set_layer_navigation_enabled)>("set_layer_navigation_enabled")
            .fun<static_cast<bool(TileMap::*)(int32_t)const>(&TileMap::is_layer_navigation_enabled)>("is_layer_navigation_enabled")
            .fun<static_cast<void(TileMap::*)(int32_t,const RID &)>(&TileMap::set_layer_navigation_map)>("set_layer_navigation_map")
            .fun<static_cast<RID(TileMap::*)(int32_t)const>(&TileMap::get_layer_navigation_map)>("get_layer_navigation_map")
            .fun<static_cast<void(TileMap::*)(int32_t,const Vector2i &,int32_t,const Vector2i &,int32_t)>(&TileMap::set_cell)>("set_cell")
            .fun<static_cast<void(TileMap::*)(int32_t,const Vector2i &)>(&TileMap::erase_cell)>("erase_cell")
            .fun<static_cast<int32_t(TileMap::*)(int32_t,const Vector2i &,bool)const>(&TileMap::get_cell_source_id)>("get_cell_source_id")
            .fun<static_cast<Vector2i(TileMap::*)(int32_t,const Vector2i &,bool)const>(&TileMap::get_cell_atlas_coords)>("get_cell_atlas_coords")
            .fun<static_cast<int32_t(TileMap::*)(int32_t,const Vector2i &,bool)const>(&TileMap::get_cell_alternative_tile)>("get_cell_alternative_tile")
            .fun<static_cast<TileData *(TileMap::*)(int32_t,const Vector2i &,bool)const>(&TileMap::get_cell_tile_data)>("get_cell_tile_data")
            .fun<static_cast<Vector2i(TileMap::*)(const RID &)>(&TileMap::get_coords_for_body_rid)>("get_coords_for_body_rid")
            .fun<static_cast<int32_t(TileMap::*)(const RID &)>(&TileMap::get_layer_for_body_rid)>("get_layer_for_body_rid")
            .fun<static_cast<Ref<TileMapPattern>(TileMap::*)(int32_t,const TypedArray<Vector2i> &)>(&TileMap::get_pattern)>("get_pattern")
            .fun<static_cast<Vector2i(TileMap::*)(const Vector2i &,const Vector2i &,const Ref<TileMapPattern> &)>(&TileMap::map_pattern)>("map_pattern")
            .fun<static_cast<void(TileMap::*)(int32_t,const Vector2i &,const Ref<TileMapPattern> &)>(&TileMap::set_pattern)>("set_pattern")
            .fun<static_cast<void(TileMap::*)(int32_t,const TypedArray<Vector2i> &,int32_t,int32_t,bool)>(&TileMap::set_cells_terrain_connect)>("set_cells_terrain_connect")
            .fun<static_cast<void(TileMap::*)(int32_t,const TypedArray<Vector2i> &,int32_t,int32_t,bool)>(&TileMap::set_cells_terrain_path)>("set_cells_terrain_path")
            .fun<static_cast<void(TileMap::*)()>(&TileMap::fix_invalid_tiles)>("fix_invalid_tiles")
            .fun<static_cast<void(TileMap::*)(int32_t)>(&TileMap::clear_layer)>("clear_layer")
            .fun<static_cast<void(TileMap::*)()>(&TileMap::clear)>("clear")
            .fun<static_cast<void(TileMap::*)()>(&TileMap::update_internals)>("update_internals")
            .fun<static_cast<void(TileMap::*)(int32_t)>(&TileMap::notify_runtime_tile_data_update)>("notify_runtime_tile_data_update")
            .fun<static_cast<TypedArray<Vector2i>(TileMap::*)(const Vector2i &)>(&TileMap::get_surrounding_cells)>("get_surrounding_cells")
            .fun<static_cast<TypedArray<Vector2i>(TileMap::*)(int32_t)const>(&TileMap::get_used_cells)>("get_used_cells")
            .fun<static_cast<TypedArray<Vector2i>(TileMap::*)(int32_t,int32_t,const Vector2i &,int32_t)const>(&TileMap::get_used_cells_by_id)>("get_used_cells_by_id")
            .fun<static_cast<Rect2i(TileMap::*)()const>(&TileMap::get_used_rect)>("get_used_rect")
            .fun<static_cast<Vector2(TileMap::*)(const Vector2i &)const>(&TileMap::map_to_local)>("map_to_local")
            .fun<static_cast<Vector2i(TileMap::*)(const Vector2 &)const>(&TileMap::local_to_map)>("local_to_map")
            .fun<static_cast<Vector2i(TileMap::*)(const Vector2i &,TileSet::CellNeighbor)const>(&TileMap::get_neighbor_cell)>("get_neighbor_cell")
;    qjs::Value _VisibilityMode = context->newObject();
    _VisibilityMode["VISIBILITY_MODE_DEFAULT"] = TileMap::VisibilityMode::VISIBILITY_MODE_DEFAULT;
    _VisibilityMode["VISIBILITY_MODE_FORCE_HIDE"] = TileMap::VisibilityMode::VISIBILITY_MODE_FORCE_HIDE;
    _VisibilityMode["VISIBILITY_MODE_FORCE_SHOW"] = TileMap::VisibilityMode::VISIBILITY_MODE_FORCE_SHOW;
    _module.add("VisibilityMode", std::move(_VisibilityMode));
}