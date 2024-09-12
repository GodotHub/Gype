import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { SkeletonModification2D } from '@js_godot/classes/skeleton_modification2d'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DPhysicalBones");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_physical_bone_chain_length() {
    if (!this.#_bindings.method_set_physical_bone_chain_length) {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("set_physical_bone_chain_length");
      this.#_bindings.method_set_physical_bone_chain_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_physical_bone_chain_length() {
    if (!this.#_bindings.method_get_physical_bone_chain_length) {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("get_physical_bone_chain_length");
      this.#_bindings.method_get_physical_bone_chain_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_physical_bone_node() {
    if (!this.#_bindings.method_set_physical_bone_node) {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("set_physical_bone_node");
      this.#_bindings.method_set_physical_bone_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761262315
      );
    }
  }
  static init_method_get_physical_bone_node() {
    if (!this.#_bindings.method_get_physical_bone_node) {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("get_physical_bone_node");
      this.#_bindings.method_get_physical_bone_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        408788394
      );
    }
  }
  static init_method_fetch_physical_bones() {
    if (!this.#_bindings.method_fetch_physical_bones) {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("fetch_physical_bones");
      this.#_bindings.method_fetch_physical_bones = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_start_simulation() {
    if (!this.#_bindings.method_start_simulation) {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("start_simulation");
      this.#_bindings.method_start_simulation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2787316981
      );
    }
  }
  static init_method_stop_simulation() {
    if (!this.#_bindings.method_stop_simulation) {
      let classname = new StringName("SkeletonModification2DPhysicalBones");
      let methodname = new StringName("stop_simulation");
      this.#_bindings.method_stop_simulation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2787316981
      );
    }
  }

  
  
  set_physical_bone_chain_length(_length) {
    SkeletonModification2DPhysicalBones.init_method_set_physical_bone_chain_length();
    return _call_native_mb_no_ret(
      SkeletonModification2DPhysicalBones.#_bindings.method_set_physical_bone_chain_length,
      this._owner,
      _length
    );
    
  }
  get_physical_bone_chain_length() {
    SkeletonModification2DPhysicalBones.init_method_get_physical_bone_chain_length();
    return _call_native_mb_ret(
      SkeletonModification2DPhysicalBones.#_bindings.method_get_physical_bone_chain_length,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_physical_bone_node(_joint_idx, _physicalbone2d_node) {
    SkeletonModification2DPhysicalBones.init_method_set_physical_bone_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DPhysicalBones.#_bindings.method_set_physical_bone_node,
      this._owner,
      _joint_idx, _physicalbone2d_node
    );
    
  }
  get_physical_bone_node(_joint_idx) {
    SkeletonModification2DPhysicalBones.init_method_get_physical_bone_node();
    return _call_native_mb_ret(
      SkeletonModification2DPhysicalBones.#_bindings.method_get_physical_bone_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      _joint_idx
    );
    
  }
  fetch_physical_bones() {
    SkeletonModification2DPhysicalBones.init_method_fetch_physical_bones();
    return _call_native_mb_no_ret(
      SkeletonModification2DPhysicalBones.#_bindings.method_fetch_physical_bones,
      this._owner,
      
    );
    
  }
  start_simulation(_bones) {
    SkeletonModification2DPhysicalBones.init_method_start_simulation();
    return _call_native_mb_no_ret(
      SkeletonModification2DPhysicalBones.#_bindings.method_start_simulation,
      this._owner,
      _bones
    );
    
  }
  stop_simulation(_bones) {
    SkeletonModification2DPhysicalBones.init_method_stop_simulation();
    return _call_native_mb_no_ret(
      SkeletonModification2DPhysicalBones.#_bindings.method_stop_simulation,
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

}