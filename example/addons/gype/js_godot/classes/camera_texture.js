import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Texture2D } from '@js_godot/classes/texture2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_camera_feed_id;
  method_get_camera_feed_id;
  method_set_which_feed;
  method_get_which_feed;
  method_set_camera_active;
  method_get_camera_active;
}
export class CameraTexture extends Texture2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CameraTexture");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_camera_feed_id() {
    if (!this.#_bindings.method_set_camera_feed_id) {
      let classname = new StringName("CameraTexture");
      let methodname = new StringName("set_camera_feed_id");
      this.#_bindings.method_set_camera_feed_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_camera_feed_id() {
    if (!this.#_bindings.method_get_camera_feed_id) {
      let classname = new StringName("CameraTexture");
      let methodname = new StringName("get_camera_feed_id");
      this.#_bindings.method_get_camera_feed_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_which_feed() {
    if (!this.#_bindings.method_set_which_feed) {
      let classname = new StringName("CameraTexture");
      let methodname = new StringName("set_which_feed");
      this.#_bindings.method_set_which_feed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1595299230
      );
    }
  }
  static init_method_get_which_feed() {
    if (!this.#_bindings.method_get_which_feed) {
      let classname = new StringName("CameraTexture");
      let methodname = new StringName("get_which_feed");
      this.#_bindings.method_get_which_feed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        91039457
      );
    }
  }
  static init_method_set_camera_active() {
    if (!this.#_bindings.method_set_camera_active) {
      let classname = new StringName("CameraTexture");
      let methodname = new StringName("set_camera_active");
      this.#_bindings.method_set_camera_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_camera_active() {
    if (!this.#_bindings.method_get_camera_active) {
      let classname = new StringName("CameraTexture");
      let methodname = new StringName("get_camera_active");
      this.#_bindings.method_get_camera_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_camera_feed_id(_feed_id) {
    CameraTexture.init_method_set_camera_feed_id();
    return _call_native_mb_no_ret(
      CameraTexture.#_bindings.method_set_camera_feed_id,
      this._owner,
      _feed_id
    );
    
  }
  get_camera_feed_id() {
    CameraTexture.init_method_get_camera_feed_id();
    return _call_native_mb_ret(
      CameraTexture.#_bindings.method_get_camera_feed_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_which_feed(_which_feed) {
    CameraTexture.init_method_set_which_feed();
    return _call_native_mb_no_ret(
      CameraTexture.#_bindings.method_set_which_feed,
      this._owner,
      _which_feed
    );
    
  }
  get_which_feed() {
    CameraTexture.init_method_get_which_feed();
    return _call_native_mb_ret(
      CameraTexture.#_bindings.method_get_which_feed,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_camera_active(_active) {
    CameraTexture.init_method_set_camera_active();
    return _call_native_mb_no_ret(
      CameraTexture.#_bindings.method_set_camera_active,
      this._owner,
      _active
    );
    
  }
  get_camera_active() {
    CameraTexture.init_method_get_camera_active();
    return _call_native_mb_ret(
      CameraTexture.#_bindings.method_get_camera_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get camera_feed_id () {
  return this.get_camera_feed_id();
}
set camera_feed_id (new_value) {
  this.set_camera_feed_id(new_value);
}
get which_feed () {
  return this.get_which_feed();
}
set which_feed (new_value) {
  this.set_which_feed(new_value);
}
get camera_is_active () {
  return this.get_camera_active();
}
set camera_is_active (new_value) {
  this.set_camera_active(new_value);
}

}