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
@GodotClass
export class SkeletonModification2DLookAt extends SkeletonModification2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DLookAt");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_bone2d_node() {
    if (!this._bindings.method_set_bone2d_node) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_bone2d_node");
      this._bindings.method_set_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_bone2d_node() {
    if (!this._bindings.method_get_bone2d_node) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_bone2d_node");
      this._bindings.method_get_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_bone_index() {
    if (!this._bindings.method_set_bone_index) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_bone_index");
      this._bindings.method_set_bone_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_bone_index() {
    if (!this._bindings.method_get_bone_index) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_bone_index");
      this._bindings.method_get_bone_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_target_node() {
    if (!this._bindings.method_set_target_node) {
      let classname = new StringName("SkeletonModification2DLookAt");
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
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_target_node");
      this._bindings.method_get_target_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_additional_rotation() {
    if (!this._bindings.method_set_additional_rotation) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_additional_rotation");
      this._bindings.method_set_additional_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_additional_rotation() {
    if (!this._bindings.method_get_additional_rotation) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_additional_rotation");
      this._bindings.method_get_additional_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_enable_constraint() {
    if (!this._bindings.method_set_enable_constraint) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_enable_constraint");
      this._bindings.method_set_enable_constraint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_enable_constraint() {
    if (!this._bindings.method_get_enable_constraint) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_enable_constraint");
      this._bindings.method_get_enable_constraint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_constraint_angle_min() {
    if (!this._bindings.method_set_constraint_angle_min) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_constraint_angle_min");
      this._bindings.method_set_constraint_angle_min = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_constraint_angle_min() {
    if (!this._bindings.method_get_constraint_angle_min) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_constraint_angle_min");
      this._bindings.method_get_constraint_angle_min = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_constraint_angle_max() {
    if (!this._bindings.method_set_constraint_angle_max) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_constraint_angle_max");
      this._bindings.method_set_constraint_angle_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_constraint_angle_max() {
    if (!this._bindings.method_get_constraint_angle_max) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("get_constraint_angle_max");
      this._bindings.method_get_constraint_angle_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_constraint_angle_invert() {
    if (!this._bindings.method_set_constraint_angle_invert) {
      let classname = new StringName("SkeletonModification2DLookAt");
      let methodname = new StringName("set_constraint_angle_invert");
      this._bindings.method_set_constraint_angle_invert = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_constraint_angle_invert() {
    if (!this._bindings.method_get_constraint_angle_invert) {
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
    SkeletonModification2DLookAt.init_method_set_bone2d_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DLookAt._bindings.method_set_bone2d_node,
      this._owner,
      _bone2d_nodepath
    );
    
  }
  get_bone2d_node() {
    SkeletonModification2DLookAt.init_method_get_bone2d_node();
    return _call_native_mb_ret(
      SkeletonModification2DLookAt._bindings.method_get_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_bone_index(_bone_idx) {
    SkeletonModification2DLookAt.init_method_set_bone_index();
    return _call_native_mb_no_ret(
      SkeletonModification2DLookAt._bindings.method_set_bone_index,
      this._owner,
      _bone_idx
    );
    
  }
  get_bone_index() {
    SkeletonModification2DLookAt.init_method_get_bone_index();
    return _call_native_mb_ret(
      SkeletonModification2DLookAt._bindings.method_get_bone_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_target_node(_target_nodepath) {
    SkeletonModification2DLookAt.init_method_set_target_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DLookAt._bindings.method_set_target_node,
      this._owner,
      _target_nodepath
    );
    
  }
  get_target_node() {
    SkeletonModification2DLookAt.init_method_get_target_node();
    return _call_native_mb_ret(
      SkeletonModification2DLookAt._bindings.method_get_target_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_additional_rotation(_rotation) {
    SkeletonModification2DLookAt.init_method_set_additional_rotation();
    return _call_native_mb_no_ret(
      SkeletonModification2DLookAt._bindings.method_set_additional_rotation,
      this._owner,
      _rotation
    );
    
  }
  get_additional_rotation() {
    SkeletonModification2DLookAt.init_method_get_additional_rotation();
    return _call_native_mb_ret(
      SkeletonModification2DLookAt._bindings.method_get_additional_rotation,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_enable_constraint(_enable_constraint) {
    SkeletonModification2DLookAt.init_method_set_enable_constraint();
    return _call_native_mb_no_ret(
      SkeletonModification2DLookAt._bindings.method_set_enable_constraint,
      this._owner,
      _enable_constraint
    );
    
  }
  get_enable_constraint() {
    SkeletonModification2DLookAt.init_method_get_enable_constraint();
    return _call_native_mb_ret(
      SkeletonModification2DLookAt._bindings.method_get_enable_constraint,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_constraint_angle_min(_angle_min) {
    SkeletonModification2DLookAt.init_method_set_constraint_angle_min();
    return _call_native_mb_no_ret(
      SkeletonModification2DLookAt._bindings.method_set_constraint_angle_min,
      this._owner,
      _angle_min
    );
    
  }
  get_constraint_angle_min() {
    SkeletonModification2DLookAt.init_method_get_constraint_angle_min();
    return _call_native_mb_ret(
      SkeletonModification2DLookAt._bindings.method_get_constraint_angle_min,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_constraint_angle_max(_angle_max) {
    SkeletonModification2DLookAt.init_method_set_constraint_angle_max();
    return _call_native_mb_no_ret(
      SkeletonModification2DLookAt._bindings.method_set_constraint_angle_max,
      this._owner,
      _angle_max
    );
    
  }
  get_constraint_angle_max() {
    SkeletonModification2DLookAt.init_method_get_constraint_angle_max();
    return _call_native_mb_ret(
      SkeletonModification2DLookAt._bindings.method_get_constraint_angle_max,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_constraint_angle_invert(_invert) {
    SkeletonModification2DLookAt.init_method_set_constraint_angle_invert();
    return _call_native_mb_no_ret(
      SkeletonModification2DLookAt._bindings.method_set_constraint_angle_invert,
      this._owner,
      _invert
    );
    
  }
  get_constraint_angle_invert() {
    SkeletonModification2DLookAt.init_method_get_constraint_angle_invert();
    return _call_native_mb_ret(
      SkeletonModification2DLookAt._bindings.method_get_constraint_angle_invert,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get bone_index () {
  return this.get_bone_index();
}
set bone_index (new_value) {
  this.set_bone_index(new_value);
}
get bone2d_node () {
  return this.get_bone2d_node();
}
set bone2d_node (new_value) {
  this.set_bone2d_node(new_value);
}
get target_nodepath () {
  return this.get_target_node();
}
set target_nodepath (new_value) {
  this.set_target_node(new_value);
}

}