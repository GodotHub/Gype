import * as internal from '__internal__';
import { Vector3 } from 'src/js_godot/variant/vector3'
import { XRPositionalTracker } from 'src/js_godot/classes/xr_positional_tracker'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRHandTracker");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("set_has_tracking_data");
        this._bindings.method_set_has_tracking_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("get_has_tracking_data");
        this._bindings.method_get_has_tracking_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("set_hand_tracking_source");
        this._bindings.method_set_hand_tracking_source = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2958308861
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("get_hand_tracking_source");
        this._bindings.method_get_hand_tracking_source = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2475045250
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("set_hand_joint_flags");
        this._bindings.method_set_hand_joint_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3028437365
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("get_hand_joint_flags");
        this._bindings.method_get_hand_joint_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1730972401
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("set_hand_joint_transform");
        this._bindings.method_set_hand_joint_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2529959613
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("get_hand_joint_transform");
        this._bindings.method_get_hand_joint_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1090840196
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("set_hand_joint_radius");
        this._bindings.method_set_hand_joint_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2723659615
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("get_hand_joint_radius");
        this._bindings.method_get_hand_joint_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3400025734
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("set_hand_joint_linear_velocity");
        this._bindings.method_set_hand_joint_linear_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1978646737
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("get_hand_joint_linear_velocity");
        this._bindings.method_get_hand_joint_linear_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          547240792
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("set_hand_joint_angular_velocity");
        this._bindings.method_set_hand_joint_angular_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1978646737
        );
      }
      {
        let classname = new StringName("XRHandTracker");
        let methodname = new StringName("get_hand_joint_angular_velocity");
        this._bindings.method_get_hand_joint_angular_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          547240792
        );
      }
  }
  set_has_tracking_data(_has_data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_has_tracking_data,
      this._owner,
      _has_data
    );
    
  }
  get_has_tracking_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_has_tracking_data,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_hand_tracking_source(_source) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hand_tracking_source,
      this._owner,
      _source
    );
    
  }
  get_hand_tracking_source() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_tracking_source,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_hand_joint_flags(_joint, _flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hand_joint_flags,
      this._owner,
      _joint, _flags
    );
    
  }
  get_hand_joint_flags(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_flags,
      this._owner,
			Variant.INT,
      _joint
    );
    
  }
  set_hand_joint_transform(_joint, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hand_joint_transform,
      this._owner,
      _joint, _transform
    );
    
  }
  get_hand_joint_transform(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _joint
    );
    
  }
  set_hand_joint_radius(_joint, _radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hand_joint_radius,
      this._owner,
      _joint, _radius
    );
    
  }
  get_hand_joint_radius(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_radius,
      this._owner,
			Variant.Type.FLOAT,
      _joint
    );
    
  }
  set_hand_joint_linear_velocity(_joint, _linear_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hand_joint_linear_velocity,
      this._owner,
      _joint, _linear_velocity
    );
    
  }
  get_hand_joint_linear_velocity(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _joint
    );
    
  }
  set_hand_joint_angular_velocity(_joint, _angular_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hand_joint_angular_velocity,
      this._owner,
      _joint, _angular_velocity
    );
    
  }
  get_hand_joint_angular_velocity(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _joint
    );
    
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