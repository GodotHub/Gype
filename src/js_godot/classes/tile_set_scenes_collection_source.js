import * as internal from '__internal__';
import { TileSetSource } from 'src/js_godot/classes/tile_set_source'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TileSetScenesCollectionSource");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("get_scene_tiles_count");
        this._bindings.method_get_scene_tiles_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("get_scene_tile_id");
        this._bindings.method_get_scene_tile_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3744713108
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("has_scene_tile_id");
        this._bindings.method_has_scene_tile_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3067735520
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("create_scene_tile");
        this._bindings.method_create_scene_tile = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1117465415
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("set_scene_tile_id");
        this._bindings.method_set_scene_tile_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("set_scene_tile_scene");
        this._bindings.method_set_scene_tile_scene = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3435852839
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("get_scene_tile_scene");
        this._bindings.method_get_scene_tile_scene = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          511017218
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("set_scene_tile_display_placeholder");
        this._bindings.method_set_scene_tile_display_placeholder = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("get_scene_tile_display_placeholder");
        this._bindings.method_get_scene_tile_display_placeholder = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("remove_scene_tile");
        this._bindings.method_remove_scene_tile = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TileSetScenesCollectionSource");
        let methodname = new StringName("get_next_scene_tile_id");
        this._bindings.method_get_next_scene_tile_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  get_scene_tiles_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scene_tiles_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_scene_tile_id(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scene_tile_id,
      this._owner,
			Variant.Type.INT,
      _index
    );
    
  }
  has_scene_tile_id(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_scene_tile_id,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
    
  }
  create_scene_tile(_packed_scene, _id_override) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_scene_tile,
      this._owner,
			Variant.Type.INT,
      _packed_scene, _id_override
    );
    
  }
  set_scene_tile_id(_id, _new_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scene_tile_id,
      this._owner,
      _id, _new_id
    );
    
  }
  set_scene_tile_scene(_id, _packed_scene) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scene_tile_scene,
      this._owner,
      _id, _packed_scene
    );
    
  }
  get_scene_tile_scene(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scene_tile_scene,
      this._owner,
			Variant.INT,
      _id
    );
    
  }
  set_scene_tile_display_placeholder(_id, _display_placeholder) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scene_tile_display_placeholder,
      this._owner,
      _id, _display_placeholder
    );
    
  }
  get_scene_tile_display_placeholder(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scene_tile_display_placeholder,
      this._owner,
			Variant.Type.BOOL,
      _id
    );
    
  }
  remove_scene_tile(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_scene_tile,
      this._owner,
      _id
    );
    
  }
  get_next_scene_tile_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_next_scene_tile_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}