import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class CameraFeed extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CameraFeed");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_id() {
    if (!this._bindings.method_get_id) {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("get_id");
      this._bindings.method_get_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_is_active() {
    if (!this._bindings.method_is_active) {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("is_active");
      this._bindings.method_is_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_active() {
    if (!this._bindings.method_set_active) {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("set_active");
      this._bindings.method_set_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_name() {
    if (!this._bindings.method_get_name) {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_position() {
    if (!this._bindings.method_get_position) {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2711679033
      );
    }
  }
  static init_method_get_transform() {
    if (!this._bindings.method_get_transform) {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_set_transform() {
    if (!this._bindings.method_set_transform) {
      let classname = new StringName("CameraFeed");
      let methodname = new StringName("set_transform");
      this._bindings.method_set_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761652528
      );
    }
  }
  static init_method_get_datatype() {
    if (!this._bindings.method_get_datatype) {
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
    CameraFeed.init_method_get_id();
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_active() {
    CameraFeed.init_method_is_active();
    return _call_native_mb_ret(
      CameraFeed._bindings.method_is_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_active(_active) {
    CameraFeed.init_method_set_active();
    return _call_native_mb_no_ret(
      CameraFeed._bindings.method_set_active,
      this._owner,
      _active
    );
    
  }
  get_name() {
    CameraFeed.init_method_get_name();
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_position() {
    CameraFeed.init_method_get_position();
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_position,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_transform() {
    CameraFeed.init_method_get_transform();
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  set_transform(_transform) {
    CameraFeed.init_method_set_transform();
    return _call_native_mb_no_ret(
      CameraFeed._bindings.method_set_transform,
      this._owner,
      _transform
    );
    
  }
  get_datatype() {
    CameraFeed.init_method_get_datatype();
    return _call_native_mb_ret(
      CameraFeed._bindings.method_get_datatype,
      this._owner,
			Variant.Type.INT,
    
      
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
}