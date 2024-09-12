import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { XRPositionalTracker } from '@js_godot/classes/xr_positional_tracker'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_has_tracking_data;
  method_get_has_tracking_data;
  method_set_hand_tracking_source;
  method_get_hand_tracking_source;
  method_set_hand_joint_flags;
  method_get_hand_joint_flags;
  method_set_hand_joint_transform;
  method_get_hand_joint_transform;
  method_set_hand_joint_radius;
  method_get_hand_joint_radius;
  method_set_hand_joint_linear_velocity;
  method_get_hand_joint_linear_velocity;
  method_set_hand_joint_angular_velocity;
  method_get_hand_joint_angular_velocity;
}
export class XRHandTracker extends XRPositionalTracker{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRHandTracker");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_has_tracking_data() {
    if (!this.#_bindings.method_set_has_tracking_data) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("set_has_tracking_data");
      this.#_bindings.method_set_has_tracking_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_has_tracking_data() {
    if (!this.#_bindings.method_get_has_tracking_data) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("get_has_tracking_data");
      this.#_bindings.method_get_has_tracking_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_hand_tracking_source() {
    if (!this.#_bindings.method_set_hand_tracking_source) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("set_hand_tracking_source");
      this.#_bindings.method_set_hand_tracking_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2958308861
      );
    }
  }
  static init_method_get_hand_tracking_source() {
    if (!this.#_bindings.method_get_hand_tracking_source) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("get_hand_tracking_source");
      this.#_bindings.method_get_hand_tracking_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2475045250
      );
    }
  }
  static init_method_set_hand_joint_flags() {
    if (!this.#_bindings.method_set_hand_joint_flags) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("set_hand_joint_flags");
      this.#_bindings.method_set_hand_joint_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3028437365
      );
    }
  }
  static init_method_get_hand_joint_flags() {
    if (!this.#_bindings.method_get_hand_joint_flags) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("get_hand_joint_flags");
      this.#_bindings.method_get_hand_joint_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1730972401
      );
    }
  }
  static init_method_set_hand_joint_transform() {
    if (!this.#_bindings.method_set_hand_joint_transform) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("set_hand_joint_transform");
      this.#_bindings.method_set_hand_joint_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2529959613
      );
    }
  }
  static init_method_get_hand_joint_transform() {
    if (!this.#_bindings.method_get_hand_joint_transform) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("get_hand_joint_transform");
      this.#_bindings.method_get_hand_joint_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1090840196
      );
    }
  }
  static init_method_set_hand_joint_radius() {
    if (!this.#_bindings.method_set_hand_joint_radius) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("set_hand_joint_radius");
      this.#_bindings.method_set_hand_joint_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2723659615
      );
    }
  }
  static init_method_get_hand_joint_radius() {
    if (!this.#_bindings.method_get_hand_joint_radius) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("get_hand_joint_radius");
      this.#_bindings.method_get_hand_joint_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3400025734
      );
    }
  }
  static init_method_set_hand_joint_linear_velocity() {
    if (!this.#_bindings.method_set_hand_joint_linear_velocity) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("set_hand_joint_linear_velocity");
      this.#_bindings.method_set_hand_joint_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1978646737
      );
    }
  }
  static init_method_get_hand_joint_linear_velocity() {
    if (!this.#_bindings.method_get_hand_joint_linear_velocity) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("get_hand_joint_linear_velocity");
      this.#_bindings.method_get_hand_joint_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        547240792
      );
    }
  }
  static init_method_set_hand_joint_angular_velocity() {
    if (!this.#_bindings.method_set_hand_joint_angular_velocity) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("set_hand_joint_angular_velocity");
      this.#_bindings.method_set_hand_joint_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1978646737
      );
    }
  }
  static init_method_get_hand_joint_angular_velocity() {
    if (!this.#_bindings.method_get_hand_joint_angular_velocity) {
      let classname = new StringName("XRHandTracker");
      let methodname = new StringName("get_hand_joint_angular_velocity");
      this.#_bindings.method_get_hand_joint_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        547240792
      );
    }
  }

  
  
  set_has_tracking_data(_has_data) {
    XRHandTracker.init_method_set_has_tracking_data();
    return _call_native_mb_no_ret(
      XRHandTracker.#_bindings.method_set_has_tracking_data,
      this._owner,
      _has_data
    );
    
  }
  get_has_tracking_data() {
    XRHandTracker.init_method_get_has_tracking_data();
    return _call_native_mb_ret(
      XRHandTracker.#_bindings.method_get_has_tracking_data,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_hand_tracking_source(_source) {
    XRHandTracker.init_method_set_hand_tracking_source();
    return _call_native_mb_no_ret(
      XRHandTracker.#_bindings.method_set_hand_tracking_source,
      this._owner,
      _source
    );
    
  }
  get_hand_tracking_source() {
    XRHandTracker.init_method_get_hand_tracking_source();
    return _call_native_mb_ret(
      XRHandTracker.#_bindings.method_get_hand_tracking_source,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_hand_joint_flags(_joint, _flags) {
    XRHandTracker.init_method_set_hand_joint_flags();
    return _call_native_mb_no_ret(
      XRHandTracker.#_bindings.method_set_hand_joint_flags,
      this._owner,
      _joint, _flags
    );
    
  }
  get_hand_joint_flags(_joint) {
    XRHandTracker.init_method_get_hand_joint_flags();
    return _call_native_mb_ret(
      XRHandTracker.#_bindings.method_get_hand_joint_flags,
      this._owner,
			Variant.Type.OBJECT,
      _joint
    );
    
  }
  set_hand_joint_transform(_joint, _transform) {
    XRHandTracker.init_method_set_hand_joint_transform();
    return _call_native_mb_no_ret(
      XRHandTracker.#_bindings.method_set_hand_joint_transform,
      this._owner,
      _joint, _transform
    );
    
  }
  get_hand_joint_transform(_joint) {
    XRHandTracker.init_method_get_hand_joint_transform();
    return _call_native_mb_ret(
      XRHandTracker.#_bindings.method_get_hand_joint_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      _joint
    );
    
  }
  set_hand_joint_radius(_joint, _radius) {
    XRHandTracker.init_method_set_hand_joint_radius();
    return _call_native_mb_no_ret(
      XRHandTracker.#_bindings.method_set_hand_joint_radius,
      this._owner,
      _joint, _radius
    );
    
  }
  get_hand_joint_radius(_joint) {
    XRHandTracker.init_method_get_hand_joint_radius();
    return _call_native_mb_ret(
      XRHandTracker.#_bindings.method_get_hand_joint_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      _joint
    );
    
  }
  set_hand_joint_linear_velocity(_joint, _linear_velocity) {
    XRHandTracker.init_method_set_hand_joint_linear_velocity();
    return _call_native_mb_no_ret(
      XRHandTracker.#_bindings.method_set_hand_joint_linear_velocity,
      this._owner,
      _joint, _linear_velocity
    );
    
  }
  get_hand_joint_linear_velocity(_joint) {
    XRHandTracker.init_method_get_hand_joint_linear_velocity();
    return _call_native_mb_ret(
      XRHandTracker.#_bindings.method_get_hand_joint_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      _joint
    );
    
  }
  set_hand_joint_angular_velocity(_joint, _angular_velocity) {
    XRHandTracker.init_method_set_hand_joint_angular_velocity();
    return _call_native_mb_no_ret(
      XRHandTracker.#_bindings.method_set_hand_joint_angular_velocity,
      this._owner,
      _joint, _angular_velocity
    );
    
  }
  get_hand_joint_angular_velocity(_joint) {
    XRHandTracker.init_method_get_hand_joint_angular_velocity();
    return _call_native_mb_ret(
      XRHandTracker.#_bindings.method_get_hand_joint_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      _joint
    );
    
  }
  
get has_tracking_data () {
  return this.get_has_tracking_data();
}
set has_tracking_data (new_value) {
  this.set_has_tracking_data(new_value);
}
get hand_tracking_source () {
  return this.get_hand_tracking_source();
}
set hand_tracking_source (new_value) {
  this.set_hand_tracking_source(new_value);
}

  static HandTrackingSource = {
    HAND_TRACKING_SOURCE_UNKNOWN: 0,
    HAND_TRACKING_SOURCE_UNOBSTRUCTED: 1,
    HAND_TRACKING_SOURCE_CONTROLLER: 2,
    HAND_TRACKING_SOURCE_MAX: 3,
  }
  static HandJoint = {
    HAND_JOINT_PALM: 0,
    HAND_JOINT_WRIST: 1,
    HAND_JOINT_THUMB_METACARPAL: 2,
    HAND_JOINT_THUMB_PHALANX_PROXIMAL: 3,
    HAND_JOINT_THUMB_PHALANX_DISTAL: 4,
    HAND_JOINT_THUMB_TIP: 5,
    HAND_JOINT_INDEX_FINGER_METACARPAL: 6,
    HAND_JOINT_INDEX_FINGER_PHALANX_PROXIMAL: 7,
    HAND_JOINT_INDEX_FINGER_PHALANX_INTERMEDIATE: 8,
    HAND_JOINT_INDEX_FINGER_PHALANX_DISTAL: 9,
    HAND_JOINT_INDEX_FINGER_TIP: 10,
    HAND_JOINT_MIDDLE_FINGER_METACARPAL: 11,
    HAND_JOINT_MIDDLE_FINGER_PHALANX_PROXIMAL: 12,
    HAND_JOINT_MIDDLE_FINGER_PHALANX_INTERMEDIATE: 13,
    HAND_JOINT_MIDDLE_FINGER_PHALANX_DISTAL: 14,
    HAND_JOINT_MIDDLE_FINGER_TIP: 15,
    HAND_JOINT_RING_FINGER_METACARPAL: 16,
    HAND_JOINT_RING_FINGER_PHALANX_PROXIMAL: 17,
    HAND_JOINT_RING_FINGER_PHALANX_INTERMEDIATE: 18,
    HAND_JOINT_RING_FINGER_PHALANX_DISTAL: 19,
    HAND_JOINT_RING_FINGER_TIP: 20,
    HAND_JOINT_PINKY_FINGER_METACARPAL: 21,
    HAND_JOINT_PINKY_FINGER_PHALANX_PROXIMAL: 22,
    HAND_JOINT_PINKY_FINGER_PHALANX_INTERMEDIATE: 23,
    HAND_JOINT_PINKY_FINGER_PHALANX_DISTAL: 24,
    HAND_JOINT_PINKY_FINGER_TIP: 25,
    HAND_JOINT_MAX: 26,
  }
  static HandJointFlags = {
    HAND_JOINT_FLAG_ORIENTATION_VALID: 1,
    HAND_JOINT_FLAG_ORIENTATION_TRACKED: 2,
    HAND_JOINT_FLAG_POSITION_VALID: 4,
    HAND_JOINT_FLAG_POSITION_TRACKED: 8,
    HAND_JOINT_FLAG_LINEAR_VELOCITY_VALID: 16,
    HAND_JOINT_FLAG_ANGULAR_VELOCITY_VALID: 32,
  }
}