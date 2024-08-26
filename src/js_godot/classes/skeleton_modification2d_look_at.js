import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { SkeletonModification2D } from 'src/js_godot/classesskeleton_modification2d'
class _MethodBindings {
    method_set_bone2d_node;
    method_get_bone2d_node;
    method_set_bone_index;
    method_get_bone_index;
    method_set_target_node;
    method_get_target_node;
    method_set_additional_rotation;
    method_get_additional_rotation;
    method_set_enable_constraint;
    method_get_enable_constraint;
    method_set_constraint_angle_min;
    method_get_constraint_angle_min;
    method_set_constraint_angle_max;
    method_get_constraint_angle_max;
    method_set_constraint_angle_invert;
    method_get_constraint_angle_invert;
}


export class SkeletonModification2DLookAt extends SkeletonModification2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DLookAt");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_bone2d_node");
      this._bindings.method_set_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_bone2d_node");
      this._bindings.method_get_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_bone_index");
      this._bindings.method_set_bone_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_bone_index");
      this._bindings.method_get_bone_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_target_node");
      this._bindings.method_set_target_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_target_node");
      this._bindings.method_get_target_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_additional_rotation");
      this._bindings.method_set_additional_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_additional_rotation");
      this._bindings.method_get_additional_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_enable_constraint");
      this._bindings.method_set_enable_constraint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_enable_constraint");
      this._bindings.method_get_enable_constraint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_constraint_angle_min");
      this._bindings.method_set_constraint_angle_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_constraint_angle_min");
      this._bindings.method_get_constraint_angle_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_constraint_angle_max");
      this._bindings.method_set_constraint_angle_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_constraint_angle_max");
      this._bindings.method_get_constraint_angle_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_constraint_angle_invert");
      this._bindings.method_set_constraint_angle_invert = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_constraint_angle_invert");
      this._bindings.method_get_constraint_angle_invert = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_bone2d_node(_bone2d_nodepath) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone2d_node,
      this._owner,
      _bone2d_nodepath
    );
  }
  get_bone2d_node() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
  }
  set_bone_index(_bone_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_index,
      this._owner,
      _bone_idx
    );
  }
  get_bone_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_index,
      this._owner,
			Variant.Type.INT,
      
    );
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
  set_additional_rotation(_rotation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_additional_rotation,
      this._owner,
      _rotation
    );
  }
  get_additional_rotation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_additional_rotation,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_enable_constraint(_enable_constraint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_constraint,
      this._owner,
      _enable_constraint
    );
  }
  get_enable_constraint() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_constraint,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_constraint_angle_min(_angle_min) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constraint_angle_min,
      this._owner,
      _angle_min
    );
  }
  get_constraint_angle_min() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constraint_angle_min,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_constraint_angle_max(_angle_max) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constraint_angle_max,
      this._owner,
      _angle_max
    );
  }
  get_constraint_angle_max() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constraint_angle_max,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_constraint_angle_invert(_invert) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constraint_angle_invert,
      this._owner,
      _invert
    );
  }
  get_constraint_angle_invert() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constraint_angle_invert,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}