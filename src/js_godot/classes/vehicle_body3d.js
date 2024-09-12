import * as internal from '__internal__';
import { RigidBody3D } from '@js_godot/classes/rigid_body3d'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_engine_force;
  method_get_engine_force;
  method_set_brake;
  method_get_brake;
  method_set_steering;
  method_get_steering;
}
export class VehicleBody3D extends RigidBody3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VehicleBody3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_engine_force() {
    if (!this.#_bindings.method_set_engine_force) {
      let classname = new StringName("VehicleBody3D");
      let methodname = new StringName("set_engine_force");
      this.#_bindings.method_set_engine_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_engine_force() {
    if (!this.#_bindings.method_get_engine_force) {
      let classname = new StringName("VehicleBody3D");
      let methodname = new StringName("get_engine_force");
      this.#_bindings.method_get_engine_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_brake() {
    if (!this.#_bindings.method_set_brake) {
      let classname = new StringName("VehicleBody3D");
      let methodname = new StringName("set_brake");
      this.#_bindings.method_set_brake = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_brake() {
    if (!this.#_bindings.method_get_brake) {
      let classname = new StringName("VehicleBody3D");
      let methodname = new StringName("get_brake");
      this.#_bindings.method_get_brake = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_steering() {
    if (!this.#_bindings.method_set_steering) {
      let classname = new StringName("VehicleBody3D");
      let methodname = new StringName("set_steering");
      this.#_bindings.method_set_steering = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_steering() {
    if (!this.#_bindings.method_get_steering) {
      let classname = new StringName("VehicleBody3D");
      let methodname = new StringName("get_steering");
      this.#_bindings.method_get_steering = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_engine_force(_engine_force) {
    VehicleBody3D.init_method_set_engine_force();
    return _call_native_mb_no_ret(
      VehicleBody3D.#_bindings.method_set_engine_force,
      this._owner,
      _engine_force
    );
    
  }
  get_engine_force() {
    VehicleBody3D.init_method_get_engine_force();
    return _call_native_mb_ret(
      VehicleBody3D.#_bindings.method_get_engine_force,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_brake(_brake) {
    VehicleBody3D.init_method_set_brake();
    return _call_native_mb_no_ret(
      VehicleBody3D.#_bindings.method_set_brake,
      this._owner,
      _brake
    );
    
  }
  get_brake() {
    VehicleBody3D.init_method_get_brake();
    return _call_native_mb_ret(
      VehicleBody3D.#_bindings.method_get_brake,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_steering(_steering) {
    VehicleBody3D.init_method_set_steering();
    return _call_native_mb_no_ret(
      VehicleBody3D.#_bindings.method_set_steering,
      this._owner,
      _steering
    );
    
  }
  get_steering() {
    VehicleBody3D.init_method_get_steering();
    return _call_native_mb_ret(
      VehicleBody3D.#_bindings.method_get_steering,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get engine_force () {
  return this.get_engine_force();
}
set engine_force (new_value) {
  this.set_engine_force(new_value);
}
get brake () {
  return this.get_brake();
}
set brake (new_value) {
  this.set_brake(new_value);
}
get steering () {
  return this.get_steering();
}
set steering (new_value) {
  this.set_steering(new_value);
}

}