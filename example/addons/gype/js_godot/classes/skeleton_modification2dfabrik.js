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
  method_set_fabrik_data_chain_length;
  method_get_fabrik_data_chain_length;
  method_set_fabrik_joint_bone2d_node;
  method_get_fabrik_joint_bone2d_node;
  method_set_fabrik_joint_bone_index;
  method_get_fabrik_joint_bone_index;
  method_set_fabrik_joint_magnet_position;
  method_get_fabrik_joint_magnet_position;
  method_set_fabrik_joint_use_target_rotation;
  method_get_fabrik_joint_use_target_rotation;
}
@GodotClass
export class SkeletonModification2DFABRIK extends SkeletonModification2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DFABRIK");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_target_node() {
    if (!this._bindings.method_set_target_node) {
      let classname = new StringName("SkeletonModification2DFABRIK");
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
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("get_target_node");
      this._bindings.method_get_target_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_fabrik_data_chain_length() {
    if (!this._bindings.method_set_fabrik_data_chain_length) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("set_fabrik_data_chain_length");
      this._bindings.method_set_fabrik_data_chain_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_fabrik_data_chain_length() {
    if (!this._bindings.method_get_fabrik_data_chain_length) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("get_fabrik_data_chain_length");
      this._bindings.method_get_fabrik_data_chain_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_fabrik_joint_bone2d_node() {
    if (!this._bindings.method_set_fabrik_joint_bone2d_node) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("set_fabrik_joint_bone2d_node");
      this._bindings.method_set_fabrik_joint_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761262315
      );
    }
  }
  static init_method_get_fabrik_joint_bone2d_node() {
    if (!this._bindings.method_get_fabrik_joint_bone2d_node) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("get_fabrik_joint_bone2d_node");
      this._bindings.method_get_fabrik_joint_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        408788394
      );
    }
  }
  static init_method_set_fabrik_joint_bone_index() {
    if (!this._bindings.method_set_fabrik_joint_bone_index) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("set_fabrik_joint_bone_index");
      this._bindings.method_set_fabrik_joint_bone_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_fabrik_joint_bone_index() {
    if (!this._bindings.method_get_fabrik_joint_bone_index) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("get_fabrik_joint_bone_index");
      this._bindings.method_get_fabrik_joint_bone_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_fabrik_joint_magnet_position() {
    if (!this._bindings.method_set_fabrik_joint_magnet_position) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("set_fabrik_joint_magnet_position");
      this._bindings.method_set_fabrik_joint_magnet_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_fabrik_joint_magnet_position() {
    if (!this._bindings.method_get_fabrik_joint_magnet_position) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("get_fabrik_joint_magnet_position");
      this._bindings.method_get_fabrik_joint_magnet_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_set_fabrik_joint_use_target_rotation() {
    if (!this._bindings.method_set_fabrik_joint_use_target_rotation) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("set_fabrik_joint_use_target_rotation");
      this._bindings.method_set_fabrik_joint_use_target_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_fabrik_joint_use_target_rotation() {
    if (!this._bindings.method_get_fabrik_joint_use_target_rotation) {
      let classname = new StringName("SkeletonModification2DFABRIK");
      let methodname = new StringName("get_fabrik_joint_use_target_rotation");
      this._bindings.method_get_fabrik_joint_use_target_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }

  
  
  set_target_node(_target_nodepath) {
    SkeletonModification2DFABRIK.init_method_set_target_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DFABRIK._bindings.method_set_target_node,
      this._owner,
      _target_nodepath
    );
    
  }
  get_target_node() {
    SkeletonModification2DFABRIK.init_method_get_target_node();
    return _call_native_mb_ret(
      SkeletonModification2DFABRIK._bindings.method_get_target_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_fabrik_data_chain_length(_length) {
    SkeletonModification2DFABRIK.init_method_set_fabrik_data_chain_length();
    return _call_native_mb_no_ret(
      SkeletonModification2DFABRIK._bindings.method_set_fabrik_data_chain_length,
      this._owner,
      _length
    );
    
  }
  get_fabrik_data_chain_length() {
    SkeletonModification2DFABRIK.init_method_get_fabrik_data_chain_length();
    return _call_native_mb_ret(
      SkeletonModification2DFABRIK._bindings.method_get_fabrik_data_chain_length,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_fabrik_joint_bone2d_node(_joint_idx, _bone2d_nodepath) {
    SkeletonModification2DFABRIK.init_method_set_fabrik_joint_bone2d_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DFABRIK._bindings.method_set_fabrik_joint_bone2d_node,
      this._owner,
      _joint_idx, _bone2d_nodepath
    );
    
  }
  get_fabrik_joint_bone2d_node(_joint_idx) {
    SkeletonModification2DFABRIK.init_method_get_fabrik_joint_bone2d_node();
    return _call_native_mb_ret(
      SkeletonModification2DFABRIK._bindings.method_get_fabrik_joint_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      _joint_idx
    );
    
  }
  set_fabrik_joint_bone_index(_joint_idx, _bone_idx) {
    SkeletonModification2DFABRIK.init_method_set_fabrik_joint_bone_index();
    return _call_native_mb_no_ret(
      SkeletonModification2DFABRIK._bindings.method_set_fabrik_joint_bone_index,
      this._owner,
      _joint_idx, _bone_idx
    );
    
  }
  get_fabrik_joint_bone_index(_joint_idx) {
    SkeletonModification2DFABRIK.init_method_get_fabrik_joint_bone_index();
    return _call_native_mb_ret(
      SkeletonModification2DFABRIK._bindings.method_get_fabrik_joint_bone_index,
      this._owner,
			Variant.Type.INT,
    
      _joint_idx
    );
    
  }
  set_fabrik_joint_magnet_position(_joint_idx, _magnet_position) {
    SkeletonModification2DFABRIK.init_method_set_fabrik_joint_magnet_position();
    return _call_native_mb_no_ret(
      SkeletonModification2DFABRIK._bindings.method_set_fabrik_joint_magnet_position,
      this._owner,
      _joint_idx, _magnet_position
    );
    
  }
  get_fabrik_joint_magnet_position(_joint_idx) {
    SkeletonModification2DFABRIK.init_method_get_fabrik_joint_magnet_position();
    return _call_native_mb_ret(
      SkeletonModification2DFABRIK._bindings.method_get_fabrik_joint_magnet_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _joint_idx
    );
    
  }
  set_fabrik_joint_use_target_rotation(_joint_idx, _use_target_rotation) {
    SkeletonModification2DFABRIK.init_method_set_fabrik_joint_use_target_rotation();
    return _call_native_mb_no_ret(
      SkeletonModification2DFABRIK._bindings.method_set_fabrik_joint_use_target_rotation,
      this._owner,
      _joint_idx, _use_target_rotation
    );
    
  }
  get_fabrik_joint_use_target_rotation(_joint_idx) {
    SkeletonModification2DFABRIK.init_method_get_fabrik_joint_use_target_rotation();
    return _call_native_mb_ret(
      SkeletonModification2DFABRIK._bindings.method_get_fabrik_joint_use_target_rotation,
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
get fabrik_data_chain_length () {
  return this.get_fabrik_data_chain_length();
}
set fabrik_data_chain_length (new_value) {
  this.set_fabrik_data_chain_length(new_value);
}

}