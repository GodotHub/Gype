import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node3D } from '@js_godot/classes/node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_radius;
  method_get_radius;
  method_set_suspension_rest_length;
  method_get_suspension_rest_length;
  method_set_suspension_travel;
  method_get_suspension_travel;
  method_set_suspension_stiffness;
  method_get_suspension_stiffness;
  method_set_suspension_max_force;
  method_get_suspension_max_force;
  method_set_damping_compression;
  method_get_damping_compression;
  method_set_damping_relaxation;
  method_get_damping_relaxation;
  method_set_use_as_traction;
  method_is_used_as_traction;
  method_set_use_as_steering;
  method_is_used_as_steering;
  method_set_friction_slip;
  method_get_friction_slip;
  method_is_in_contact;
  method_get_contact_body;
  method_set_roll_influence;
  method_get_roll_influence;
  method_get_skidinfo;
  method_get_rpm;
  method_set_engine_force;
  method_get_engine_force;
  method_set_brake;
  method_get_brake;
  method_set_steering;
  method_get_steering;
}
export class VehicleWheel3D extends Node3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("VehicleWheel3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_radius() {
    if (!this.#_bindings.method_set_radius) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_radius");
      this.#_bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_radius() {
    if (!this.#_bindings.method_get_radius) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_radius");
      this.#_bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_suspension_rest_length() {
    if (!this.#_bindings.method_set_suspension_rest_length) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_suspension_rest_length");
      this.#_bindings.method_set_suspension_rest_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_suspension_rest_length() {
    if (!this.#_bindings.method_get_suspension_rest_length) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_suspension_rest_length");
      this.#_bindings.method_get_suspension_rest_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_suspension_travel() {
    if (!this.#_bindings.method_set_suspension_travel) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_suspension_travel");
      this.#_bindings.method_set_suspension_travel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_suspension_travel() {
    if (!this.#_bindings.method_get_suspension_travel) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_suspension_travel");
      this.#_bindings.method_get_suspension_travel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_suspension_stiffness() {
    if (!this.#_bindings.method_set_suspension_stiffness) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_suspension_stiffness");
      this.#_bindings.method_set_suspension_stiffness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_suspension_stiffness() {
    if (!this.#_bindings.method_get_suspension_stiffness) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_suspension_stiffness");
      this.#_bindings.method_get_suspension_stiffness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_suspension_max_force() {
    if (!this.#_bindings.method_set_suspension_max_force) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_suspension_max_force");
      this.#_bindings.method_set_suspension_max_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_suspension_max_force() {
    if (!this.#_bindings.method_get_suspension_max_force) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_suspension_max_force");
      this.#_bindings.method_get_suspension_max_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_damping_compression() {
    if (!this.#_bindings.method_set_damping_compression) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_damping_compression");
      this.#_bindings.method_set_damping_compression = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_damping_compression() {
    if (!this.#_bindings.method_get_damping_compression) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_damping_compression");
      this.#_bindings.method_get_damping_compression = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_damping_relaxation() {
    if (!this.#_bindings.method_set_damping_relaxation) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_damping_relaxation");
      this.#_bindings.method_set_damping_relaxation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_damping_relaxation() {
    if (!this.#_bindings.method_get_damping_relaxation) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_damping_relaxation");
      this.#_bindings.method_get_damping_relaxation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_use_as_traction() {
    if (!this.#_bindings.method_set_use_as_traction) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_use_as_traction");
      this.#_bindings.method_set_use_as_traction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_used_as_traction() {
    if (!this.#_bindings.method_is_used_as_traction) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("is_used_as_traction");
      this.#_bindings.method_is_used_as_traction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_use_as_steering() {
    if (!this.#_bindings.method_set_use_as_steering) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_use_as_steering");
      this.#_bindings.method_set_use_as_steering = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_used_as_steering() {
    if (!this.#_bindings.method_is_used_as_steering) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("is_used_as_steering");
      this.#_bindings.method_is_used_as_steering = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_friction_slip() {
    if (!this.#_bindings.method_set_friction_slip) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_friction_slip");
      this.#_bindings.method_set_friction_slip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_friction_slip() {
    if (!this.#_bindings.method_get_friction_slip) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_friction_slip");
      this.#_bindings.method_get_friction_slip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_is_in_contact() {
    if (!this.#_bindings.method_is_in_contact) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("is_in_contact");
      this.#_bindings.method_is_in_contact = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_contact_body() {
    if (!this.#_bindings.method_get_contact_body) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_contact_body");
      this.#_bindings.method_get_contact_body = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        151077316
      );
    }
  }
  static init_method_set_roll_influence() {
    if (!this.#_bindings.method_set_roll_influence) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("set_roll_influence");
      this.#_bindings.method_set_roll_influence = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_roll_influence() {
    if (!this.#_bindings.method_get_roll_influence) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_roll_influence");
      this.#_bindings.method_get_roll_influence = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_skidinfo() {
    if (!this.#_bindings.method_get_skidinfo) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_skidinfo");
      this.#_bindings.method_get_skidinfo = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_rpm() {
    if (!this.#_bindings.method_get_rpm) {
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_rpm");
      this.#_bindings.method_get_rpm = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_engine_force() {
    if (!this.#_bindings.method_set_engine_force) {
      let classname = new StringName("VehicleWheel3D");
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
      let classname = new StringName("VehicleWheel3D");
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
      let classname = new StringName("VehicleWheel3D");
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
      let classname = new StringName("VehicleWheel3D");
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
      let classname = new StringName("VehicleWheel3D");
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
      let classname = new StringName("VehicleWheel3D");
      let methodname = new StringName("get_steering");
      this.#_bindings.method_get_steering = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_radius(_length) {
    VehicleWheel3D.init_method_set_radius();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_radius,
      this._owner,
      _length
    );
    
  }
  get_radius() {
    VehicleWheel3D.init_method_get_radius();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_suspension_rest_length(_length) {
    VehicleWheel3D.init_method_set_suspension_rest_length();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_suspension_rest_length,
      this._owner,
      _length
    );
    
  }
  get_suspension_rest_length() {
    VehicleWheel3D.init_method_get_suspension_rest_length();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_suspension_rest_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_suspension_travel(_length) {
    VehicleWheel3D.init_method_set_suspension_travel();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_suspension_travel,
      this._owner,
      _length
    );
    
  }
  get_suspension_travel() {
    VehicleWheel3D.init_method_get_suspension_travel();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_suspension_travel,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_suspension_stiffness(_length) {
    VehicleWheel3D.init_method_set_suspension_stiffness();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_suspension_stiffness,
      this._owner,
      _length
    );
    
  }
  get_suspension_stiffness() {
    VehicleWheel3D.init_method_get_suspension_stiffness();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_suspension_stiffness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_suspension_max_force(_length) {
    VehicleWheel3D.init_method_set_suspension_max_force();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_suspension_max_force,
      this._owner,
      _length
    );
    
  }
  get_suspension_max_force() {
    VehicleWheel3D.init_method_get_suspension_max_force();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_suspension_max_force,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_damping_compression(_length) {
    VehicleWheel3D.init_method_set_damping_compression();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_damping_compression,
      this._owner,
      _length
    );
    
  }
  get_damping_compression() {
    VehicleWheel3D.init_method_get_damping_compression();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_damping_compression,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_damping_relaxation(_length) {
    VehicleWheel3D.init_method_set_damping_relaxation();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_damping_relaxation,
      this._owner,
      _length
    );
    
  }
  get_damping_relaxation() {
    VehicleWheel3D.init_method_get_damping_relaxation();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_damping_relaxation,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_use_as_traction(_enable) {
    VehicleWheel3D.init_method_set_use_as_traction();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_use_as_traction,
      this._owner,
      _enable
    );
    
  }
  is_used_as_traction() {
    VehicleWheel3D.init_method_is_used_as_traction();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_is_used_as_traction,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_as_steering(_enable) {
    VehicleWheel3D.init_method_set_use_as_steering();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_use_as_steering,
      this._owner,
      _enable
    );
    
  }
  is_used_as_steering() {
    VehicleWheel3D.init_method_is_used_as_steering();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_is_used_as_steering,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_friction_slip(_length) {
    VehicleWheel3D.init_method_set_friction_slip();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_friction_slip,
      this._owner,
      _length
    );
    
  }
  get_friction_slip() {
    VehicleWheel3D.init_method_get_friction_slip();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_friction_slip,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  is_in_contact() {
    VehicleWheel3D.init_method_is_in_contact();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_is_in_contact,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_contact_body() {
    VehicleWheel3D.init_method_get_contact_body();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_contact_body,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_roll_influence(_roll_influence) {
    VehicleWheel3D.init_method_set_roll_influence();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_roll_influence,
      this._owner,
      _roll_influence
    );
    
  }
  get_roll_influence() {
    VehicleWheel3D.init_method_get_roll_influence();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_roll_influence,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_skidinfo() {
    VehicleWheel3D.init_method_get_skidinfo();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_skidinfo,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_rpm() {
    VehicleWheel3D.init_method_get_rpm();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_rpm,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_engine_force(_engine_force) {
    VehicleWheel3D.init_method_set_engine_force();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_engine_force,
      this._owner,
      _engine_force
    );
    
  }
  get_engine_force() {
    VehicleWheel3D.init_method_get_engine_force();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_engine_force,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_brake(_brake) {
    VehicleWheel3D.init_method_set_brake();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_brake,
      this._owner,
      _brake
    );
    
  }
  get_brake() {
    VehicleWheel3D.init_method_get_brake();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_brake,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_steering(_steering) {
    VehicleWheel3D.init_method_set_steering();
    return _call_native_mb_no_ret(
      VehicleWheel3D.#_bindings.method_set_steering,
      this._owner,
      _steering
    );
    
  }
  get_steering() {
    VehicleWheel3D.init_method_get_steering();
    return _call_native_mb_ret(
      VehicleWheel3D.#_bindings.method_get_steering,
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
get use_as_traction () {
  return this.is_used_as_traction();
}
set use_as_traction (new_value) {
  this.set_use_as_traction(new_value);
}
get use_as_steering () {
  return this.is_used_as_steering();
}
set use_as_steering (new_value) {
  this.set_use_as_steering(new_value);
}
get wheel_roll_influence () {
  return this.get_roll_influence();
}
set wheel_roll_influence (new_value) {
  this.set_roll_influence(new_value);
}
get wheel_radius () {
  return this.get_radius();
}
set wheel_radius (new_value) {
  this.set_radius(new_value);
}
get wheel_rest_length () {
  return this.get_suspension_rest_length();
}
set wheel_rest_length (new_value) {
  this.set_suspension_rest_length(new_value);
}
get wheel_friction_slip () {
  return this.get_friction_slip();
}
set wheel_friction_slip (new_value) {
  this.set_friction_slip(new_value);
}
get suspension_travel () {
  return this.get_suspension_travel();
}
set suspension_travel (new_value) {
  this.set_suspension_travel(new_value);
}
get suspension_stiffness () {
  return this.get_suspension_stiffness();
}
set suspension_stiffness (new_value) {
  this.set_suspension_stiffness(new_value);
}
get suspension_max_force () {
  return this.get_suspension_max_force();
}
set suspension_max_force (new_value) {
  this.set_suspension_max_force(new_value);
}
get damping_compression () {
  return this.get_damping_compression();
}
set damping_compression (new_value) {
  this.set_damping_compression(new_value);
}
get damping_relaxation () {
  return this.get_damping_relaxation();
}
set damping_relaxation (new_value) {
  this.set_damping_relaxation(new_value);
}

}