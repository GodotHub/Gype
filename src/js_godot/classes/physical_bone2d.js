import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { RigidBody2D } from 'src/js_godot/classes/rigid_body2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_joint;
    method_get_auto_configure_joint;
    method_set_auto_configure_joint;
    method_set_simulate_physics;
    method_get_simulate_physics;
    method_is_simulating_physics;
    method_set_bone2d_nodepath;
    method_get_bone2d_nodepath;
    method_set_bone2d_index;
    method_get_bone2d_index;
    method_set_follow_bone_when_simulating;
    method_get_follow_bone_when_simulating;
}


export class PhysicalBone2D extends RigidBody2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicalBone2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("get_joint");
        this._bindings.method_get_joint = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3582132112
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("get_auto_configure_joint");
        this._bindings.method_get_auto_configure_joint = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("set_auto_configure_joint");
        this._bindings.method_set_auto_configure_joint = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("set_simulate_physics");
        this._bindings.method_set_simulate_physics = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("get_simulate_physics");
        this._bindings.method_get_simulate_physics = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("is_simulating_physics");
        this._bindings.method_is_simulating_physics = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("set_bone2d_nodepath");
        this._bindings.method_set_bone2d_nodepath = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("get_bone2d_nodepath");
        this._bindings.method_get_bone2d_nodepath = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("set_bone2d_index");
        this._bindings.method_set_bone2d_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("get_bone2d_index");
        this._bindings.method_get_bone2d_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("set_follow_bone_when_simulating");
        this._bindings.method_set_follow_bone_when_simulating = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PhysicalBone2D");
        let methodname = new StringName("get_follow_bone_when_simulating");
        this._bindings.method_get_follow_bone_when_simulating = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  get_joint() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_joint,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_auto_configure_joint() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_auto_configure_joint,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_auto_configure_joint(_auto_configure_joint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_auto_configure_joint,
      this._owner,
      _auto_configure_joint
    );
    
  }
  set_simulate_physics(_simulate_physics) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_simulate_physics,
      this._owner,
      _simulate_physics
    );
    
  }
  get_simulate_physics() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_simulate_physics,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_simulating_physics() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_simulating_physics,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_bone2d_nodepath(_nodepath) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone2d_nodepath,
      this._owner,
      _nodepath
    );
    
  }
  get_bone2d_nodepath() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone2d_nodepath,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
  set_bone2d_index(_bone_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone2d_index,
      this._owner,
      _bone_index
    );
    
  }
  get_bone2d_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone2d_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_follow_bone_when_simulating(_follow_bone) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_follow_bone_when_simulating,
      this._owner,
      _follow_bone
    );
    
  }
  get_follow_bone_when_simulating() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_follow_bone_when_simulating,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}