import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_tiles_count;
  method_get_tile_id;
  method_has_tile;
  method_get_alternative_tiles_count;
  method_get_alternative_tile_id;
  method_has_alternative_tile;
}
@GodotClass
export class TileSetSource extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TileSetSource");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_tiles_count() {
    if (!this._bindings.method_get_tiles_count) {
      let classname = new StringName("TileSetSource");
      let methodname = new StringName("get_tiles_count");
      this._bindings.method_get_tiles_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_tile_id() {
    if (!this._bindings.method_get_tile_id) {
      let classname = new StringName("TileSetSource");
      let methodname = new StringName("get_tile_id");
      this._bindings.method_get_tile_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        880721226
      );
    }
  }
  static init_method_has_tile() {
    if (!this._bindings.method_has_tile) {
      let classname = new StringName("TileSetSource");
      let methodname = new StringName("has_tile");
      this._bindings.method_has_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3900751641
      );
    }
  }
  static init_method_get_alternative_tiles_count() {
    if (!this._bindings.method_get_alternative_tiles_count) {
      let classname = new StringName("TileSetSource");
      let methodname = new StringName("get_alternative_tiles_count");
      this._bindings.method_get_alternative_tiles_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2485466453
      );
    }
  }
  static init_method_get_alternative_tile_id() {
    if (!this._bindings.method_get_alternative_tile_id) {
      let classname = new StringName("TileSetSource");
      let methodname = new StringName("get_alternative_tile_id");
      this._bindings.method_get_alternative_tile_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        89881719
      );
    }
  }
  static init_method_has_alternative_tile() {
    if (!this._bindings.method_has_alternative_tile) {
      let classname = new StringName("TileSetSource");
      let methodname = new StringName("has_alternative_tile");
      this._bindings.method_has_alternative_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1073731340
      );
    }
  }

  
  
  get_tiles_count() {
    TileSetSource.init_method_get_tiles_count();
    return _call_native_mb_ret(
      TileSetSource._bindings.method_get_tiles_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_tile_id(_index) {
    TileSetSource.init_method_get_tile_id();
    return _call_native_mb_ret(
      TileSetSource._bindings.method_get_tile_id,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _index
    );
    
  }
  has_tile(_atlas_coords) {
    TileSetSource.init_method_has_tile();
    return _call_native_mb_ret(
      TileSetSource._bindings.method_has_tile,
      this._owner,
			Variant.Type.BOOL,
    
      _atlas_coords
    );
    
  }
  get_alternative_tiles_count(_atlas_coords) {
    TileSetSource.init_method_get_alternative_tiles_count();
    return _call_native_mb_ret(
      TileSetSource._bindings.method_get_alternative_tiles_count,
      this._owner,
			Variant.Type.INT,
    
      _atlas_coords
    );
    
  }
  get_alternative_tile_id(_atlas_coords, _index) {
    TileSetSource.init_method_get_alternative_tile_id();
    return _call_native_mb_ret(
      TileSetSource._bindings.method_get_alternative_tile_id,
      this._owner,
			Variant.Type.INT,
    
      _atlas_coords, _index
    );
    
  }
  has_alternative_tile(_atlas_coords, _alternative_tile) {
    TileSetSource.init_method_has_alternative_tile();
    return _call_native_mb_ret(
      TileSetSource._bindings.method_has_alternative_tile,
      this._owner,
			Variant.Type.BOOL,
    
      _atlas_coords, _alternative_tile
    );
    
  }
  

}