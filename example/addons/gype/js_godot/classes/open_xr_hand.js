import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node3D } from '@js_godot/classes/node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRHand");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_hand() {
    if (!this.#_bindings.method_set_hand) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("set_hand");
      this.#_bindings.method_set_hand = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1849328560
      );
    }
  }
  static init_method_get_hand() {
    if (!this.#_bindings.method_get_hand) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("get_hand");
      this.#_bindings.method_get_hand = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2850644561
      );
    }
  }
  static init_method_set_hand_skeleton() {
    if (!this.#_bindings.method_set_hand_skeleton) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("set_hand_skeleton");
      this.#_bindings.method_set_hand_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_hand_skeleton() {
    if (!this.#_bindings.method_get_hand_skeleton) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("get_hand_skeleton");
      this.#_bindings.method_get_hand_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_motion_range() {
    if (!this.#_bindings.method_set_motion_range) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("set_motion_range");
      this.#_bindings.method_set_motion_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3326516003
      );
    }
  }
  static init_method_get_motion_range() {
    if (!this.#_bindings.method_get_motion_range) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("get_motion_range");
      this.#_bindings.method_get_motion_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2191822314
      );
    }
  }
  static init_method_set_skeleton_rig() {
    if (!this.#_bindings.method_set_skeleton_rig) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("set_skeleton_rig");
      this.#_bindings.method_set_skeleton_rig = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1528072213
      );
    }
  }
  static init_method_get_skeleton_rig() {
    if (!this.#_bindings.method_get_skeleton_rig) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("get_skeleton_rig");
      this.#_bindings.method_get_skeleton_rig = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        968409338
      );
    }
  }
  static init_method_set_bone_update() {
    if (!this.#_bindings.method_set_bone_update) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("set_bone_update");
      this.#_bindings.method_set_bone_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3144625444
      );
    }
  }
  static init_method_get_bone_update() {
    if (!this.#_bindings.method_get_bone_update) {
      let classname = new StringName("OpenXRHand");
      let methodname = new StringName("get_bone_update");
      this.#_bindings.method_get_bone_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1310695248
      );
    }
  }

  
  
  set_hand(_hand) {
    OpenXRHand.init_method_set_hand();
    return _call_native_mb_no_ret(
      OpenXRHand.#_bindings.method_set_hand,
      this._owner,
      _hand
    );
    
  }
  get_hand() {
    OpenXRHand.init_method_get_hand();
    return _call_native_mb_ret(
      OpenXRHand.#_bindings.method_get_hand,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_hand_skeleton(_hand_skeleton) {
    OpenXRHand.init_method_set_hand_skeleton();
    return _call_native_mb_no_ret(
      OpenXRHand.#_bindings.method_set_hand_skeleton,
      this._owner,
      _hand_skeleton
    );
    
  }
  get_hand_skeleton() {
    OpenXRHand.init_method_get_hand_skeleton();
    return _call_native_mb_ret(
      OpenXRHand.#_bindings.method_get_hand_skeleton,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_motion_range(_motion_range) {
    OpenXRHand.init_method_set_motion_range();
    return _call_native_mb_no_ret(
      OpenXRHand.#_bindings.method_set_motion_range,
      this._owner,
      _motion_range
    );
    
  }
  get_motion_range() {
    OpenXRHand.init_method_get_motion_range();
    return _call_native_mb_ret(
      OpenXRHand.#_bindings.method_get_motion_range,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_skeleton_rig(_skeleton_rig) {
    OpenXRHand.init_method_set_skeleton_rig();
    return _call_native_mb_no_ret(
      OpenXRHand.#_bindings.method_set_skeleton_rig,
      this._owner,
      _skeleton_rig
    );
    
  }
  get_skeleton_rig() {
    OpenXRHand.init_method_get_skeleton_rig();
    return _call_native_mb_ret(
      OpenXRHand.#_bindings.method_get_skeleton_rig,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_bone_update(_bone_update) {
    OpenXRHand.init_method_set_bone_update();
    return _call_native_mb_no_ret(
      OpenXRHand.#_bindings.method_set_bone_update,
      this._owner,
      _bone_update
    );
    
  }
  get_bone_update() {
    OpenXRHand.init_method_get_bone_update();
    return _call_native_mb_ret(
      OpenXRHand.#_bindings.method_get_bone_update,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get hand () {
  return this.get_hand();
}
set hand (new_value) {
  this.set_hand(new_value);
}
get motion_range () {
  return this.get_motion_range();
}
set motion_range (new_value) {
  this.set_motion_range(new_value);
}
get hand_skeleton () {
  return this.get_hand_skeleton();
}
set hand_skeleton (new_value) {
  this.set_hand_skeleton(new_value);
}
get skeleton_rig () {
  return this.get_skeleton_rig();
}
set skeleton_rig (new_value) {
  this.set_skeleton_rig(new_value);
}
get bone_update () {
  return this.get_bone_update();
}
set bone_update (new_value) {
  this.set_bone_update(new_value);
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