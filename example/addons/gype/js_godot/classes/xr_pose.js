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
  method_set_has_tracking_data;
  method_get_has_tracking_data;
  method_set_name;
  method_get_name;
  method_set_transform;
  method_get_transform;
  method_get_adjusted_transform;
  method_set_linear_velocity;
  method_get_linear_velocity;
  method_set_angular_velocity;
  method_get_angular_velocity;
  method_set_tracking_confidence;
  method_get_tracking_confidence;
}
@GodotClass
export class XRPose extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRPose");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_has_tracking_data() {
    if (!this._bindings.method_set_has_tracking_data) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("set_has_tracking_data");
      this._bindings.method_set_has_tracking_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_has_tracking_data() {
    if (!this._bindings.method_get_has_tracking_data) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("get_has_tracking_data");
      this._bindings.method_get_has_tracking_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_name() {
    if (!this._bindings.method_set_name) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("set_name");
      this._bindings.method_set_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_name() {
    if (!this._bindings.method_get_name) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_transform() {
    if (!this._bindings.method_set_transform) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("set_transform");
      this._bindings.method_set_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2952846383
      );
    }
  }
  static init_method_get_transform() {
    if (!this._bindings.method_get_transform) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_get_adjusted_transform() {
    if (!this._bindings.method_get_adjusted_transform) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("get_adjusted_transform");
      this._bindings.method_get_adjusted_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_set_linear_velocity() {
    if (!this._bindings.method_set_linear_velocity) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("set_linear_velocity");
      this._bindings.method_set_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_linear_velocity() {
    if (!this._bindings.method_get_linear_velocity) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("get_linear_velocity");
      this._bindings.method_get_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_angular_velocity() {
    if (!this._bindings.method_set_angular_velocity) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("set_angular_velocity");
      this._bindings.method_set_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_angular_velocity() {
    if (!this._bindings.method_get_angular_velocity) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("get_angular_velocity");
      this._bindings.method_get_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_tracking_confidence() {
    if (!this._bindings.method_set_tracking_confidence) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("set_tracking_confidence");
      this._bindings.method_set_tracking_confidence = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4171656666
      );
    }
  }
  static init_method_get_tracking_confidence() {
    if (!this._bindings.method_get_tracking_confidence) {
      let classname = new StringName("XRPose");
      let methodname = new StringName("get_tracking_confidence");
      this._bindings.method_get_tracking_confidence = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2064923680
      );
    }
  }

  
  
  set_has_tracking_data(_has_tracking_data) {
    XRPose.init_method_set_has_tracking_data();
    return _call_native_mb_no_ret(
      XRPose._bindings.method_set_has_tracking_data,
      this._owner,
      _has_tracking_data
    );
    
  }
  get_has_tracking_data() {
    XRPose.init_method_get_has_tracking_data();
    return _call_native_mb_ret(
      XRPose._bindings.method_get_has_tracking_data,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_name(_name) {
    XRPose.init_method_set_name();
    return _call_native_mb_no_ret(
      XRPose._bindings.method_set_name,
      this._owner,
      _name
    );
    
  }
  get_name() {
    XRPose.init_method_get_name();
    return _call_native_mb_ret(
      XRPose._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_transform(_transform) {
    XRPose.init_method_set_transform();
    return _call_native_mb_no_ret(
      XRPose._bindings.method_set_transform,
      this._owner,
      _transform
    );
    
  }
  get_transform() {
    XRPose.init_method_get_transform();
    return _call_native_mb_ret(
      XRPose._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  get_adjusted_transform() {
    XRPose.init_method_get_adjusted_transform();
    return _call_native_mb_ret(
      XRPose._bindings.method_get_adjusted_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  set_linear_velocity(_velocity) {
    XRPose.init_method_set_linear_velocity();
    return _call_native_mb_no_ret(
      XRPose._bindings.method_set_linear_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_linear_velocity() {
    XRPose.init_method_get_linear_velocity();
    return _call_native_mb_ret(
      XRPose._bindings.method_get_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_angular_velocity(_velocity) {
    XRPose.init_method_set_angular_velocity();
    return _call_native_mb_no_ret(
      XRPose._bindings.method_set_angular_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_angular_velocity() {
    XRPose.init_method_get_angular_velocity();
    return _call_native_mb_ret(
      XRPose._bindings.method_get_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_tracking_confidence(_tracking_confidence) {
    XRPose.init_method_set_tracking_confidence();
    return _call_native_mb_no_ret(
      XRPose._bindings.method_set_tracking_confidence,
      this._owner,
      _tracking_confidence
    );
    
  }
  get_tracking_confidence() {
    XRPose.init_method_get_tracking_confidence();
    return _call_native_mb_ret(
      XRPose._bindings.method_get_tracking_confidence,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get has_tracking_data () {
  return this.get_has_tracking_data();
}
set has_tracking_data (new_value) {
  this.set_has_tracking_data(new_value);
}
get name () {
  return this.get_name();
}
set name (new_value) {
  this.set_name(new_value);
}
get transform () {
  return this.get_transform();
}
set transform (new_value) {
  this.set_transform(new_value);
}
get linear_velocity () {
  return this.get_linear_velocity();
}
set linear_velocity (new_value) {
  this.set_linear_velocity(new_value);
}
get angular_velocity () {
  return this.get_angular_velocity();
}
set angular_velocity (new_value) {
  this.set_angular_velocity(new_value);
}
get tracking_confidence () {
  return this.get_tracking_confidence();
}
set tracking_confidence (new_value) {
  this.set_tracking_confidence(new_value);
}

  static TrackingConfidence = {
    XR_TRACKING_CONFIDENCE_NONE: 0,
    XR_TRACKING_CONFIDENCE_LOW: 1,
    XR_TRACKING_CONFIDENCE_HIGH: 2,
  }
}