import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class TileMapLayer extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TileMapLayer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_cell() {
    if (!this._bindings.method_set_cell) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_cell");
      this._bindings.method_set_cell = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2428518503
      );
    }
  }
  static init_method_erase_cell() {
    if (!this._bindings.method_erase_cell) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("erase_cell");
      this._bindings.method_erase_cell = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_fix_invalid_tiles() {
    if (!this._bindings.method_fix_invalid_tiles) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("fix_invalid_tiles");
      this._bindings.method_fix_invalid_tiles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_cell_source_id() {
    if (!this._bindings.method_get_cell_source_id) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_cell_source_id");
      this._bindings.method_get_cell_source_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2485466453
      );
    }
  }
  static init_method_get_cell_atlas_coords() {
    if (!this._bindings.method_get_cell_atlas_coords) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_cell_atlas_coords");
      this._bindings.method_get_cell_atlas_coords = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3050897911
      );
    }
  }
  static init_method_get_cell_alternative_tile() {
    if (!this._bindings.method_get_cell_alternative_tile) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_cell_alternative_tile");
      this._bindings.method_get_cell_alternative_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2485466453
      );
    }
  }
  static init_method_get_cell_tile_data() {
    if (!this._bindings.method_get_cell_tile_data) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_cell_tile_data");
      this._bindings.method_get_cell_tile_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        205084707
      );
    }
  }
  static init_method_get_used_cells() {
    if (!this._bindings.method_get_used_cells) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_used_cells");
      this._bindings.method_get_used_cells = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_get_used_cells_by_id() {
    if (!this._bindings.method_get_used_cells_by_id) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_used_cells_by_id");
      this._bindings.method_get_used_cells_by_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4175304538
      );
    }
  }
  static init_method_get_used_rect() {
    if (!this._bindings.method_get_used_rect) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_used_rect");
      this._bindings.method_get_used_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        410525958
      );
    }
  }
  static init_method_get_pattern() {
    if (!this._bindings.method_get_pattern) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_pattern");
      this._bindings.method_get_pattern = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3820813253
      );
    }
  }
  static init_method_set_pattern() {
    if (!this._bindings.method_set_pattern) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_pattern");
      this._bindings.method_set_pattern = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1491151770
      );
    }
  }
  static init_method_set_cells_terrain_connect() {
    if (!this._bindings.method_set_cells_terrain_connect) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_cells_terrain_connect");
      this._bindings.method_set_cells_terrain_connect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        748968311
      );
    }
  }
  static init_method_set_cells_terrain_path() {
    if (!this._bindings.method_set_cells_terrain_path) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_cells_terrain_path");
      this._bindings.method_set_cells_terrain_path = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        748968311
      );
    }
  }
  static init_method_has_body_rid() {
    if (!this._bindings.method_has_body_rid) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("has_body_rid");
      this._bindings.method_has_body_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_get_coords_for_body_rid() {
    if (!this._bindings.method_get_coords_for_body_rid) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_coords_for_body_rid");
      this._bindings.method_get_coords_for_body_rid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        733700038
      );
    }
  }
  static init_method_update_internals() {
    if (!this._bindings.method_update_internals) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("update_internals");
      this._bindings.method_update_internals = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_notify_runtime_tile_data_update() {
    if (!this._bindings.method_notify_runtime_tile_data_update) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("notify_runtime_tile_data_update");
      this._bindings.method_notify_runtime_tile_data_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2275361663
      );
    }
  }
  static init_method_map_pattern() {
    if (!this._bindings.method_map_pattern) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("map_pattern");
      this._bindings.method_map_pattern = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1864516957
      );
    }
  }
  static init_method_get_surrounding_cells() {
    if (!this._bindings.method_get_surrounding_cells) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_surrounding_cells");
      this._bindings.method_get_surrounding_cells = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2673526557
      );
    }
  }
  static init_method_get_neighbor_cell() {
    if (!this._bindings.method_get_neighbor_cell) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_neighbor_cell");
      this._bindings.method_get_neighbor_cell = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        986575103
      );
    }
  }
  static init_method_map_to_local() {
    if (!this._bindings.method_map_to_local) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("map_to_local");
      this._bindings.method_map_to_local = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        108438297
      );
    }
  }
  static init_method_local_to_map() {
    if (!this._bindings.method_local_to_map) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("local_to_map");
      this._bindings.method_local_to_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        837806996
      );
    }
  }
  static init_method_set_tile_map_data_from_array() {
    if (!this._bindings.method_set_tile_map_data_from_array) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_tile_map_data_from_array");
      this._bindings.method_set_tile_map_data_from_array = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2971499966
      );
    }
  }
  static init_method_get_tile_map_data_as_array() {
    if (!this._bindings.method_get_tile_map_data_as_array) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_tile_map_data_as_array");
      this._bindings.method_get_tile_map_data_as_array = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2362200018
      );
    }
  }
  static init_method_set_enabled() {
    if (!this._bindings.method_set_enabled) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_enabled");
      this._bindings.method_set_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_enabled() {
    if (!this._bindings.method_is_enabled) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("is_enabled");
      this._bindings.method_is_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_tile_set() {
    if (!this._bindings.method_set_tile_set) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_tile_set");
      this._bindings.method_set_tile_set = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        774531446
      );
    }
  }
  static init_method_get_tile_set() {
    if (!this._bindings.method_get_tile_set) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_tile_set");
      this._bindings.method_get_tile_set = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2678226422
      );
    }
  }
  static init_method_set_y_sort_origin() {
    if (!this._bindings.method_set_y_sort_origin) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_y_sort_origin");
      this._bindings.method_set_y_sort_origin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_y_sort_origin() {
    if (!this._bindings.method_get_y_sort_origin) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_y_sort_origin");
      this._bindings.method_get_y_sort_origin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_x_draw_order_reversed() {
    if (!this._bindings.method_set_x_draw_order_reversed) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_x_draw_order_reversed");
      this._bindings.method_set_x_draw_order_reversed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_x_draw_order_reversed() {
    if (!this._bindings.method_is_x_draw_order_reversed) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("is_x_draw_order_reversed");
      this._bindings.method_is_x_draw_order_reversed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_rendering_quadrant_size() {
    if (!this._bindings.method_set_rendering_quadrant_size) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_rendering_quadrant_size");
      this._bindings.method_set_rendering_quadrant_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_rendering_quadrant_size() {
    if (!this._bindings.method_get_rendering_quadrant_size) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_rendering_quadrant_size");
      this._bindings.method_get_rendering_quadrant_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_collision_enabled() {
    if (!this._bindings.method_set_collision_enabled) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_collision_enabled");
      this._bindings.method_set_collision_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_collision_enabled() {
    if (!this._bindings.method_is_collision_enabled) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("is_collision_enabled");
      this._bindings.method_is_collision_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_use_kinematic_bodies() {
    if (!this._bindings.method_set_use_kinematic_bodies) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_use_kinematic_bodies");
      this._bindings.method_set_use_kinematic_bodies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_kinematic_bodies() {
    if (!this._bindings.method_is_using_kinematic_bodies) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("is_using_kinematic_bodies");
      this._bindings.method_is_using_kinematic_bodies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_collision_visibility_mode() {
    if (!this._bindings.method_set_collision_visibility_mode) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_collision_visibility_mode");
      this._bindings.method_set_collision_visibility_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3508099847
      );
    }
  }
  static init_method_get_collision_visibility_mode() {
    if (!this._bindings.method_get_collision_visibility_mode) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_collision_visibility_mode");
      this._bindings.method_get_collision_visibility_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        338220793
      );
    }
  }
  static init_method_set_navigation_enabled() {
    if (!this._bindings.method_set_navigation_enabled) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_navigation_enabled");
      this._bindings.method_set_navigation_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_navigation_enabled() {
    if (!this._bindings.method_is_navigation_enabled) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("is_navigation_enabled");
      this._bindings.method_is_navigation_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_navigation_map() {
    if (!this._bindings.method_set_navigation_map) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_navigation_map");
      this._bindings.method_set_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_get_navigation_map() {
    if (!this._bindings.method_get_navigation_map) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("get_navigation_map");
      this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_navigation_visibility_mode() {
    if (!this._bindings.method_set_navigation_visibility_mode) {
      let classname = new StringName("TileMapLayer");
      let methodname = new StringName("set_navigation_visibility_mode");
      this._bindings.method_set_navigation_visibility_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3508099847
      );
    }
  }
  static init_method_get_navigation_visibility_mode() {
    if (!this._bindings.method_get_navigation_visibility_mode) {
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
    TileMapLayer.init_method_set_cell();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_cell,
      this._owner,
      _coords, _source_id, _atlas_coords, _alternative_tile
    );
    
  }
  erase_cell(_coords) {
    TileMapLayer.init_method_erase_cell();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_erase_cell,
      this._owner,
      _coords
    );
    
  }
  fix_invalid_tiles() {
    TileMapLayer.init_method_fix_invalid_tiles();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_fix_invalid_tiles,
      this._owner,
      
    );
    
  }
  clear() {
    TileMapLayer.init_method_clear();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_cell_source_id(_coords) {
    TileMapLayer.init_method_get_cell_source_id();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_cell_source_id,
      this._owner,
			Variant.Type.INT,
    
      _coords
    );
    
  }
  get_cell_atlas_coords(_coords) {
    TileMapLayer.init_method_get_cell_atlas_coords();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_cell_atlas_coords,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _coords
    );
    
  }
  get_cell_alternative_tile(_coords) {
    TileMapLayer.init_method_get_cell_alternative_tile();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_cell_alternative_tile,
      this._owner,
			Variant.Type.INT,
    
      _coords
    );
    
  }
  get_cell_tile_data(_coords) {
    TileMapLayer.init_method_get_cell_tile_data();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_cell_tile_data,
      this._owner,
			Variant.Type.OBJECT,
      _coords
    );
    
  }
  get_used_cells() {
    TileMapLayer.init_method_get_used_cells();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_used_cells,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_used_cells_by_id(_source_id, _atlas_coords, _alternative_tile) {
    TileMapLayer.init_method_get_used_cells_by_id();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_used_cells_by_id,
      this._owner,
			Variant.Type.ARRAY,
      _source_id, _atlas_coords, _alternative_tile
    );
    
  }
  get_used_rect() {
    TileMapLayer.init_method_get_used_rect();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_used_rect,
      this._owner,
			Variant.Type.RECT2I,
    
      
    );
    
  }
  get_pattern(_coords_array) {
    TileMapLayer.init_method_get_pattern();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_pattern,
      this._owner,
			Variant.Type.OBJECT,
      _coords_array
    );
    
  }
  set_pattern(_position, _pattern) {
    TileMapLayer.init_method_set_pattern();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_pattern,
      this._owner,
      _position, _pattern
    );
    
  }
  set_cells_terrain_connect(_cells, _terrain_set, _terrain, _ignore_empty_terrains) {
    TileMapLayer.init_method_set_cells_terrain_connect();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_cells_terrain_connect,
      this._owner,
      _cells, _terrain_set, _terrain, _ignore_empty_terrains
    );
    
  }
  set_cells_terrain_path(_path, _terrain_set, _terrain, _ignore_empty_terrains) {
    TileMapLayer.init_method_set_cells_terrain_path();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_cells_terrain_path,
      this._owner,
      _path, _terrain_set, _terrain, _ignore_empty_terrains
    );
    
  }
  has_body_rid(_body) {
    TileMapLayer.init_method_has_body_rid();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_has_body_rid,
      this._owner,
			Variant.Type.BOOL,
    
      _body
    );
    
  }
  get_coords_for_body_rid(_body) {
    TileMapLayer.init_method_get_coords_for_body_rid();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_coords_for_body_rid,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _body
    );
    
  }
  update_internals() {
    TileMapLayer.init_method_update_internals();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_update_internals,
      this._owner,
      
    );
    
  }
  notify_runtime_tile_data_update() {
    TileMapLayer.init_method_notify_runtime_tile_data_update();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_notify_runtime_tile_data_update,
      this._owner,
      
    );
    
  }
  map_pattern(_position_in_tilemap, _coords_in_pattern, _pattern) {
    TileMapLayer.init_method_map_pattern();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_map_pattern,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _position_in_tilemap, _coords_in_pattern, _pattern
    );
    
  }
  get_surrounding_cells(_coords) {
    TileMapLayer.init_method_get_surrounding_cells();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_surrounding_cells,
      this._owner,
			Variant.Type.ARRAY,
      _coords
    );
    
  }
  get_neighbor_cell(_coords, _neighbor) {
    TileMapLayer.init_method_get_neighbor_cell();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_neighbor_cell,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _coords, _neighbor
    );
    
  }
  map_to_local(_map_position) {
    TileMapLayer.init_method_map_to_local();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_map_to_local,
      this._owner,
			Variant.Type.VECTOR2,
    
      _map_position
    );
    
  }
  local_to_map(_local_position) {
    TileMapLayer.init_method_local_to_map();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_local_to_map,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _local_position
    );
    
  }
  set_tile_map_data_from_array(_tile_map_layer_data) {
    TileMapLayer.init_method_set_tile_map_data_from_array();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_tile_map_data_from_array,
      this._owner,
      _tile_map_layer_data
    );
    
  }
  get_tile_map_data_as_array() {
    TileMapLayer.init_method_get_tile_map_data_as_array();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_tile_map_data_as_array,
      this._owner,
			Variant.Type.PACKED_BYTE_ARRAY,
    
      
    );
    
  }
  set_enabled(_enabled) {
    TileMapLayer.init_method_set_enabled();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_enabled() {
    TileMapLayer.init_method_is_enabled();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_is_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_tile_set(_tile_set) {
    TileMapLayer.init_method_set_tile_set();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_tile_set,
      this._owner,
      _tile_set
    );
    
  }
  get_tile_set() {
    TileMapLayer.init_method_get_tile_set();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_tile_set,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_y_sort_origin(_y_sort_origin) {
    TileMapLayer.init_method_set_y_sort_origin();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_y_sort_origin,
      this._owner,
      _y_sort_origin
    );
    
  }
  get_y_sort_origin() {
    TileMapLayer.init_method_get_y_sort_origin();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_y_sort_origin,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_x_draw_order_reversed(_x_draw_order_reversed) {
    TileMapLayer.init_method_set_x_draw_order_reversed();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_x_draw_order_reversed,
      this._owner,
      _x_draw_order_reversed
    );
    
  }
  is_x_draw_order_reversed() {
    TileMapLayer.init_method_is_x_draw_order_reversed();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_is_x_draw_order_reversed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_rendering_quadrant_size(_size) {
    TileMapLayer.init_method_set_rendering_quadrant_size();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_rendering_quadrant_size,
      this._owner,
      _size
    );
    
  }
  get_rendering_quadrant_size() {
    TileMapLayer.init_method_get_rendering_quadrant_size();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_rendering_quadrant_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_collision_enabled(_enabled) {
    TileMapLayer.init_method_set_collision_enabled();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_collision_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_collision_enabled() {
    TileMapLayer.init_method_is_collision_enabled();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_is_collision_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_kinematic_bodies(_use_kinematic_bodies) {
    TileMapLayer.init_method_set_use_kinematic_bodies();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_use_kinematic_bodies,
      this._owner,
      _use_kinematic_bodies
    );
    
  }
  is_using_kinematic_bodies() {
    TileMapLayer.init_method_is_using_kinematic_bodies();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_is_using_kinematic_bodies,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collision_visibility_mode(_visibility_mode) {
    TileMapLayer.init_method_set_collision_visibility_mode();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_collision_visibility_mode,
      this._owner,
      _visibility_mode
    );
    
  }
  get_collision_visibility_mode() {
    TileMapLayer.init_method_get_collision_visibility_mode();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_collision_visibility_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_navigation_enabled(_enabled) {
    TileMapLayer.init_method_set_navigation_enabled();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_navigation_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_navigation_enabled() {
    TileMapLayer.init_method_is_navigation_enabled();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_is_navigation_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_navigation_map(_map) {
    TileMapLayer.init_method_set_navigation_map();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_navigation_map,
      this._owner,
      _map
    );
    
  }
  get_navigation_map() {
    TileMapLayer.init_method_get_navigation_map();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_navigation_visibility_mode(_show_navigation) {
    TileMapLayer.init_method_set_navigation_visibility_mode();
    return _call_native_mb_no_ret(
      TileMapLayer._bindings.method_set_navigation_visibility_mode,
      this._owner,
      _show_navigation
    );
    
  }
  get_navigation_visibility_mode() {
    TileMapLayer.init_method_get_navigation_visibility_mode();
    return _call_native_mb_ret(
      TileMapLayer._bindings.method_get_navigation_visibility_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get tile_map_data () {
  return this.get_tile_map_data_as_array();
}
set tile_map_data (new_value) {
  this.set_tile_map_data_from_array(new_value);
}
get enabled () {
  return this.is_enabled();
}
set enabled (new_value) {
  this.set_enabled(new_value);
}
get tile_set () {
  return this.get_tile_set();
}
set tile_set (new_value) {
  this.set_tile_set(new_value);
}
get y_sort_origin () {
  return this.get_y_sort_origin();
}
set y_sort_origin (new_value) {
  this.set_y_sort_origin(new_value);
}
get x_draw_order_reversed () {
  return this.is_x_draw_order_reversed();
}
set x_draw_order_reversed (new_value) {
  this.set_x_draw_order_reversed(new_value);
}
get rendering_quadrant_size () {
  return this.get_rendering_quadrant_size();
}
set rendering_quadrant_size (new_value) {
  this.set_rendering_quadrant_size(new_value);
}
get collision_enabled () {
  return this.is_collision_enabled();
}
set collision_enabled (new_value) {
  this.set_collision_enabled(new_value);
}
get use_kinematic_bodies () {
  return this.is_using_kinematic_bodies();
}
set use_kinematic_bodies (new_value) {
  this.set_use_kinematic_bodies(new_value);
}
get collision_visibility_mode () {
  return this.get_collision_visibility_mode();
}
set collision_visibility_mode (new_value) {
  this.set_collision_visibility_mode(new_value);
}
get navigation_enabled () {
  return this.is_navigation_enabled();
}
set navigation_enabled (new_value) {
  this.set_navigation_enabled(new_value);
}
get navigation_visibility_mode () {
  return this.get_navigation_visibility_mode();
}
set navigation_visibility_mode (new_value) {
  this.set_navigation_visibility_mode(new_value);
}

  static DebugVisibilityMode = {
    DEBUG_VISIBILITY_MODE_DEFAULT: 0,
    DEBUG_VISIBILITY_MODE_FORCE_HIDE: 2,
    DEBUG_VISIBILITY_MODE_FORCE_SHOW: 1,
  }
}