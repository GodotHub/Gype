import * as internal from '__internal__';
import { RID } from '@js_godot/variant/rid'
import { Variant } from '@js_godot/variant/variant'
import { Transform2D } from '@js_godot/variant/transform2d'
import { StringName } from '@js_godot/variant/string_name'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
export class Skeleton2D extends Node2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Skeleton2D");
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
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("get_bone_count");
      this._bindings.method_get_bone_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("get_bone");
      this._bindings.method_get_bone = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2556267111
      );
    }
    {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("set_modification_stack");
      this._bindings.method_set_modification_stack = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3907307132
      );
    }
    {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("get_modification_stack");
      this._bindings.method_get_modification_stack = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2107508396
      );
    }
    {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("execute_modifications");
      this._bindings.method_execute_modifications = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1005356550
      );
    }
    {
      let classname = new StringName("Skeleton2D");
      let methodname = new StringName("set_bone_local_pose_override");
      this._bindings.method_set_bone_local_pose_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        555457532
      );
    }
    {
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
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_bone_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_bone(_idx) {
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_bone,
      this._owner,
			Variant.INT,
      _idx
    );
    
  }
  get_skeleton() {
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  set_modification_stack(_modification_stack) {
    return _call_native_mb_no_ret(
      Skeleton2D._bindings.method_set_modification_stack,
      this._owner,
      _modification_stack
    );
    
  }
  get_modification_stack() {
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_modification_stack,
      this._owner,
			Variant.INT,
      
    );
    
  }
  execute_modifications(_delta, _execution_mode) {
    return _call_native_mb_no_ret(
      Skeleton2D._bindings.method_execute_modifications,
      this._owner,
      _delta, _execution_mode
    );
    
  }
  set_bone_local_pose_override(_bone_idx, _override_pose, _strength, _persistent) {
    return _call_native_mb_no_ret(
      Skeleton2D._bindings.method_set_bone_local_pose_override,
      this._owner,
      _bone_idx, _override_pose, _strength, _persistent
    );
    
  }
  get_bone_local_pose_override(_bone_idx) {
    return _call_native_mb_ret(
      Skeleton2D._bindings.method_get_bone_local_pose_override,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      _bone_idx
    );
    
  }
  


  static {
    this._init_bindings();
  }
}