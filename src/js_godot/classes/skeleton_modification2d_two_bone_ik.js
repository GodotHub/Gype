import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { SkeletonModification2D } from 'src/js_godot/classesskeleton_modification2d'
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


export class SkeletonModification2DTwoBoneIK extends SkeletonModification2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DTwoBoneIK");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_target_node");
      this._bindings.method_set_target_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_target_node");
      this._bindings.method_get_target_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_target_minimum_distance");
      this._bindings.method_set_target_minimum_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_target_minimum_distance");
      this._bindings.method_get_target_minimum_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_target_maximum_distance");
      this._bindings.method_set_target_maximum_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_target_maximum_distance");
      this._bindings.method_get_target_maximum_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_flip_bend_direction");
      this._bindings.method_set_flip_bend_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_flip_bend_direction");
      this._bindings.method_get_flip_bend_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_joint_one_bone2d_node");
      this._bindings.method_set_joint_one_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_joint_one_bone2d_node");
      this._bindings.method_get_joint_one_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_joint_one_bone_idx");
      this._bindings.method_set_joint_one_bone_idx = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_joint_one_bone_idx");
      this._bindings.method_get_joint_one_bone_idx = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_joint_two_bone2d_node");
      this._bindings.method_set_joint_two_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("get_joint_two_bone2d_node");
      this._bindings.method_get_joint_two_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("SkeletonModification2DTwoBoneIK");
      let methodname = new StringName("set_joint_two_bone_idx");
      this._bindings.method_set_joint_two_bone_idx = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target_node,
      this._owner,
      _target_nodepath
    );
  }
  get_target_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target_node,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
  }
  set_target_minimum_distance(_minimum_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target_minimum_distance,
      this._owner,
      _minimum_distance
    );
  }
  get_target_minimum_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target_minimum_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_target_maximum_distance(_maximum_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target_maximum_distance,
      this._owner,
      _maximum_distance
    );
  }
  get_target_maximum_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target_maximum_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_flip_bend_direction(_flip_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flip_bend_direction,
      this._owner,
      _flip_direction
    );
  }
  get_flip_bend_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flip_bend_direction,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_joint_one_bone2d_node(_bone2d_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joint_one_bone2d_node,
      this._owner,
      _bone2d_node
    );
  }
  get_joint_one_bone2d_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint_one_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
  }
  set_joint_one_bone_idx(_bone_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joint_one_bone_idx,
      this._owner,
      _bone_idx
    );
  }
  get_joint_one_bone_idx() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint_one_bone_idx,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_joint_two_bone2d_node(_bone2d_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joint_two_bone2d_node,
      this._owner,
      _bone2d_node
    );
  }
  get_joint_two_bone2d_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint_two_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
  }
  set_joint_two_bone_idx(_bone_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_joint_two_bone_idx,
      this._owner,
      _bone_idx
    );
  }
  get_joint_two_bone_idx() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint_two_bone_idx,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}