import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { SkeletonModification2D } from 'src/js_godot/classes/skeleton_modification2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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


export class SkeletonModification2DFABRIK extends SkeletonModification2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DFABRIK");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("set_target_node");
        this._bindings.method_set_target_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("get_target_node");
        this._bindings.method_get_target_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("set_fabrik_data_chain_length");
        this._bindings.method_set_fabrik_data_chain_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("get_fabrik_data_chain_length");
        this._bindings.method_get_fabrik_data_chain_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("set_fabrik_joint_bone2d_node");
        this._bindings.method_set_fabrik_joint_bone2d_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2761262315
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("get_fabrik_joint_bone2d_node");
        this._bindings.method_get_fabrik_joint_bone2d_node = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          408788394
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("set_fabrik_joint_bone_index");
        this._bindings.method_set_fabrik_joint_bone_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("get_fabrik_joint_bone_index");
        this._bindings.method_get_fabrik_joint_bone_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("set_fabrik_joint_magnet_position");
        this._bindings.method_set_fabrik_joint_magnet_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          163021252
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("get_fabrik_joint_magnet_position");
        this._bindings.method_get_fabrik_joint_magnet_position = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2299179447
        );
      }
      {
        let classname = new StringName("SkeletonModification2DFABRIK");
        let methodname = new StringName("set_fabrik_joint_use_target_rotation");
        this._bindings.method_set_fabrik_joint_use_target_rotation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
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
  set_fabrik_data_chain_length(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fabrik_data_chain_length,
      this._owner,
      _length
    );
    
  }
  get_fabrik_data_chain_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fabrik_data_chain_length,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_fabrik_joint_bone2d_node(_joint_idx, _bone2d_nodepath) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fabrik_joint_bone2d_node,
      this._owner,
      _joint_idx, _bone2d_nodepath
    );
    
  }
  get_fabrik_joint_bone2d_node(_joint_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fabrik_joint_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      _joint_idx
    );
    
  }
  set_fabrik_joint_bone_index(_joint_idx, _bone_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fabrik_joint_bone_index,
      this._owner,
      _joint_idx, _bone_idx
    );
    
  }
  get_fabrik_joint_bone_index(_joint_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fabrik_joint_bone_index,
      this._owner,
			Variant.Type.INT,
      _joint_idx
    );
    
  }
  set_fabrik_joint_magnet_position(_joint_idx, _magnet_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fabrik_joint_magnet_position,
      this._owner,
      _joint_idx, _magnet_position
    );
    
  }
  get_fabrik_joint_magnet_position(_joint_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fabrik_joint_magnet_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _joint_idx
    );
    
  }
  set_fabrik_joint_use_target_rotation(_joint_idx, _use_target_rotation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fabrik_joint_use_target_rotation,
      this._owner,
      _joint_idx, _use_target_rotation
    );
    
  }
  get_fabrik_joint_use_target_rotation(_joint_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fabrik_joint_use_target_rotation,
      this._owner,
			Variant.Type.BOOL,
      _joint_idx
    );
    
  }
}