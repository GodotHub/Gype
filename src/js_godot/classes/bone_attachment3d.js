import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Node3D } from 'src/js_godot/classes/node3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_bone_name;
    method_get_bone_name;
    method_set_bone_idx;
    method_get_bone_idx;
    method_on_skeleton_update;
    method_set_override_pose;
    method_get_override_pose;
    method_set_use_external_skeleton;
    method_get_use_external_skeleton;
    method_set_external_skeleton;
    method_get_external_skeleton;
}


export class BoneAttachment3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("BoneAttachment3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("set_bone_name");
        this._bindings.method_set_bone_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("get_bone_name");
        this._bindings.method_get_bone_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("set_bone_idx");
        this._bindings.method_set_bone_idx = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("get_bone_idx");
        this._bindings.method_get_bone_idx = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("on_skeleton_update");
        this._bindings.method_on_skeleton_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("set_override_pose");
        this._bindings.method_set_override_pose = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("get_override_pose");
        this._bindings.method_get_override_pose = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("set_use_external_skeleton");
        this._bindings.method_set_use_external_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("get_use_external_skeleton");
        this._bindings.method_get_use_external_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("set_external_skeleton");
        this._bindings.method_set_external_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("BoneAttachment3D");
        let methodname = new StringName("get_external_skeleton");
        this._bindings.method_get_external_skeleton = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
  }
  set_bone_name(_bone_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_name,
      this._owner,
      _bone_name
    );
    
  }
  get_bone_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_name,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_bone_idx(_bone_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_idx,
      this._owner,
      _bone_idx
    );
    
  }
  get_bone_idx() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_idx,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  on_skeleton_update() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_on_skeleton_update,
      this._owner,
      
    );
    
  }
  set_override_pose(_override_pose) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_override_pose,
      this._owner,
      _override_pose
    );
    
  }
  get_override_pose() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_override_pose,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_use_external_skeleton(_use_external_skeleton) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_external_skeleton,
      this._owner,
      _use_external_skeleton
    );
    
  }
  get_use_external_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_use_external_skeleton,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_external_skeleton(_external_skeleton) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_external_skeleton,
      this._owner,
      _external_skeleton
    );
    
  }
  get_external_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_external_skeleton,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
}