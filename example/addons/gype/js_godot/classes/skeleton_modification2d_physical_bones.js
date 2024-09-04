import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { SkeletonModification2D } from '@js_godot/classes/skeleton_modification2d'
import { NodePath } from '@js_godot/variant/node_path'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_physical_bone_chain_length;
  method_get_physical_bone_chain_length;
  method_set_physical_bone_node;
  method_get_physical_bone_node;
  method_fetch_physical_bones;
  method_start_simulation;
  method_stop_simulation;
}
export class SkeletonModification2DPhysicalBones extends SkeletonModification2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DPhysicalBones");
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
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("set_physical_bone_chain_length");
      this._bindings.method_set_physical_bone_chain_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("get_physical_bone_chain_length");
      this._bindings.method_get_physical_bone_chain_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("set_physical_bone_node");
      this._bindings.method_set_physical_bone_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2761262315
      );
    }
    {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("get_physical_bone_node");
      this._bindings.method_get_physical_bone_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        408788394
      );
    }
    {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("fetch_physical_bones");
      this._bindings.method_fetch_physical_bones = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("start_simulation");
      this._bindings.method_start_simulation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2787316981
      );
    }
    {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("stop_simulation");
      this._bindings.method_stop_simulation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2787316981
      );
    }
  }
  set_physical_bone_chain_length(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_physical_bone_chain_length,
      this._owner,
      _length
    );
    
  }
  get_physical_bone_chain_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_physical_bone_chain_length,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_physical_bone_node(_joint_idx, _physicalbone2d_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_physical_bone_node,
      this._owner,
      _joint_idx, _physicalbone2d_node
    );
    
  }
  get_physical_bone_node(_joint_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_physical_bone_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      _joint_idx
    );
    
  }
  fetch_physical_bones() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_fetch_physical_bones,
      this._owner,
      
    );
    
  }
  start_simulation(_bones) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_start_simulation,
      this._owner,
      _bones
    );
    
  }
  stop_simulation(_bones) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop_simulation,
      this._owner,
      _bones
    );
    
  }
  
get physical_bone_chain_length () {
  return this.get_physical_bone_chain_length();
}
set physical_bone_chain_length (new_value) {
  this.set_physical_bone_chain_length(new_value);
}


  static {
    this._init_bindings();
  }
}