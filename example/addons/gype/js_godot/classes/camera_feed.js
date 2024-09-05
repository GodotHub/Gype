import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import { Transform2D } from '@js_godot/variant/transform2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_id;
  method_is_active;
  method_set_active;
  method_get_name;
  method_get_position;
  method_get_transform;
  method_set_transform;
  method_get_datatype;
}
export class CameraFeed extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CameraFeed");
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
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("get_id");
      this._bindings.method_get_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("is_active");
      this._bindings.method_is_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("set_active");
      this._bindings.method_set_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2711679033
      );
    }
    {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814499831
      );
    }
    {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("set_transform");
      this._bindings.method_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2761652528
      );
    }
    {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("get_datatype");
      this._bindings.method_get_datatype = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1477782850
      );
    }
  }
  
  get_id() {
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  is_active() {
    return _call_native_mb_ret(
      CameraFeed._bindings.method_is_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_active(_active) {
    return _call_native_mb_no_ret(
      CameraFeed._bindings.method_set_active,
      this._owner,
      _active
    );
    
  }
  get_name() {
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_position() {
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_position,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_transform() {
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  set_transform(_transform) {
    return _call_native_mb_no_ret(
      CameraFeed._bindings.method_set_transform,
      this._owner,
      _transform
    );
    
  }
  get_datatype() {
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_datatype,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get feed_is_active () {
  return this.is_active();
}
set feed_is_active (new_value) {
  this.set_active(new_value);
}
get feed_transform () {
  return this.get_transform();
}
set feed_transform (new_value) {
  this.set_transform(new_value);
}

  static FeedDataType = {
    FEED_NOIMAGE: 0,
    FEED_RGB: 1,
    FEED_YCBCR: 2,
    FEED_YCBCR_SEP: 3,
  }
  static FeedPosition = {
    FEED_UNSPECIFIED: 0,
    FEED_FRONT: 1,
    FEED_BACK: 2,
  }

  static {
    this._init_bindings();
  }
}