import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import { Rect2i } from 'src/js_godot/variant/rect2i'
import { Node2D } from 'src/js_godot/classes/node2d'
import { RID } from 'src/js_godot/variant/rid'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_cell;
    method_erase_cell;
    method_fix_invalid_tiles;
    method_clear;
    method_get_cell_source_id;
    method_get_cell_atlas_coords;
    method_get_cell_alternative_tile;
    method_get_cell_tile_data;
    method_get_used_cells;
    method_get_used_cells_by_id;
    method_get_used_rect;
    method_get_pattern;
    method_set_pattern;
    method_set_cells_terrain_connect;
    method_set_cells_terrain_path;
    method_has_body_rid;
    method_get_coords_for_body_rid;
    method_update_internals;
    method_notify_runtime_tile_data_update;
    method_map_pattern;
    method_get_surrounding_cells;
    method_get_neighbor_cell;
    method_map_to_local;
    method_local_to_map;
    method_set_tile_map_data_from_array;
    method_get_tile_map_data_as_array;
    method_set_enabled;
    method_is_enabled;
    method_set_tile_set;
    method_get_tile_set;
    method_set_y_sort_origin;
    method_get_y_sort_origin;
    method_set_x_draw_order_reversed;
    method_is_x_draw_order_reversed;
    method_set_rendering_quadrant_size;
    method_get_rendering_quadrant_size;
    method_set_collision_enabled;
    method_is_collision_enabled;
    method_set_use_kinematic_bodies;
    method_is_using_kinematic_bodies;
    method_set_collision_visibility_mode;
    method_get_collision_visibility_mode;
    method_set_navigation_enabled;
    method_is_navigation_enabled;
    method_set_navigation_map;
    method_get_navigation_map;
    method_set_navigation_visibility_mode;
    method_get_navigation_visibility_mode;
}


export class TileMapLayer extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TileMapLayer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_cell");
        this._bindings.method_set_cell = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2428518503
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("erase_cell");
        this._bindings.method_erase_cell = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1130785943
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("fix_invalid_tiles");
        this._bindings.method_fix_invalid_tiles = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("clear");
        this._bindings.method_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_cell_source_id");
        this._bindings.method_get_cell_source_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2485466453
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_cell_atlas_coords");
        this._bindings.method_get_cell_atlas_coords = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3050897911
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_cell_alternative_tile");
        this._bindings.method_get_cell_alternative_tile = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2485466453
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_cell_tile_data");
        this._bindings.method_get_cell_tile_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          205084707
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_used_cells");
        this._bindings.method_get_used_cells = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_used_cells_by_id");
        this._bindings.method_get_used_cells_by_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4175304538
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_used_rect");
        this._bindings.method_get_used_rect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          410525958
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_pattern");
        this._bindings.method_get_pattern = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3820813253
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_pattern");
        this._bindings.method_set_pattern = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1491151770
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_cells_terrain_connect");
        this._bindings.method_set_cells_terrain_connect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          748968311
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_cells_terrain_path");
        this._bindings.method_set_cells_terrain_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          748968311
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("has_body_rid");
        this._bindings.method_has_body_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_coords_for_body_rid");
        this._bindings.method_get_coords_for_body_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          733700038
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("update_internals");
        this._bindings.method_update_internals = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("notify_runtime_tile_data_update");
        this._bindings.method_notify_runtime_tile_data_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2275361663
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("map_pattern");
        this._bindings.method_map_pattern = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1864516957
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_surrounding_cells");
        this._bindings.method_get_surrounding_cells = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2673526557
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_neighbor_cell");
        this._bindings.method_get_neighbor_cell = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          986575103
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("map_to_local");
        this._bindings.method_map_to_local = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          108438297
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("local_to_map");
        this._bindings.method_local_to_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          837806996
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_tile_map_data_from_array");
        this._bindings.method_set_tile_map_data_from_array = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2971499966
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_tile_map_data_as_array");
        this._bindings.method_get_tile_map_data_as_array = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2362200018
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_enabled");
        this._bindings.method_set_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("is_enabled");
        this._bindings.method_is_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_tile_set");
        this._bindings.method_set_tile_set = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          774531446
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_tile_set");
        this._bindings.method_get_tile_set = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2678226422
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_y_sort_origin");
        this._bindings.method_set_y_sort_origin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_y_sort_origin");
        this._bindings.method_get_y_sort_origin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_x_draw_order_reversed");
        this._bindings.method_set_x_draw_order_reversed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("is_x_draw_order_reversed");
        this._bindings.method_is_x_draw_order_reversed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_rendering_quadrant_size");
        this._bindings.method_set_rendering_quadrant_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_rendering_quadrant_size");
        this._bindings.method_get_rendering_quadrant_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_collision_enabled");
        this._bindings.method_set_collision_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("is_collision_enabled");
        this._bindings.method_is_collision_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_use_kinematic_bodies");
        this._bindings.method_set_use_kinematic_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("is_using_kinematic_bodies");
        this._bindings.method_is_using_kinematic_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_collision_visibility_mode");
        this._bindings.method_set_collision_visibility_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3508099847
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_collision_visibility_mode");
        this._bindings.method_get_collision_visibility_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          338220793
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_navigation_enabled");
        this._bindings.method_set_navigation_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("is_navigation_enabled");
        this._bindings.method_is_navigation_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_navigation_map");
        this._bindings.method_set_navigation_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_navigation_map");
        this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("set_navigation_visibility_mode");
        this._bindings.method_set_navigation_visibility_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3508099847
        );
      }
      {
        let classname = new StringName("TileMapLayer");
        let methodname = new StringName("get_navigation_visibility_mode");
        this._bindings.method_get_navigation_visibility_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          338220793
        );
      }
  }
  _use_tile_data_runtime_update(_coords) {
  }
  _tile_data_runtime_update(_coords, _tile_data) {
  }
  set_cell(_coords, _source_id, _atlas_coords, _alternative_tile) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell,
      this._owner,
      _coords, _source_id, _atlas_coords, _alternative_tile
    );
    
  }
  erase_cell(_coords) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_erase_cell,
      this._owner,
      _coords
    );
    
  }
  fix_invalid_tiles() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fix_invalid_tiles,
      this._owner,
      
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_cell_source_id(_coords) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_source_id,
      this._owner,
			Variant.Type.INT,
      _coords
    );
    
  }
  get_cell_atlas_coords(_coords) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_atlas_coords,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _coords
    );
    
  }
  get_cell_alternative_tile(_coords) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_alternative_tile,
      this._owner,
			Variant.Type.INT,
      _coords
    );
    
  }
  get_cell_tile_data(_coords) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cell_tile_data,
      this._owner,
			Variant.INT,
      _coords
    );
    
  }
  get_used_cells() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_used_cells,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_used_cells_by_id(_source_id, _atlas_coords, _alternative_tile) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_used_cells_by_id,
      this._owner,
			Variant.INT,
      _source_id, _atlas_coords, _alternative_tile
    );
    
  }
  get_used_rect() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_used_rect,
      this._owner,
			Variant.Type.RECT2I
    ,
      
    );
    
  }
  get_pattern(_coords_array) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pattern,
      this._owner,
			Variant.INT,
      _coords_array
    );
    
  }
  set_pattern(_position, _pattern) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pattern,
      this._owner,
      _position, _pattern
    );
    
  }
  set_cells_terrain_connect(_cells, _terrain_set, _terrain, _ignore_empty_terrains) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cells_terrain_connect,
      this._owner,
      _cells, _terrain_set, _terrain, _ignore_empty_terrains
    );
    
  }
  set_cells_terrain_path(_path, _terrain_set, _terrain, _ignore_empty_terrains) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cells_terrain_path,
      this._owner,
      _path, _terrain_set, _terrain, _ignore_empty_terrains
    );
    
  }
  has_body_rid(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_body_rid,
      this._owner,
			Variant.Type.BOOL,
      _body
    );
    
  }
  get_coords_for_body_rid(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_coords_for_body_rid,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _body
    );
    
  }
  update_internals() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_update_internals,
      this._owner,
      
    );
    
  }
  notify_runtime_tile_data_update() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_notify_runtime_tile_data_update,
      this._owner,
      
    );
    
  }
  map_pattern(_position_in_tilemap, _coords_in_pattern, _pattern) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_pattern,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _position_in_tilemap, _coords_in_pattern, _pattern
    );
    
  }
  get_surrounding_cells(_coords) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surrounding_cells,
      this._owner,
			Variant.INT,
      _coords
    );
    
  }
  get_neighbor_cell(_coords, _neighbor) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_neighbor_cell,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _coords, _neighbor
    );
    
  }
  map_to_local(_map_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_map_to_local,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _map_position
    );
    
  }
  local_to_map(_local_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_local_to_map,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _local_position
    );
    
  }
  set_tile_map_data_from_array(_tile_map_layer_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tile_map_data_from_array,
      this._owner,
      _tile_map_layer_data
    );
    
  }
  get_tile_map_data_as_array() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tile_map_data_as_array,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY
    ,
      
    );
    
  }
  set_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_tile_set(_tile_set) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tile_set,
      this._owner,
      _tile_set
    );
    
  }
  get_tile_set() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tile_set,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_y_sort_origin(_y_sort_origin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_y_sort_origin,
      this._owner,
      _y_sort_origin
    );
    
  }
  get_y_sort_origin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_y_sort_origin,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_x_draw_order_reversed(_x_draw_order_reversed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_x_draw_order_reversed,
      this._owner,
      _x_draw_order_reversed
    );
    
  }
  is_x_draw_order_reversed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_x_draw_order_reversed,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_rendering_quadrant_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rendering_quadrant_size,
      this._owner,
      _size
    );
    
  }
  get_rendering_quadrant_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rendering_quadrant_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_collision_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_collision_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_collision_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_use_kinematic_bodies(_use_kinematic_bodies) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_kinematic_bodies,
      this._owner,
      _use_kinematic_bodies
    );
    
  }
  is_using_kinematic_bodies() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_kinematic_bodies,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_collision_visibility_mode(_visibility_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_visibility_mode,
      this._owner,
      _visibility_mode
    );
    
  }
  get_collision_visibility_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_visibility_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_navigation_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_navigation_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_navigation_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_navigation_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_navigation_map(_map) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_navigation_map,
      this._owner,
      _map
    );
    
  }
  get_navigation_map() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  set_navigation_visibility_mode(_show_navigation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_navigation_visibility_mode,
      this._owner,
      _show_navigation
    );
    
  }
  get_navigation_visibility_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_navigation_visibility_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static DebugVisibilityMode = {
    DEBUG_VISIBILITY_MODE_DEFAULT: 0,
    DEBUG_VISIBILITY_MODE_FORCE_HIDE: 2,
    DEBUG_VISIBILITY_MODE_FORCE_SHOW: 1,
  }
}