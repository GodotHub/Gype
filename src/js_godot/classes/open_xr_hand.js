import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { Node3D } from 'src/js_godot/classes/node3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_hand;
    method_get_hand;
    method_set_hand_skeleton;
    method_get_hand_skeleton;
    method_set_motion_range;
    method_get_motion_range;
    method_set_skeleton_rig;
    method_get_skeleton_rig;
    method_set_bone_update;
    method_get_bone_update;
}


export class OpenXRHand extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRHand");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("set_hand");
        this._bindings.method_set_hand = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1849328560
        );
      }
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("get_hand");
        this._bindings.method_get_hand = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2850644561
        );
      }
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("set_hand_skeleton");
        this._bindings.method_set_hand_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("get_hand_skeleton");
        this._bindings.method_get_hand_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("set_motion_range");
        this._bindings.method_set_motion_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3326516003
        );
      }
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("get_motion_range");
        this._bindings.method_get_motion_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2191822314
        );
      }
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("set_skeleton_rig");
        this._bindings.method_set_skeleton_rig = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1528072213
        );
      }
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("get_skeleton_rig");
        this._bindings.method_get_skeleton_rig = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          968409338
        );
      }
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("set_bone_update");
        this._bindings.method_set_bone_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3144625444
        );
      }
      {
        let classname = new StringName("OpenXRHand");
        let methodname = new StringName("get_bone_update");
        this._bindings.method_get_bone_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1310695248
        );
      }
  }
  set_hand(_hand) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hand,
      this._owner,
      _hand
    );
    
  }
  get_hand() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_hand_skeleton(_hand_skeleton) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hand_skeleton,
      this._owner,
      _hand_skeleton
    );
    
  }
  get_hand_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_skeleton,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
  set_motion_range(_motion_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_motion_range,
      this._owner,
      _motion_range
    );
    
  }
  get_motion_range() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_motion_range,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_skeleton_rig(_skeleton_rig) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_skeleton_rig,
      this._owner,
      _skeleton_rig
    );
    
  }
  get_skeleton_rig() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skeleton_rig,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_bone_update(_bone_update) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_update,
      this._owner,
      _bone_update
    );
    
  }
  get_bone_update() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_update,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static Hands = {
    HAND_LEFT: 0,
    HAND_RIGHT: 1,
    HAND_MAX: 2,
  }
  static MotionRange = {
    MOTION_RANGE_UNOBSTRUCTED: 0,
    MOTION_RANGE_CONFORM_TO_CONTROLLER: 1,
    MOTION_RANGE_MAX: 2,
  }
  static SkeletonRig = {
    SKELETON_RIG_OPENXR: 0,
    SKELETON_RIG_HUMANOID: 1,
    SKELETON_RIG_MAX: 2,
  }
  static BoneUpdate = {
    BONE_UPDATE_FULL: 0,
    BONE_UPDATE_ROTATION_ONLY: 1,
    BONE_UPDATE_MAX: 2,
  }
}