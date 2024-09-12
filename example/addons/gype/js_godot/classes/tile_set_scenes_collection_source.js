import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { TileSetSource } from '@js_godot/classes/tile_set_source'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_scene_tiles_count;
  method_get_scene_tile_id;
  method_has_scene_tile_id;
  method_create_scene_tile;
  method_set_scene_tile_id;
  method_set_scene_tile_scene;
  method_get_scene_tile_scene;
  method_set_scene_tile_display_placeholder;
  method_get_scene_tile_display_placeholder;
  method_remove_scene_tile;
  method_get_next_scene_tile_id;
}
export class TileSetScenesCollectionSource extends TileSetSource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TileSetScenesCollectionSource");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_scene_tiles_count() {
    if (!this.#_bindings.method_get_scene_tiles_count) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("get_scene_tiles_count");
      this.#_bindings.method_get_scene_tiles_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_get_scene_tile_id() {
    if (!this.#_bindings.method_get_scene_tile_id) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("get_scene_tile_id");
      this.#_bindings.method_get_scene_tile_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }
  static init_method_has_scene_tile_id() {
    if (!this.#_bindings.method_has_scene_tile_id) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("has_scene_tile_id");
      this.#_bindings.method_has_scene_tile_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3067735520
      );
    }
  }
  static init_method_create_scene_tile() {
    if (!this.#_bindings.method_create_scene_tile) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("create_scene_tile");
      this.#_bindings.method_create_scene_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1117465415
      );
    }
  }
  static init_method_set_scene_tile_id() {
    if (!this.#_bindings.method_set_scene_tile_id) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("set_scene_tile_id");
      this.#_bindings.method_set_scene_tile_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_scene_tile_scene() {
    if (!this.#_bindings.method_set_scene_tile_scene) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("set_scene_tile_scene");
      this.#_bindings.method_set_scene_tile_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3435852839
      );
    }
  }
  static init_method_get_scene_tile_scene() {
    if (!this.#_bindings.method_get_scene_tile_scene) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("get_scene_tile_scene");
      this.#_bindings.method_get_scene_tile_scene = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        511017218
      );
    }
  }
  static init_method_set_scene_tile_display_placeholder() {
    if (!this.#_bindings.method_set_scene_tile_display_placeholder) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("set_scene_tile_display_placeholder");
      this.#_bindings.method_set_scene_tile_display_placeholder = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_scene_tile_display_placeholder() {
    if (!this.#_bindings.method_get_scene_tile_display_placeholder) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("get_scene_tile_display_placeholder");
      this.#_bindings.method_get_scene_tile_display_placeholder = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_remove_scene_tile() {
    if (!this.#_bindings.method_remove_scene_tile) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("remove_scene_tile");
      this.#_bindings.method_remove_scene_tile = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_next_scene_tile_id() {
    if (!this.#_bindings.method_get_next_scene_tile_id) {
      let classname = new StringName("TileSetScenesCollectionSource");
      let methodname = new StringName("get_next_scene_tile_id");
      this.#_bindings.method_get_next_scene_tile_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  get_scene_tiles_count() {
    TileSetScenesCollectionSource.init_method_get_scene_tiles_count();
    return _call_native_mb_ret(
      TileSetScenesCollectionSource.#_bindings.method_get_scene_tiles_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_scene_tile_id(_index) {
    TileSetScenesCollectionSource.init_method_get_scene_tile_id();
    return _call_native_mb_ret(
      TileSetScenesCollectionSource.#_bindings.method_get_scene_tile_id,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  has_scene_tile_id(_id) {
    TileSetScenesCollectionSource.init_method_has_scene_tile_id();
    return _call_native_mb_ret(
      TileSetScenesCollectionSource.#_bindings.method_has_scene_tile_id,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  create_scene_tile(_packed_scene, _id_override) {
    TileSetScenesCollectionSource.init_method_create_scene_tile();
    return _call_native_mb_ret(
      TileSetScenesCollectionSource.#_bindings.method_create_scene_tile,
      this._owner,
			Variant.Type.INT,
    
      _packed_scene, _id_override
    );
    
  }
  set_scene_tile_id(_id, _new_id) {
    TileSetScenesCollectionSource.init_method_set_scene_tile_id();
    return _call_native_mb_no_ret(
      TileSetScenesCollectionSource.#_bindings.method_set_scene_tile_id,
      this._owner,
      _id, _new_id
    );
    
  }
  set_scene_tile_scene(_id, _packed_scene) {
    TileSetScenesCollectionSource.init_method_set_scene_tile_scene();
    return _call_native_mb_no_ret(
      TileSetScenesCollectionSource.#_bindings.method_set_scene_tile_scene,
      this._owner,
      _id, _packed_scene
    );
    
  }
  get_scene_tile_scene(_id) {
    TileSetScenesCollectionSource.init_method_get_scene_tile_scene();
    return _call_native_mb_ret(
      TileSetScenesCollectionSource.#_bindings.method_get_scene_tile_scene,
      this._owner,
			Variant.Type.OBJECT,
      _id
    );
    
  }
  set_scene_tile_display_placeholder(_id, _display_placeholder) {
    TileSetScenesCollectionSource.init_method_set_scene_tile_display_placeholder();
    return _call_native_mb_no_ret(
      TileSetScenesCollectionSource.#_bindings.method_set_scene_tile_display_placeholder,
      this._owner,
      _id, _display_placeholder
    );
    
  }
  get_scene_tile_display_placeholder(_id) {
    TileSetScenesCollectionSource.init_method_get_scene_tile_display_placeholder();
    return _call_native_mb_ret(
      TileSetScenesCollectionSource.#_bindings.method_get_scene_tile_display_placeholder,
      this._owner,
			Variant.Type.BOOL,
    
      _id
    );
    
  }
  remove_scene_tile(_id) {
    TileSetScenesCollectionSource.init_method_remove_scene_tile();
    return _call_native_mb_no_ret(
      TileSetScenesCollectionSource.#_bindings.method_remove_scene_tile,
      this._owner,
      _id
    );
    
  }
  get_next_scene_tile_id() {
    TileSetScenesCollectionSource.init_method_get_next_scene_tile_id();
    return _call_native_mb_ret(
      TileSetScenesCollectionSource.#_bindings.method_get_next_scene_tile_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  

}