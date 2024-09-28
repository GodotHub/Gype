import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_bone_count;
  method_get_bone;
  method_get_skeleton;
  method_set_modification_stack;
  method_get_modification_stack;
  method_execute_modifications;
  method_set_bone_local_pose_override;
  method_get_bone_local_pose_override;
}
@GodotClass
export class Skeleton2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Skeleton2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_bone_count() {
    if (!this._bindings.method_get_bone_count) {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("get_bone_count");
      this._bindings.method_get_bone_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_bone() {
    if (!this._bindings.method_get_bone) {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("get_bone");
      this._bindings.method_get_bone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2556267111
      );
    }
  }
  static init_method_get_skeleton() {
    if (!this._bindings.method_get_skeleton) {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_set_modification_stack() {
    if (!this._bindings.method_set_modification_stack) {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("set_modification_stack");
      this._bindings.method_set_modification_stack = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3907307132
      );
    }
  }
  static init_method_get_modification_stack() {
    if (!this._bindings.method_get_modification_stack) {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("get_modification_stack");
      this._bindings.method_get_modification_stack = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2107508396
      );
    }
  }
  static init_method_execute_modifications() {
    if (!this._bindings.method_execute_modifications) {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("execute_modifications");
      this._bindings.method_execute_modifications = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1005356550
      );
    }
  }
  static init_method_set_bone_local_pose_override() {
    if (!this._bindings.method_set_bone_local_pose_override) {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("set_bone_local_pose_override");
      this._bindings.method_set_bone_local_pose_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        555457532
      );
    }
  }
  static init_method_get_bone_local_pose_override() {
    if (!this._bindings.method_get_bone_local_pose_override) {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("get_bone_local_pose_override");
      this._bindings.method_get_bone_local_pose_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2995540667
      );
    }
  }

  
  
  get_bone_count() {
    Skeleton2D.init_method_get_bone_count();
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_bone_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_bone(_idx) {
    Skeleton2D.init_method_get_bone();
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_bone,
      this._owner,
			Variant.Type.OBJECT,
      _idx
    );
    
  }
  get_skeleton() {
    Skeleton2D.init_method_get_skeleton();
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_modification_stack(_modification_stack) {
    Skeleton2D.init_method_set_modification_stack();
    return _call_native_mb_no_ret(
      Skeleton2D._bindings.method_set_modification_stack,
      this._owner,
      _modification_stack
    );
    
  }
  get_modification_stack() {
    Skeleton2D.init_method_get_modification_stack();
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_modification_stack,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  execute_modifications(_delta, _execution_mode) {
    Skeleton2D.init_method_execute_modifications();
    return _call_native_mb_no_ret(
      Skeleton2D._bindings.method_execute_modifications,
      this._owner,
      _delta, _execution_mode
    );
    
  }
  set_bone_local_pose_override(_bone_idx, _override_pose, _strength, _persistent) {
    Skeleton2D.init_method_set_bone_local_pose_override();
    return _call_native_mb_no_ret(
      Skeleton2D._bindings.method_set_bone_local_pose_override,
      this._owner,
      _bone_idx, _override_pose, _strength, _persistent
    );
    
  }
  get_bone_local_pose_override(_bone_idx) {
    Skeleton2D.init_method_get_bone_local_pose_override();
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_bone_local_pose_override,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      _bone_idx
    );
    
  }
  

}