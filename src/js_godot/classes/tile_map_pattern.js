import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TileMapPattern");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("set_cell");
        this._bindings.method_set_cell = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2224802556
        );
      }
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("has_cell");
        this._bindings.method_has_cell = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3900751641
        );
      }
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("remove_cell");
        this._bindings.method_remove_cell = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4153096796
        );
      }
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("get_cell_source_id");
        this._bindings.method_get_cell_source_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2485466453
        );
      }
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("get_cell_atlas_coords");
        this._bindings.method_get_cell_atlas_coords = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3050897911
        );
      }
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("get_cell_alternative_tile");
        this._bindings.method_get_cell_alternative_tile = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2485466453
        );
      }
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("get_used_cells");
        this._bindings.method_get_used_cells = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("get_size");
        this._bindings.method_get_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3690982128
        );
      }
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("set_size");
        this._bindings.method_set_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1130785943
        );
      }
      {
        let classname = new StringName("TileMapPattern");
        let methodname = new StringName("is_empty");
        this._bindings.method_is_empty = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_cell(_coords, _source_id, _atlas_coords, _alternative_tile) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cell,
      this._owner,
      _coords, _source_id, _atlas_coords, _alternative_tile
    );
    
  }
  has_cell(_coords) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_cell,
      this._owner,
			Variant.Type.BOOL,
      _coords
    );
    
  }
  remove_cell(_coords, _update_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_cell,
      this._owner,
      _coords, _update_size
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
  get_used_cells() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_used_cells,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
    
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  is_empty() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_empty,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}