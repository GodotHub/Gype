import * as internal from '__internal__';
import { Texture2D } from 'src/js_godot/classes/texture2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_camera_feed_id;
    method_get_camera_feed_id;
    method_set_which_feed;
    method_get_which_feed;
    method_set_camera_active;
    method_get_camera_active;
}


export class CameraTexture extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CameraTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CameraTexture");
        let methodname = new StringName("set_camera_feed_id");
        this._bindings.method_set_camera_feed_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CameraTexture");
        let methodname = new StringName("get_camera_feed_id");
        this._bindings.method_get_camera_feed_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CameraTexture");
        let methodname = new StringName("set_which_feed");
        this._bindings.method_set_which_feed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1595299230
        );
      }
      {
        let classname = new StringName("CameraTexture");
        let methodname = new StringName("get_which_feed");
        this._bindings.method_get_which_feed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          91039457
        );
      }
      {
        let classname = new StringName("CameraTexture");
        let methodname = new StringName("set_camera_active");
        this._bindings.method_set_camera_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CameraTexture");
        let methodname = new StringName("get_camera_active");
        this._bindings.method_get_camera_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_camera_feed_id(_feed_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_camera_feed_id,
      this._owner,
      _feed_id
    );
    
  }
  get_camera_feed_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_camera_feed_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_which_feed(_which_feed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_which_feed,
      this._owner,
      _which_feed
    );
    
  }
  get_which_feed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_which_feed,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_camera_active(_active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_camera_active,
      this._owner,
      _active
    );
    
  }
  get_camera_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_camera_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}