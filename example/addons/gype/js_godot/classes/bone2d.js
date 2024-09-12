import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node2D } from '@js_godot/classes/node2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_rest;
  method_get_rest;
  method_apply_rest;
  method_get_skeleton_rest;
  method_get_index_in_skeleton;
  method_set_autocalculate_length_and_angle;
  method_get_autocalculate_length_and_angle;
  method_set_length;
  method_get_length;
  method_set_bone_angle;
  method_get_bone_angle;
}
export class Bone2D extends Node2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Bone2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_rest() {
    if (!this.#_bindings.method_set_rest) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("set_rest");
      this.#_bindings.method_set_rest = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761652528
      );
    }
  }
  static init_method_get_rest() {
    if (!this.#_bindings.method_get_rest) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("get_rest");
      this.#_bindings.method_get_rest = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_apply_rest() {
    if (!this.#_bindings.method_apply_rest) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("apply_rest");
      this.#_bindings.method_apply_rest = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_skeleton_rest() {
    if (!this.#_bindings.method_get_skeleton_rest) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("get_skeleton_rest");
      this.#_bindings.method_get_skeleton_rest = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3814499831
      );
    }
  }
  static init_method_get_index_in_skeleton() {
    if (!this.#_bindings.method_get_index_in_skeleton) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("get_index_in_skeleton");
      this.#_bindings.method_get_index_in_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_autocalculate_length_and_angle() {
    if (!this.#_bindings.method_set_autocalculate_length_and_angle) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("set_autocalculate_length_and_angle");
      this.#_bindings.method_set_autocalculate_length_and_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_autocalculate_length_and_angle() {
    if (!this.#_bindings.method_get_autocalculate_length_and_angle) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("get_autocalculate_length_and_angle");
      this.#_bindings.method_get_autocalculate_length_and_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_length() {
    if (!this.#_bindings.method_set_length) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("set_length");
      this.#_bindings.method_set_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_length() {
    if (!this.#_bindings.method_get_length) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("get_length");
      this.#_bindings.method_get_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_bone_angle() {
    if (!this.#_bindings.method_set_bone_angle) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("set_bone_angle");
      this.#_bindings.method_set_bone_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bone_angle() {
    if (!this.#_bindings.method_get_bone_angle) {
      let classname = new StringName("Bone2D");
      let methodname = new StringName("get_bone_angle");
      this.#_bindings.method_get_bone_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_rest(_rest) {
    Bone2D.init_method_set_rest();
    return _call_native_mb_no_ret(
      Bone2D.#_bindings.method_set_rest,
      this._owner,
      _rest
    );
    
  }
  get_rest() {
    Bone2D.init_method_get_rest();
    return _call_native_mb_ret(
      Bone2D.#_bindings.method_get_rest,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  apply_rest() {
    Bone2D.init_method_apply_rest();
    return _call_native_mb_no_ret(
      Bone2D.#_bindings.method_apply_rest,
      this._owner,
      
    );
    
  }
  get_skeleton_rest() {
    Bone2D.init_method_get_skeleton_rest();
    return _call_native_mb_ret(
      Bone2D.#_bindings.method_get_skeleton_rest,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  get_index_in_skeleton() {
    Bone2D.init_method_get_index_in_skeleton();
    return _call_native_mb_ret(
      Bone2D.#_bindings.method_get_index_in_skeleton,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_autocalculate_length_and_angle(_auto_calculate) {
    Bone2D.init_method_set_autocalculate_length_and_angle();
    return _call_native_mb_no_ret(
      Bone2D.#_bindings.method_set_autocalculate_length_and_angle,
      this._owner,
      _auto_calculate
    );
    
  }
  get_autocalculate_length_and_angle() {
    Bone2D.init_method_get_autocalculate_length_and_angle();
    return _call_native_mb_ret(
      Bone2D.#_bindings.method_get_autocalculate_length_and_angle,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_length(_length) {
    Bone2D.init_method_set_length();
    return _call_native_mb_no_ret(
      Bone2D.#_bindings.method_set_length,
      this._owner,
      _length
    );
    
  }
  get_length() {
    Bone2D.init_method_get_length();
    return _call_native_mb_ret(
      Bone2D.#_bindings.method_get_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_bone_angle(_angle) {
    Bone2D.init_method_set_bone_angle();
    return _call_native_mb_no_ret(
      Bone2D.#_bindings.method_set_bone_angle,
      this._owner,
      _angle
    );
    
  }
  get_bone_angle() {
    Bone2D.init_method_get_bone_angle();
    return _call_native_mb_ret(
      Bone2D.#_bindings.method_get_bone_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get rest () {
  return this.get_rest();
}
set rest (new_value) {
  this.set_rest(new_value);
}

}