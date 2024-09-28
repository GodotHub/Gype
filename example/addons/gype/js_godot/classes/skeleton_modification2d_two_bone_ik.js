import * as internal from '__internal__';
import { SkeletonModification2D } from '@js_godot/classes/skeleton_modification2d'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_target_node;
  method_get_target_node;
  method_set_target_minimum_distance;
  method_get_target_minimum_distance;
  method_set_target_maximum_distance;
  method_get_target_maximum_distance;
  method_set_flip_bend_direction;
  method_get_flip_bend_direction;
  method_set_joint_one_bone2d_node;
  method_get_joint_one_bone2d_node;
  method_set_joint_one_bone_idx;
  method_get_joint_one_bone_idx;
  method_set_joint_two_bone2d_node;
  method_get_joint_two_bone2d_node;
  method_set_joint_two_bone_idx;
  method_get_joint_two_bone_idx;
}
@GodotClass
export class SkeletonModification2DTwoBoneIK extends SkeletonModification2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DTwoBoneIK");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_target_node() {
    if (!this._bindings.method_set_target_node) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_target_node");
      this._bindings.method_set_target_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_target_node() {
    if (!this._bindings.method_get_target_node) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_target_node");
      this._bindings.method_get_target_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_target_minimum_distance() {
    if (!this._bindings.method_set_target_minimum_distance) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_target_minimum_distance");
      this._bindings.method_set_target_minimum_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_target_minimum_distance() {
    if (!this._bindings.method_get_target_minimum_distance) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_target_minimum_distance");
      this._bindings.method_get_target_minimum_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_target_maximum_distance() {
    if (!this._bindings.method_set_target_maximum_distance) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_target_maximum_distance");
      this._bindings.method_set_target_maximum_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_target_maximum_distance() {
    if (!this._bindings.method_get_target_maximum_distance) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_target_maximum_distance");
      this._bindings.method_get_target_maximum_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_flip_bend_direction() {
    if (!this._bindings.method_set_flip_bend_direction) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_flip_bend_direction");
      this._bindings.method_set_flip_bend_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_flip_bend_direction() {
    if (!this._bindings.method_get_flip_bend_direction) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_flip_bend_direction");
      this._bindings.method_get_flip_bend_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_joint_one_bone2d_node() {
    if (!this._bindings.method_set_joint_one_bone2d_node) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_joint_one_bone2d_node");
      this._bindings.method_set_joint_one_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_joint_one_bone2d_node() {
    if (!this._bindings.method_get_joint_one_bone2d_node) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_joint_one_bone2d_node");
      this._bindings.method_get_joint_one_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_joint_one_bone_idx() {
    if (!this._bindings.method_set_joint_one_bone_idx) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_joint_one_bone_idx");
      this._bindings.method_set_joint_one_bone_idx = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_joint_one_bone_idx() {
    if (!this._bindings.method_get_joint_one_bone_idx) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_joint_one_bone_idx");
      this._bindings.method_get_joint_one_bone_idx = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_joint_two_bone2d_node() {
    if (!this._bindings.method_set_joint_two_bone2d_node) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_joint_two_bone2d_node");
      this._bindings.method_set_joint_two_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_joint_two_bone2d_node() {
    if (!this._bindings.method_get_joint_two_bone2d_node) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_joint_two_bone2d_node");
      this._bindings.method_get_joint_two_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_joint_two_bone_idx() {
    if (!this._bindings.method_set_joint_two_bone_idx) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_joint_two_bone_idx");
      this._bindings.method_set_joint_two_bone_idx = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_joint_two_bone_idx() {
    if (!this._bindings.method_get_joint_two_bone_idx) {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_joint_two_bone_idx");
      this._bindings.method_get_joint_two_bone_idx = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_target_node(_target_nodepath) {
    SkeletonModification2DTwoBoneIK.init_method_set_target_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_set_target_node,
      this._owner,
      _target_nodepath
    );
    
  }
  get_target_node() {
    SkeletonModification2DTwoBoneIK.init_method_get_target_node();
    return _call_native_mb_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_get_target_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_target_minimum_distance(_minimum_distance) {
    SkeletonModification2DTwoBoneIK.init_method_set_target_minimum_distance();
    return _call_native_mb_no_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_set_target_minimum_distance,
      this._owner,
      _minimum_distance
    );
    
  }
  get_target_minimum_distance() {
    SkeletonModification2DTwoBoneIK.init_method_get_target_minimum_distance();
    return _call_native_mb_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_get_target_minimum_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_target_maximum_distance(_maximum_distance) {
    SkeletonModification2DTwoBoneIK.init_method_set_target_maximum_distance();
    return _call_native_mb_no_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_set_target_maximum_distance,
      this._owner,
      _maximum_distance
    );
    
  }
  get_target_maximum_distance() {
    SkeletonModification2DTwoBoneIK.init_method_get_target_maximum_distance();
    return _call_native_mb_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_get_target_maximum_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_flip_bend_direction(_flip_direction) {
    SkeletonModification2DTwoBoneIK.init_method_set_flip_bend_direction();
    return _call_native_mb_no_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_set_flip_bend_direction,
      this._owner,
      _flip_direction
    );
    
  }
  get_flip_bend_direction() {
    SkeletonModification2DTwoBoneIK.init_method_get_flip_bend_direction();
    return _call_native_mb_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_get_flip_bend_direction,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_joint_one_bone2d_node(_bone2d_node) {
    SkeletonModification2DTwoBoneIK.init_method_set_joint_one_bone2d_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_set_joint_one_bone2d_node,
      this._owner,
      _bone2d_node
    );
    
  }
  get_joint_one_bone2d_node() {
    SkeletonModification2DTwoBoneIK.init_method_get_joint_one_bone2d_node();
    return _call_native_mb_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_get_joint_one_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_joint_one_bone_idx(_bone_idx) {
    SkeletonModification2DTwoBoneIK.init_method_set_joint_one_bone_idx();
    return _call_native_mb_no_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_set_joint_one_bone_idx,
      this._owner,
      _bone_idx
    );
    
  }
  get_joint_one_bone_idx() {
    SkeletonModification2DTwoBoneIK.init_method_get_joint_one_bone_idx();
    return _call_native_mb_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_get_joint_one_bone_idx,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_joint_two_bone2d_node(_bone2d_node) {
    SkeletonModification2DTwoBoneIK.init_method_set_joint_two_bone2d_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_set_joint_two_bone2d_node,
      this._owner,
      _bone2d_node
    );
    
  }
  get_joint_two_bone2d_node() {
    SkeletonModification2DTwoBoneIK.init_method_get_joint_two_bone2d_node();
    return _call_native_mb_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_get_joint_two_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_joint_two_bone_idx(_bone_idx) {
    SkeletonModification2DTwoBoneIK.init_method_set_joint_two_bone_idx();
    return _call_native_mb_no_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_set_joint_two_bone_idx,
      this._owner,
      _bone_idx
    );
    
  }
  get_joint_two_bone_idx() {
    SkeletonModification2DTwoBoneIK.init_method_get_joint_two_bone_idx();
    return _call_native_mb_ret(
      SkeletonModification2DTwoBoneIK._bindings.method_get_joint_two_bone_idx,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get target_nodepath () {
  return this.get_target_node();
}
set target_nodepath (new_value) {
  this.set_target_node(new_value);
}
get target_minimum_distance () {
  return this.get_target_minimum_distance();
}
set target_minimum_distance (new_value) {
  this.set_target_minimum_distance(new_value);
}
get target_maximum_distance () {
  return this.get_target_maximum_distance();
}
set target_maximum_distance (new_value) {
  this.set_target_maximum_distance(new_value);
}
get flip_bend_direction () {
  return this.get_flip_bend_direction();
}
set flip_bend_direction (new_value) {
  this.set_flip_bend_direction(new_value);
}

}