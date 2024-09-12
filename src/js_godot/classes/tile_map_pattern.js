import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_cell;
  method_has_cell;
  method_remove_cell;
  method_get_cell_source_id;
  method_get_cell_atlas_coords;
  method_get_cell_alternative_tile;
  method_get_used_cells;
  method_get_size;
  method_set_size;
  method_is_empty;
}
export class TileMapPattern extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TileMapPattern");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_cell() {
    if (!this.#_bindings.method_set_cell) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("set_cell");
      this.#_bindings.method_set_cell = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2224802556
      );
    }
  }
  static init_method_has_cell() {
    if (!this.#_bindings.method_has_cell) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("has_cell");
      this.#_bindings.method_has_cell = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3900751641
      );
    }
  }
  static init_method_remove_cell() {
    if (!this.#_bindings.method_remove_cell) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("remove_cell");
      this.#_bindings.method_remove_cell = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4153096796
      );
    }
  }
  static init_method_get_cell_source_id() {
    if (!this.#_bindings.method_get_cell_source_id) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("get_cell_source_id");
      this.#_bindings.method_get_cell_source_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2485466453
      );
    }
  }
  static init_method_get_cell_atlas_coords() {
    if (!this.#_bindings.method_get_cell_atlas_coords) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("get_cell_atlas_coords");
      this.#_bindings.method_get_cell_atlas_coords = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3050897911
      );
    }
  }
  static init_method_get_cell_alternative_tile() {
    if (!this.#_bindings.method_get_cell_alternative_tile) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("get_cell_alternative_tile");
      this.#_bindings.method_get_cell_alternative_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2485466453
      );
    }
  }
  static init_method_get_used_cells() {
    if (!this.#_bindings.method_get_used_cells) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("get_used_cells");
      this.#_bindings.method_get_used_cells = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_get_size() {
    if (!this.#_bindings.method_get_size) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("get_size");
      this.#_bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_size() {
    if (!this.#_bindings.method_set_size) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("set_size");
      this.#_bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_is_empty() {
    if (!this.#_bindings.method_is_empty) {
      let classname = new StringName("TileMapPattern");
      let methodname = new StringName("is_empty");
      this.#_bindings.method_is_empty = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_cell(_coords, _source_id, _atlas_coords, _alternative_tile) {
    TileMapPattern.init_method_set_cell();
    return _call_native_mb_no_ret(
      TileMapPattern.#_bindings.method_set_cell,
      this._owner,
      _coords, _source_id, _atlas_coords, _alternative_tile
    );
    
  }
  has_cell(_coords) {
    TileMapPattern.init_method_has_cell();
    return _call_native_mb_ret(
      TileMapPattern.#_bindings.method_has_cell,
      this._owner,
			Variant.Type.BOOL,
    
      _coords
    );
    
  }
  remove_cell(_coords, _update_size) {
    TileMapPattern.init_method_remove_cell();
    return _call_native_mb_no_ret(
      TileMapPattern.#_bindings.method_remove_cell,
      this._owner,
      _coords, _update_size
    );
    
  }
  get_cell_source_id(_coords) {
    TileMapPattern.init_method_get_cell_source_id();
    return _call_native_mb_ret(
      TileMapPattern.#_bindings.method_get_cell_source_id,
      this._owner,
			Variant.Type.INT,
    
      _coords
    );
    
  }
  get_cell_atlas_coords(_coords) {
    TileMapPattern.init_method_get_cell_atlas_coords();
    return _call_native_mb_ret(
      TileMapPattern.#_bindings.method_get_cell_atlas_coords,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _coords
    );
    
  }
  get_cell_alternative_tile(_coords) {
    TileMapPattern.init_method_get_cell_alternative_tile();
    return _call_native_mb_ret(
      TileMapPattern.#_bindings.method_get_cell_alternative_tile,
      this._owner,
			Variant.Type.INT,
    
      _coords
    );
    
  }
  get_used_cells() {
    TileMapPattern.init_method_get_used_cells();
    return _call_native_mb_ret(
      TileMapPattern.#_bindings.method_get_used_cells,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_size() {
    TileMapPattern.init_method_get_size();
    return _call_native_mb_ret(
      TileMapPattern.#_bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_size(_size) {
    TileMapPattern.init_method_set_size();
    return _call_native_mb_no_ret(
      TileMapPattern.#_bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  is_empty() {
    TileMapPattern.init_method_is_empty();
    return _call_native_mb_ret(
      TileMapPattern.#_bindings.method_is_empty,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  

}