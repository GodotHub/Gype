import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { SkeletonModifier3D } from '@js_godot/classes/skeleton_modifier3d'
import { GDArray } from '@js_godot/variant/gd_array'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicalBoneSimulator3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_is_simulating_physics() {
    if (!this.#_bindings.method_is_simulating_physics) {
      let classname = new StringName("PhysicalBoneSimulator3D");
      let methodname = new StringName("is_simulating_physics");
      this.#_bindings.method_is_simulating_physics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_physical_bones_stop_simulation() {
    if (!this.#_bindings.method_physical_bones_stop_simulation) {
      let classname = new StringName("PhysicalBoneSimulator3D");
      let methodname = new StringName("physical_bones_stop_simulation");
      this.#_bindings.method_physical_bones_stop_simulation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_physical_bones_start_simulation() {
    if (!this.#_bindings.method_physical_bones_start_simulation) {
      let classname = new StringName("PhysicalBoneSimulator3D");
      let methodname = new StringName("physical_bones_start_simulation");
      this.#_bindings.method_physical_bones_start_simulation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2787316981
      );
    }
  }
  static init_method_physical_bones_add_collision_exception() {
    if (!this.#_bindings.method_physical_bones_add_collision_exception) {
      let classname = new StringName("PhysicalBoneSimulator3D");
      let methodname = new StringName("physical_bones_add_collision_exception");
      this.#_bindings.method_physical_bones_add_collision_exception = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_physical_bones_remove_collision_exception() {
    if (!this.#_bindings.method_physical_bones_remove_collision_exception) {
      let classname = new StringName("PhysicalBoneSimulator3D");
      let methodname = new StringName("physical_bones_remove_collision_exception");
      this.#_bindings.method_physical_bones_remove_collision_exception = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }

  
  
  is_simulating_physics() {
    PhysicalBoneSimulator3D.init_method_is_simulating_physics();
    return _call_native_mb_ret(
      PhysicalBoneSimulator3D.#_bindings.method_is_simulating_physics,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  physical_bones_stop_simulation() {
    PhysicalBoneSimulator3D.init_method_physical_bones_stop_simulation();
    return _call_native_mb_no_ret(
      PhysicalBoneSimulator3D.#_bindings.method_physical_bones_stop_simulation,
      this._owner,
      
    );
    
  }
  physical_bones_start_simulation(_bones) {
    PhysicalBoneSimulator3D.init_method_physical_bones_start_simulation();
    return _call_native_mb_no_ret(
      PhysicalBoneSimulator3D.#_bindings.method_physical_bones_start_simulation,
      this._owner,
      _bones
    );
    
  }
  physical_bones_add_collision_exception(_exception) {
    PhysicalBoneSimulator3D.init_method_physical_bones_add_collision_exception();
    return _call_native_mb_no_ret(
      PhysicalBoneSimulator3D.#_bindings.method_physical_bones_add_collision_exception,
      this._owner,
      _exception
    );
    
  }
  physical_bones_remove_collision_exception(_exception) {
    PhysicalBoneSimulator3D.init_method_physical_bones_remove_collision_exception();
    return _call_native_mb_no_ret(
      PhysicalBoneSimulator3D.#_bindings.method_physical_bones_remove_collision_exception,
      this._owner,
      _exception
    );
    
  }
  

}