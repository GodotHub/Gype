import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classes/node3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VehicleWheel3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_radius");
        this._bindings.method_set_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_radius");
        this._bindings.method_get_radius = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_suspension_rest_length");
        this._bindings.method_set_suspension_rest_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_suspension_rest_length");
        this._bindings.method_get_suspension_rest_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_suspension_travel");
        this._bindings.method_set_suspension_travel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_suspension_travel");
        this._bindings.method_get_suspension_travel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_suspension_stiffness");
        this._bindings.method_set_suspension_stiffness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_suspension_stiffness");
        this._bindings.method_get_suspension_stiffness = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_suspension_max_force");
        this._bindings.method_set_suspension_max_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_suspension_max_force");
        this._bindings.method_get_suspension_max_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_damping_compression");
        this._bindings.method_set_damping_compression = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_damping_compression");
        this._bindings.method_get_damping_compression = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_damping_relaxation");
        this._bindings.method_set_damping_relaxation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_damping_relaxation");
        this._bindings.method_get_damping_relaxation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_use_as_traction");
        this._bindings.method_set_use_as_traction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("is_used_as_traction");
        this._bindings.method_is_used_as_traction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_use_as_steering");
        this._bindings.method_set_use_as_steering = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("is_used_as_steering");
        this._bindings.method_is_used_as_steering = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_friction_slip");
        this._bindings.method_set_friction_slip = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_friction_slip");
        this._bindings.method_get_friction_slip = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("is_in_contact");
        this._bindings.method_is_in_contact = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_contact_body");
        this._bindings.method_get_contact_body = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          151077316
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_roll_influence");
        this._bindings.method_set_roll_influence = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_roll_influence");
        this._bindings.method_get_roll_influence = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_skidinfo");
        this._bindings.method_get_skidinfo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_rpm");
        this._bindings.method_get_rpm = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_engine_force");
        this._bindings.method_set_engine_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_engine_force");
        this._bindings.method_get_engine_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_brake");
        this._bindings.method_set_brake = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_brake");
        this._bindings.method_get_brake = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("set_steering");
        this._bindings.method_set_steering = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VehicleWheel3D");
        let methodname = new StringName("get_steering");
        this._bindings.method_get_steering = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
  }
  set_radius(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radius,
      this._owner,
      _length
    );
    
  }
  get_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_suspension_rest_length(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_suspension_rest_length,
      this._owner,
      _length
    );
    
  }
  get_suspension_rest_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_suspension_rest_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_suspension_travel(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_suspension_travel,
      this._owner,
      _length
    );
    
  }
  get_suspension_travel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_suspension_travel,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_suspension_stiffness(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_suspension_stiffness,
      this._owner,
      _length
    );
    
  }
  get_suspension_stiffness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_suspension_stiffness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_suspension_max_force(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_suspension_max_force,
      this._owner,
      _length
    );
    
  }
  get_suspension_max_force() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_suspension_max_force,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_damping_compression(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_damping_compression,
      this._owner,
      _length
    );
    
  }
  get_damping_compression() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_damping_compression,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_damping_relaxation(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_damping_relaxation,
      this._owner,
      _length
    );
    
  }
  get_damping_relaxation() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_damping_relaxation,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_use_as_traction(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_as_traction,
      this._owner,
      _enable
    );
    
  }
  is_used_as_traction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_used_as_traction,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_use_as_steering(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_as_steering,
      this._owner,
      _enable
    );
    
  }
  is_used_as_steering() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_used_as_steering,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_friction_slip(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_friction_slip,
      this._owner,
      _length
    );
    
  }
  get_friction_slip() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_friction_slip,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  is_in_contact() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_in_contact,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_contact_body() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_contact_body,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_roll_influence(_roll_influence) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_roll_influence,
      this._owner,
      _roll_influence
    );
    
  }
  get_roll_influence() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_roll_influence,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_skidinfo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skidinfo,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_rpm() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rpm,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_engine_force(_engine_force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_engine_force,
      this._owner,
      _engine_force
    );
    
  }
  get_engine_force() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_engine_force,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_brake(_brake) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_brake,
      this._owner,
      _brake
    );
    
  }
  get_brake() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_brake,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_steering(_steering) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_steering,
      this._owner,
      _steering
    );
    
  }
  get_steering() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_steering,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
}