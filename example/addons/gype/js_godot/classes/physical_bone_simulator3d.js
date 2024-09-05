import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { RID } from '@js_godot/variant/rid'
import { SkeletonModifier3D } from '@js_godot/classes/skeleton_modifier3d'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_is_simulating_physics;
  method_physical_bones_stop_simulation;
  method_physical_bones_start_simulation;
  method_physical_bones_add_collision_exception;
  method_physical_bones_remove_collision_exception;
}
export class PhysicalBoneSimulator3D extends SkeletonModifier3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicalBoneSimulator3D");
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
      PhysicalBoneSimulator3D._bindings.method_is_simulating_physics,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  physical_bones_stop_simulation() {
    return _call_native_mb_no_ret(
      PhysicalBoneSimulator3D._bindings.method_physical_bones_stop_simulation,
      this._owner,
      
    );
    
  }
  physical_bones_start_simulation(_bones) {
    return _call_native_mb_no_ret(
      PhysicalBoneSimulator3D._bindings.method_physical_bones_start_simulation,
      this._owner,
      _bones
    );
    
  }
  physical_bones_add_collision_exception(_exception) {
    return _call_native_mb_no_ret(
      PhysicalBoneSimulator3D._bindings.method_physical_bones_add_collision_exception,
      this._owner,
      _exception
    );
    
  }
  physical_bones_remove_collision_exception(_exception) {
    return _call_native_mb_no_ret(
      PhysicalBoneSimulator3D._bindings.method_physical_bones_remove_collision_exception,
      this._owner,
      _exception
    );
    
  }
  


  static {
    this._init_bindings();
  }
}