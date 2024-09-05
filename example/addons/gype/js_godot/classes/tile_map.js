import * as internal from '__internal__';
import { Vector2 } from '@js_godot/variant/vector2'
import { RID } from '@js_godot/variant/rid'
import { StringName } from '@js_godot/variant/string_name'
import { Rect2i } from '@js_godot/variant/rect2i'
import { Color } from '@js_godot/variant/color'
import { GDString } from '@js_godot/variant/gd_string'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import { Vector2i } from '@js_godot/variant/vector2i'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_navigation_map;
  method_get_navigation_map;
  method_force_update;
  method_set_tileset;
  method_get_tileset;
  method_set_rendering_quadrant_size;
  method_get_rendering_quadrant_size;
  method_get_layers_count;
  method_add_layer;
  method_move_layer;
  method_remove_layer;
  method_set_layer_name;
  method_get_layer_name;
  method_set_layer_enabled;
  method_is_layer_enabled;
  method_set_layer_modulate;
  method_get_layer_modulate;
  method_set_layer_y_sort_enabled;
  method_is_layer_y_sort_enabled;
  method_set_layer_y_sort_origin;
  method_get_layer_y_sort_origin;
  method_set_layer_z_index;
  method_get_layer_z_index;
  method_set_layer_navigation_enabled;
  method_is_layer_navigation_enabled;
  method_set_layer_navigation_map;
  method_get_layer_navigation_map;
  method_set_collision_animatable;
  method_is_collision_animatable;
  method_set_collision_visibility_mode;
  method_get_collision_visibility_mode;
  method_set_navigation_visibility_mode;
  method_get_navigation_visibility_mode;
  method_set_cell;
  method_erase_cell;
  method_get_cell_source_id;
  method_get_cell_atlas_coords;
  method_get_cell_alternative_tile;
  method_get_cell_tile_data;
  method_get_coords_for_body_rid;
  method_get_layer_for_body_rid;
  method_get_pattern;
  method_map_pattern;
  method_set_pattern;
  method_set_cells_terrain_connect;
  method_set_cells_terrain_path;
  method_fix_invalid_tiles;
  method_clear_layer;
  method_clear;
  method_update_internals;
  method_notify_runtime_tile_data_update;
  method_get_surrounding_cells;
  method_get_used_cells;
  method_get_used_cells_by_id;
  method_get_used_rect;
  method_map_to_local;
  method_local_to_map;
  method_get_neighbor_cell;
}
export class TileMap extends Node2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TileMap");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_navigation_map");
      this._bindings.method_set_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4040184819
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_navigation_map");
      this._bindings.method_get_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        495598643
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("force_update");
      this._bindings.method_force_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1025054187
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_tileset");
      this._bindings.method_set_tileset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        774531446
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_tileset");
      this._bindings.method_get_tileset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2678226422
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_rendering_quadrant_size");
      this._bindings.method_set_rendering_quadrant_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_rendering_quadrant_size");
      this._bindings.method_get_rendering_quadrant_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_layers_count");
      this._bindings.method_get_layers_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("add_layer");
      this._bindings.method_add_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("move_layer");
      this._bindings.method_move_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("remove_layer");
      this._bindings.method_remove_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_layer_name");
      this._bindings.method_set_layer_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_layer_name");
      this._bindings.method_get_layer_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_layer_enabled");
      this._bindings.method_set_layer_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("is_layer_enabled");
      this._bindings.method_is_layer_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_layer_modulate");
      this._bindings.method_set_layer_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_layer_modulate");
      this._bindings.method_get_layer_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3457211756
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_layer_y_sort_enabled");
      this._bindings.method_set_layer_y_sort_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("is_layer_y_sort_enabled");
      this._bindings.method_is_layer_y_sort_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_layer_y_sort_origin");
      this._bindings.method_set_layer_y_sort_origin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_layer_y_sort_origin");
      this._bindings.method_get_layer_y_sort_origin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_layer_z_index");
      this._bindings.method_set_layer_z_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_layer_z_index");
      this._bindings.method_get_layer_z_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_layer_navigation_enabled");
      this._bindings.method_set_layer_navigation_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("is_layer_navigation_enabled");
      this._bindings.method_is_layer_navigation_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_layer_navigation_map");
      this._bindings.method_set_layer_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4040184819
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_layer_navigation_map");
      this._bindings.method_get_layer_navigation_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        495598643
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_collision_animatable");
      this._bindings.method_set_collision_animatable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("is_collision_animatable");
      this._bindings.method_is_collision_animatable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_collision_visibility_mode");
      this._bindings.method_set_collision_visibility_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3193440636
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_collision_visibility_mode");
      this._bindings.method_get_collision_visibility_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1697018252
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_navigation_visibility_mode");
      this._bindings.method_set_navigation_visibility_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3193440636
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_navigation_visibility_mode");
      this._bindings.method_get_navigation_visibility_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1697018252
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_cell");
      this._bindings.method_set_cell = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        966713560
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("erase_cell");
      this._bindings.method_erase_cell = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2311374912
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_cell_source_id");
      this._bindings.method_get_cell_source_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        551761942
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_cell_atlas_coords");
      this._bindings.method_get_cell_atlas_coords = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1869815066
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_cell_alternative_tile");
      this._bindings.method_get_cell_alternative_tile = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        551761942
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_cell_tile_data");
      this._bindings.method_get_cell_tile_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2849631287
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_coords_for_body_rid");
      this._bindings.method_get_coords_for_body_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        291584212
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_layer_for_body_rid");
      this._bindings.method_get_layer_for_body_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3917799429
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_pattern");
      this._bindings.method_get_pattern = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2833570986
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("map_pattern");
      this._bindings.method_map_pattern = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1864516957
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_pattern");
      this._bindings.method_set_pattern = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1195853946
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_cells_terrain_connect");
      this._bindings.method_set_cells_terrain_connect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3578627656
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("set_cells_terrain_path");
      this._bindings.method_set_cells_terrain_path = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3578627656
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("fix_invalid_tiles");
      this._bindings.method_fix_invalid_tiles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("clear_layer");
      this._bindings.method_clear_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("update_internals");
      this._bindings.method_update_internals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("notify_runtime_tile_data_update");
      this._bindings.method_notify_runtime_tile_data_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1025054187
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_surrounding_cells");
      this._bindings.method_get_surrounding_cells = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2673526557
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_used_cells");
      this._bindings.method_get_used_cells = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        663333327
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_used_cells_by_id");
      this._bindings.method_get_used_cells_by_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2931012785
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_used_rect");
      this._bindings.method_get_used_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        410525958
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("map_to_local");
      this._bindings.method_map_to_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        108438297
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("local_to_map");
      this._bindings.method_local_to_map = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        837806996
      );
    }
    {
      let classname = new StringName("TileMap");
      let methodname = new StringName("get_neighbor_cell");
      this._bindings.method_get_neighbor_cell = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        986575103
      );
    }
  }
  
  _use_tile_data_runtime_update(_layer, _coords) {
  }
  _tile_data_runtime_update(_layer, _coords, _tile_data) {
  }
  set_navigation_map(_layer, _map) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_navigation_map,
      this._owner,
      _layer, _map
    );
    
  }
  get_navigation_map(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      _layer
    );
    
  }
  force_update(_layer) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_force_update,
      this._owner,
      _layer
    );
    
  }
  set_tileset(_tileset) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_tileset,
      this._owner,
      _tileset
    );
    
  }
  get_tileset() {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_tileset,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_rendering_quadrant_size(_size) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_rendering_quadrant_size,
      this._owner,
      _size
    );
    
  }
  get_rendering_quadrant_size() {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_rendering_quadrant_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_layers_count() {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_layers_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  add_layer(_to_position) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_add_layer,
      this._owner,
      _to_position
    );
    
  }
  move_layer(_layer, _to_position) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_move_layer,
      this._owner,
      _layer, _to_position
    );
    
  }
  remove_layer(_layer) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_remove_layer,
      this._owner,
      _layer
    );
    
  }
  set_layer_name(_layer, _name) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_layer_name,
      this._owner,
      _layer, _name
    );
    
  }
  get_layer_name(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_layer_name,
      this._owner,
			Variant.Type.STRING,
    
      _layer
    );
    
  }
  set_layer_enabled(_layer, _enabled) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_layer_enabled,
      this._owner,
      _layer, _enabled
    );
    
  }
  is_layer_enabled(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_is_layer_enabled,
      this._owner,
			Variant.Type.BOOL,
      _layer
    );
    
  }
  set_layer_modulate(_layer, _modulate) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_layer_modulate,
      this._owner,
      _layer, _modulate
    );
    
  }
  get_layer_modulate(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_layer_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      _layer
    );
    
  }
  set_layer_y_sort_enabled(_layer, _y_sort_enabled) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_layer_y_sort_enabled,
      this._owner,
      _layer, _y_sort_enabled
    );
    
  }
  is_layer_y_sort_enabled(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_is_layer_y_sort_enabled,
      this._owner,
			Variant.Type.BOOL,
      _layer
    );
    
  }
  set_layer_y_sort_origin(_layer, _y_sort_origin) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_layer_y_sort_origin,
      this._owner,
      _layer, _y_sort_origin
    );
    
  }
  get_layer_y_sort_origin(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_layer_y_sort_origin,
      this._owner,
			Variant.Type.INT,
      _layer
    );
    
  }
  set_layer_z_index(_layer, _z_index) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_layer_z_index,
      this._owner,
      _layer, _z_index
    );
    
  }
  get_layer_z_index(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_layer_z_index,
      this._owner,
			Variant.Type.INT,
      _layer
    );
    
  }
  set_layer_navigation_enabled(_layer, _enabled) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_layer_navigation_enabled,
      this._owner,
      _layer, _enabled
    );
    
  }
  is_layer_navigation_enabled(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_is_layer_navigation_enabled,
      this._owner,
			Variant.Type.BOOL,
      _layer
    );
    
  }
  set_layer_navigation_map(_layer, _map) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_layer_navigation_map,
      this._owner,
      _layer, _map
    );
    
  }
  get_layer_navigation_map(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_layer_navigation_map,
      this._owner,
			Variant.Type.RID,
    
      _layer
    );
    
  }
  set_collision_animatable(_enabled) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_collision_animatable,
      this._owner,
      _enabled
    );
    
  }
  is_collision_animatable() {
    return _call_native_mb_ret(
      TileMap._bindings.method_is_collision_animatable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_collision_visibility_mode(_collision_visibility_mode) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_collision_visibility_mode,
      this._owner,
      _collision_visibility_mode
    );
    
  }
  get_collision_visibility_mode() {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_collision_visibility_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_navigation_visibility_mode(_navigation_visibility_mode) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_navigation_visibility_mode,
      this._owner,
      _navigation_visibility_mode
    );
    
  }
  get_navigation_visibility_mode() {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_navigation_visibility_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_cell(_layer, _coords, _source_id, _atlas_coords, _alternative_tile) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_cell,
      this._owner,
      _layer, _coords, _source_id, _atlas_coords, _alternative_tile
    );
    
  }
  erase_cell(_layer, _coords) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_erase_cell,
      this._owner,
      _layer, _coords
    );
    
  }
  get_cell_source_id(_layer, _coords, _use_proxies) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_cell_source_id,
      this._owner,
			Variant.Type.INT,
      _layer, _coords, _use_proxies
    );
    
  }
  get_cell_atlas_coords(_layer, _coords, _use_proxies) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_cell_atlas_coords,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _layer, _coords, _use_proxies
    );
    
  }
  get_cell_alternative_tile(_layer, _coords, _use_proxies) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_cell_alternative_tile,
      this._owner,
			Variant.Type.INT,
      _layer, _coords, _use_proxies
    );
    
  }
  get_cell_tile_data(_layer, _coords, _use_proxies) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_cell_tile_data,
      this._owner,
			Variant.INT,
      _layer, _coords, _use_proxies
    );
    
  }
  get_coords_for_body_rid(_body) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_coords_for_body_rid,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _body
    );
    
  }
  get_layer_for_body_rid(_body) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_layer_for_body_rid,
      this._owner,
			Variant.Type.INT,
      _body
    );
    
  }
  get_pattern(_layer, _coords_array) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_pattern,
      this._owner,
			Variant.INT,
      _layer, _coords_array
    );
    
  }
  map_pattern(_position_in_tilemap, _coords_in_pattern, _pattern) {
    return _call_native_mb_ret(
      TileMap._bindings.method_map_pattern,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _position_in_tilemap, _coords_in_pattern, _pattern
    );
    
  }
  set_pattern(_layer, _position, _pattern) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_pattern,
      this._owner,
      _layer, _position, _pattern
    );
    
  }
  set_cells_terrain_connect(_layer, _cells, _terrain_set, _terrain, _ignore_empty_terrains) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_cells_terrain_connect,
      this._owner,
      _layer, _cells, _terrain_set, _terrain, _ignore_empty_terrains
    );
    
  }
  set_cells_terrain_path(_layer, _path, _terrain_set, _terrain, _ignore_empty_terrains) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_set_cells_terrain_path,
      this._owner,
      _layer, _path, _terrain_set, _terrain, _ignore_empty_terrains
    );
    
  }
  fix_invalid_tiles() {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_fix_invalid_tiles,
      this._owner,
      
    );
    
  }
  clear_layer(_layer) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_clear_layer,
      this._owner,
      _layer
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_clear,
      this._owner,
      
    );
    
  }
  update_internals() {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_update_internals,
      this._owner,
      
    );
    
  }
  notify_runtime_tile_data_update(_layer) {
    return _call_native_mb_no_ret(
      TileMap._bindings.method_notify_runtime_tile_data_update,
      this._owner,
      _layer
    );
    
  }
  get_surrounding_cells(_coords) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_surrounding_cells,
      this._owner,
			Variant.INT,
      _coords
    );
    
  }
  get_used_cells(_layer) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_used_cells,
      this._owner,
			Variant.INT,
      _layer
    );
    
  }
  get_used_cells_by_id(_layer, _source_id, _atlas_coords, _alternative_tile) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_used_cells_by_id,
      this._owner,
			Variant.INT,
      _layer, _source_id, _atlas_coords, _alternative_tile
    );
    
  }
  get_used_rect() {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_used_rect,
      this._owner,
			Variant.Type.RECT2I,
    
      
    );
    
  }
  map_to_local(_map_position) {
    return _call_native_mb_ret(
      TileMap._bindings.method_map_to_local,
      this._owner,
			Variant.Type.VECTOR2,
    
      _map_position
    );
    
  }
  local_to_map(_local_position) {
    return _call_native_mb_ret(
      TileMap._bindings.method_local_to_map,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _local_position
    );
    
  }
  get_neighbor_cell(_coords, _neighbor) {
    return _call_native_mb_ret(
      TileMap._bindings.method_get_neighbor_cell,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _coords, _neighbor
    );
    
  }
  
get tile_set () {
  return this.get_tileset();
}
set tile_set (new_value) {
  this.set_tileset(new_value);
}
get rendering_quadrant_size () {
  return this.get_rendering_quadrant_size();
}
set rendering_quadrant_size (new_value) {
  this.set_rendering_quadrant_size(new_value);
}
get collision_animatable () {
  return this.is_collision_animatable();
}
set collision_animatable (new_value) {
  this.set_collision_animatable(new_value);
}
get collision_visibility_mode () {
  return this.get_collision_visibility_mode();
}
set collision_visibility_mode (new_value) {
  this.set_collision_visibility_mode(new_value);
}
get navigation_visibility_mode () {
  return this.get_navigation_visibility_mode();
}
set navigation_visibility_mode (new_value) {
  this.set_navigation_visibility_mode(new_value);
}

  static VisibilityMode = {
    VISIBILITY_MODE_DEFAULT: 0,
    VISIBILITY_MODE_FORCE_HIDE: 2,
    VISIBILITY_MODE_FORCE_SHOW: 1,
  }

  static {
    this._init_bindings();
  }
}