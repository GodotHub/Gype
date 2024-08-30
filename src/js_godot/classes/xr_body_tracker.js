import * as internal from '__internal__';
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
    method_set_body_flags;
    method_get_body_flags;
    method_set_joint_flags;
    method_get_joint_flags;
    method_set_joint_transform;
    method_get_joint_transform;
}


export class XRBodyTracker extends XRPositionalTracker{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRBodyTracker");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("XRBodyTracker");
        let methodname = new StringName("set_has_tracking_data");
        this._bindings.method_set_has_tracking_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("XRBodyTracker");
        let methodname = new StringName("get_has_tracking_data");
        this._bindings.method_get_has_tracking_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("XRBodyTracker");
        let methodname = new StringName("set_body_flags");
        this._bindings.method_set_body_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2103235750
        );
      }
      {
        let classname = new StringName("XRBodyTracker");
        let methodname = new StringName("get_body_flags");
        this._bindings.method_get_body_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3543166366
        );
      }
      {
        let classname = new StringName("XRBodyTracker");
        let methodname = new StringName("set_joint_flags");
        this._bindings.method_set_joint_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          592144999
        );
      }
      {
        let classname = new StringName("XRBodyTracker");
        let methodname = new StringName("get_joint_flags");
        this._bindings.method_get_joint_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1030162609
        );
      }
      {
        let classname = new StringName("XRBodyTracker");
        let methodname = new StringName("set_joint_transform");
        this._bindings.method_set_joint_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2635424328
        );
      }
      {
        let classname = new StringName("XRBodyTracker");
        let methodname = new StringName("get_joint_transform");
        this._bindings.method_get_joint_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3474811534
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
  set_body_flags(_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_body_flags,
      this._owner,
      _flags
    );
    
  }
  get_body_flags() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_body_flags,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_joint_flags(_joint, _flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joint_flags,
      this._owner,
      _joint, _flags
    );
    
  }
  get_joint_flags(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint_flags,
      this._owner,
			Variant.INT,
      _joint
    );
    
  }
  set_joint_transform(_joint, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joint_transform,
      this._owner,
      _joint, _transform
    );
    
  }
  get_joint_transform(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _joint
    );
    
  }
  static BodyFlags = {
    BODY_FLAG_UPPER_BODY_SUPPORTED: 1,
    BODY_FLAG_LOWER_BODY_SUPPORTED: 2,
    BODY_FLAG_HANDS_SUPPORTED: 4,
  }
  static Joint = {
    JOINT_ROOT: 0,
    JOINT_HIPS: 1,
    JOINT_SPINE: 2,
    JOINT_CHEST: 3,
    JOINT_UPPER_CHEST: 4,
    JOINT_NECK: 5,
    JOINT_HEAD: 6,
    JOINT_HEAD_TIP: 7,
    JOINT_LEFT_SHOULDER: 8,
    JOINT_LEFT_UPPER_ARM: 9,
    JOINT_LEFT_LOWER_ARM: 10,
    JOINT_RIGHT_SHOULDER: 11,
    JOINT_RIGHT_UPPER_ARM: 12,
    JOINT_RIGHT_LOWER_ARM: 13,
    JOINT_LEFT_UPPER_LEG: 14,
    JOINT_LEFT_LOWER_LEG: 15,
    JOINT_LEFT_FOOT: 16,
    JOINT_LEFT_TOES: 17,
    JOINT_RIGHT_UPPER_LEG: 18,
    JOINT_RIGHT_LOWER_LEG: 19,
    JOINT_RIGHT_FOOT: 20,
    JOINT_RIGHT_TOES: 21,
    JOINT_LEFT_HAND: 22,
    JOINT_LEFT_PALM: 23,
    JOINT_LEFT_WRIST: 24,
    JOINT_LEFT_THUMB_METACARPAL: 25,
    JOINT_LEFT_THUMB_PHALANX_PROXIMAL: 26,
    JOINT_LEFT_THUMB_PHALANX_DISTAL: 27,
    JOINT_LEFT_THUMB_TIP: 28,
    JOINT_LEFT_INDEX_FINGER_METACARPAL: 29,
    JOINT_LEFT_INDEX_FINGER_PHALANX_PROXIMAL: 30,
    JOINT_LEFT_INDEX_FINGER_PHALANX_INTERMEDIATE: 31,
    JOINT_LEFT_INDEX_FINGER_PHALANX_DISTAL: 32,
    JOINT_LEFT_INDEX_FINGER_TIP: 33,
    JOINT_LEFT_MIDDLE_FINGER_METACARPAL: 34,
    JOINT_LEFT_MIDDLE_FINGER_PHALANX_PROXIMAL: 35,
    JOINT_LEFT_MIDDLE_FINGER_PHALANX_INTERMEDIATE: 36,
    JOINT_LEFT_MIDDLE_FINGER_PHALANX_DISTAL: 37,
    JOINT_LEFT_MIDDLE_FINGER_TIP: 38,
    JOINT_LEFT_RING_FINGER_METACARPAL: 39,
    JOINT_LEFT_RING_FINGER_PHALANX_PROXIMAL: 40,
    JOINT_LEFT_RING_FINGER_PHALANX_INTERMEDIATE: 41,
    JOINT_LEFT_RING_FINGER_PHALANX_DISTAL: 42,
    JOINT_LEFT_RING_FINGER_TIP: 43,
    JOINT_LEFT_PINKY_FINGER_METACARPAL: 44,
    JOINT_LEFT_PINKY_FINGER_PHALANX_PROXIMAL: 45,
    JOINT_LEFT_PINKY_FINGER_PHALANX_INTERMEDIATE: 46,
    JOINT_LEFT_PINKY_FINGER_PHALANX_DISTAL: 47,
    JOINT_LEFT_PINKY_FINGER_TIP: 48,
    JOINT_RIGHT_HAND: 49,
    JOINT_RIGHT_PALM: 50,
    JOINT_RIGHT_WRIST: 51,
    JOINT_RIGHT_THUMB_METACARPAL: 52,
    JOINT_RIGHT_THUMB_PHALANX_PROXIMAL: 53,
    JOINT_RIGHT_THUMB_PHALANX_DISTAL: 54,
    JOINT_RIGHT_THUMB_TIP: 55,
    JOINT_RIGHT_INDEX_FINGER_METACARPAL: 56,
    JOINT_RIGHT_INDEX_FINGER_PHALANX_PROXIMAL: 57,
    JOINT_RIGHT_INDEX_FINGER_PHALANX_INTERMEDIATE: 58,
    JOINT_RIGHT_INDEX_FINGER_PHALANX_DISTAL: 59,
    JOINT_RIGHT_INDEX_FINGER_TIP: 60,
    JOINT_RIGHT_MIDDLE_FINGER_METACARPAL: 61,
    JOINT_RIGHT_MIDDLE_FINGER_PHALANX_PROXIMAL: 62,
    JOINT_RIGHT_MIDDLE_FINGER_PHALANX_INTERMEDIATE: 63,
    JOINT_RIGHT_MIDDLE_FINGER_PHALANX_DISTAL: 64,
    JOINT_RIGHT_MIDDLE_FINGER_TIP: 65,
    JOINT_RIGHT_RING_FINGER_METACARPAL: 66,
    JOINT_RIGHT_RING_FINGER_PHALANX_PROXIMAL: 67,
    JOINT_RIGHT_RING_FINGER_PHALANX_INTERMEDIATE: 68,
    JOINT_RIGHT_RING_FINGER_PHALANX_DISTAL: 69,
    JOINT_RIGHT_RING_FINGER_TIP: 70,
    JOINT_RIGHT_PINKY_FINGER_METACARPAL: 71,
    JOINT_RIGHT_PINKY_FINGER_PHALANX_PROXIMAL: 72,
    JOINT_RIGHT_PINKY_FINGER_PHALANX_INTERMEDIATE: 73,
    JOINT_RIGHT_PINKY_FINGER_PHALANX_DISTAL: 74,
    JOINT_RIGHT_PINKY_FINGER_TIP: 75,
    JOINT_MAX: 76,
  }
  static JointFlags = {
    JOINT_FLAG_ORIENTATION_VALID: 1,
    JOINT_FLAG_ORIENTATION_TRACKED: 2,
    JOINT_FLAG_POSITION_VALID: 4,
    JOINT_FLAG_POSITION_TRACKED: 8,
  }
}