import * as internal from '__internal__';
import { SkeletonModifier3D } from 'src/js_godot/classes/skeleton_modifier3d'
import { RID } from 'src/js_godot/variant/rid'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_is_simulating_physics;
    method_physical_bones_stop_simulation;
    method_physical_bones_start_simulation;
    method_physical_bones_add_collision_exception;
    method_physical_bones_remove_collision_exception;
}


export class PhysicalBoneSimulator3D extends SkeletonModifier3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicalBoneSimulator3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicalBoneSimulator3D");
        let methodname = new StringName("is_simulating_physics");
        this._bindings.method_is_simulating_physics = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PhysicalBoneSimulator3D");
        let methodname = new StringName("physical_bones_stop_simulation");
        this._bindings.method_physical_bones_stop_simulation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("PhysicalBoneSimulator3D");
        let methodname = new StringName("physical_bones_start_simulation");
        this._bindings.method_physical_bones_start_simulation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2787316981
        );
      }
      {
        let classname = new StringName("PhysicalBoneSimulator3D");
        let methodname = new StringName("physical_bones_add_collision_exception");
        this._bindings.method_physical_bones_add_collision_exception = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("PhysicalBoneSimulator3D");
        let methodname = new StringName("physical_bones_remove_collision_exception");
        this._bindings.method_physical_bones_remove_collision_exception = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
  }
  is_simulating_physics() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_simulating_physics,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  physical_bones_stop_simulation() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_physical_bones_stop_simulation,
      this._owner,
      
    );
    
  }
  physical_bones_start_simulation(_bones) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_physical_bones_start_simulation,
      this._owner,
      _bones
    );
    
  }
  physical_bones_add_collision_exception(_exception) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_physical_bones_add_collision_exception,
      this._owner,
      _exception
    );
    
  }
  physical_bones_remove_collision_exception(_exception) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_physical_bones_remove_collision_exception,
      this._owner,
      _exception
    );
    
  }
}