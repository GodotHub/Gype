import * as internal from '__internal__';
import { NodePath } from '@js_godot/variant/node_path'
import { Variant } from '@js_godot/variant/variant'
import { SkeletonModification2D } from '@js_godot/classes/skeleton_modification2d'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_target_node;
  method_get_target_node;
  method_set_tip_node;
  method_get_tip_node;
  method_set_ccdik_data_chain_length;
  method_get_ccdik_data_chain_length;
  method_set_ccdik_joint_bone2d_node;
  method_get_ccdik_joint_bone2d_node;
  method_set_ccdik_joint_bone_index;
  method_get_ccdik_joint_bone_index;
  method_set_ccdik_joint_rotate_from_joint;
  method_get_ccdik_joint_rotate_from_joint;
  method_set_ccdik_joint_enable_constraint;
  method_get_ccdik_joint_enable_constraint;
  method_set_ccdik_joint_constraint_angle_min;
  method_get_ccdik_joint_constraint_angle_min;
  method_set_ccdik_joint_constraint_angle_max;
  method_get_ccdik_joint_constraint_angle_max;
  method_set_ccdik_joint_constraint_angle_invert;
  method_get_ccdik_joint_constraint_angle_invert;
}
export class SkeletonModification2DCCDIK extends SkeletonModification2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DCCDIK");
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
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_target_node");
      this._bindings.method_set_target_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_target_node");
      this._bindings.method_get_target_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_tip_node");
      this._bindings.method_set_tip_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_tip_node");
      this._bindings.method_get_tip_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_ccdik_data_chain_length");
      this._bindings.method_set_ccdik_data_chain_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_ccdik_data_chain_length");
      this._bindings.method_get_ccdik_data_chain_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_ccdik_joint_bone2d_node");
      this._bindings.method_set_ccdik_joint_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2761262315
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_ccdik_joint_bone2d_node");
      this._bindings.method_get_ccdik_joint_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        408788394
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_ccdik_joint_bone_index");
      this._bindings.method_set_ccdik_joint_bone_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_ccdik_joint_bone_index");
      this._bindings.method_get_ccdik_joint_bone_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_ccdik_joint_rotate_from_joint");
      this._bindings.method_set_ccdik_joint_rotate_from_joint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_ccdik_joint_rotate_from_joint");
      this._bindings.method_get_ccdik_joint_rotate_from_joint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_ccdik_joint_enable_constraint");
      this._bindings.method_set_ccdik_joint_enable_constraint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_ccdik_joint_enable_constraint");
      this._bindings.method_get_ccdik_joint_enable_constraint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_ccdik_joint_constraint_angle_min");
      this._bindings.method_set_ccdik_joint_constraint_angle_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_ccdik_joint_constraint_angle_min");
      this._bindings.method_get_ccdik_joint_constraint_angle_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_ccdik_joint_constraint_angle_max");
      this._bindings.method_set_ccdik_joint_constraint_angle_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1602489585
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_ccdik_joint_constraint_angle_max");
      this._bindings.method_get_ccdik_joint_constraint_angle_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2339986948
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("set_ccdik_joint_constraint_angle_invert");
      this._bindings.method_set_ccdik_joint_constraint_angle_invert = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("SkeletonModification2DCCDIK");
      let methodname = new StringName("get_ccdik_joint_constraint_angle_invert");
      this._bindings.method_get_ccdik_joint_constraint_angle_invert = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
  }
  
  set_target_node(_target_nodepath) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_target_node,
      this._owner,
      _target_nodepath
    );
    
  }
  get_target_node() {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_target_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_tip_node(_tip_nodepath) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_tip_node,
      this._owner,
      _tip_nodepath
    );
    
  }
  get_tip_node() {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_tip_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_ccdik_data_chain_length(_length) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_ccdik_data_chain_length,
      this._owner,
      _length
    );
    
  }
  get_ccdik_data_chain_length() {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_ccdik_data_chain_length,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_ccdik_joint_bone2d_node(_joint_idx, _bone2d_nodepath) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_ccdik_joint_bone2d_node,
      this._owner,
      _joint_idx, _bone2d_nodepath
    );
    
  }
  get_ccdik_joint_bone2d_node(_joint_idx) {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_ccdik_joint_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      _joint_idx
    );
    
  }
  set_ccdik_joint_bone_index(_joint_idx, _bone_idx) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_ccdik_joint_bone_index,
      this._owner,
      _joint_idx, _bone_idx
    );
    
  }
  get_ccdik_joint_bone_index(_joint_idx) {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_ccdik_joint_bone_index,
      this._owner,
			Variant.Type.INT,
      _joint_idx
    );
    
  }
  set_ccdik_joint_rotate_from_joint(_joint_idx, _rotate_from_joint) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_ccdik_joint_rotate_from_joint,
      this._owner,
      _joint_idx, _rotate_from_joint
    );
    
  }
  get_ccdik_joint_rotate_from_joint(_joint_idx) {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_ccdik_joint_rotate_from_joint,
      this._owner,
			Variant.Type.BOOL,
      _joint_idx
    );
    
  }
  set_ccdik_joint_enable_constraint(_joint_idx, _enable_constraint) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_ccdik_joint_enable_constraint,
      this._owner,
      _joint_idx, _enable_constraint
    );
    
  }
  get_ccdik_joint_enable_constraint(_joint_idx) {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_ccdik_joint_enable_constraint,
      this._owner,
			Variant.Type.BOOL,
      _joint_idx
    );
    
  }
  set_ccdik_joint_constraint_angle_min(_joint_idx, _angle_min) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_ccdik_joint_constraint_angle_min,
      this._owner,
      _joint_idx, _angle_min
    );
    
  }
  get_ccdik_joint_constraint_angle_min(_joint_idx) {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_ccdik_joint_constraint_angle_min,
      this._owner,
			Variant.Type.FLOAT,
      _joint_idx
    );
    
  }
  set_ccdik_joint_constraint_angle_max(_joint_idx, _angle_max) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_ccdik_joint_constraint_angle_max,
      this._owner,
      _joint_idx, _angle_max
    );
    
  }
  get_ccdik_joint_constraint_angle_max(_joint_idx) {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_ccdik_joint_constraint_angle_max,
      this._owner,
			Variant.Type.FLOAT,
      _joint_idx
    );
    
  }
  set_ccdik_joint_constraint_angle_invert(_joint_idx, _invert) {
    return _call_native_mb_no_ret(
      SkeletonModification2DCCDIK._bindings.method_set_ccdik_joint_constraint_angle_invert,
      this._owner,
      _joint_idx, _invert
    );
    
  }
  get_ccdik_joint_constraint_angle_invert(_joint_idx) {
    return _call_native_mb_ret(
      SkeletonModification2DCCDIK._bindings.method_get_ccdik_joint_constraint_angle_invert,
      this._owner,
			Variant.Type.BOOL,
      _joint_idx
    );
    
  }
  
get target_nodepath () {
  return this.get_target_node();
}
set target_nodepath (new_value) {
  this.set_target_node(new_value);
}
get tip_nodepath () {
  return this.get_tip_node();
}
set tip_nodepath (new_value) {
  this.set_tip_node(new_value);
}
get ccdik_data_chain_length () {
  return this.get_ccdik_data_chain_length();
}
set ccdik_data_chain_length (new_value) {
  this.set_ccdik_data_chain_length(new_value);
}


  static {
    this._init_bindings();
  }
}