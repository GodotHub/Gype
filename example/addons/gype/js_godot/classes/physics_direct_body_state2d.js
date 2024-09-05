import * as internal from '__internal__';
import { Vector2 } from '@js_godot/variant/vector2'
import { StringName } from '@js_godot/variant/string_name'
import { RID } from '@js_godot/variant/rid'
import { GodotObject } from '@js_godot/classes/godot_object'
import { Variant } from '@js_godot/variant/variant'
import { Transform2D } from '@js_godot/variant/transform2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_total_gravity;
  method_get_total_linear_damp;
  method_get_total_angular_damp;
  method_get_center_of_mass;
  method_get_center_of_mass_local;
  method_get_inverse_mass;
  method_get_inverse_inertia;
  method_set_linear_velocity;
  method_get_linear_velocity;
  method_set_angular_velocity;
  method_get_angular_velocity;
  method_set_transform;
  method_get_transform;
  method_get_velocity_at_local_position;
  method_apply_central_impulse;
  method_apply_torque_impulse;
  method_apply_impulse;
  method_apply_central_force;
  method_apply_force;
  method_apply_torque;
  method_add_constant_central_force;
  method_add_constant_force;
  method_add_constant_torque;
  method_set_constant_force;
  method_get_constant_force;
  method_set_constant_torque;
  method_get_constant_torque;
  method_set_sleep_state;
  method_is_sleeping;
  method_get_contact_count;
  method_get_contact_local_position;
  method_get_contact_local_normal;
  method_get_contact_local_shape;
  method_get_contact_local_velocity_at_position;
  method_get_contact_collider;
  method_get_contact_collider_position;
  method_get_contact_collider_id;
  method_get_contact_collider_object;
  method_get_contact_collider_shape;
  method_get_contact_collider_velocity_at_position;
  method_get_contact_impulse;
  method_get_step;
  method_integrate_forces;
  method_get_space_state;
}
export class PhysicsDirectBodyState2D extends GodotObject{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsDirectBodyState2D");
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
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_total_gravity");
      this._bindings.method_get_total_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_total_linear_damp");
      this._bindings.method_get_total_linear_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_total_angular_damp");
      this._bindings.method_get_total_angular_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_center_of_mass");
      this._bindings.method_get_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_center_of_mass_local");
      this._bindings.method_get_center_of_mass_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_inverse_mass");
      this._bindings.method_get_inverse_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_inverse_inertia");
      this._bindings.method_get_inverse_inertia = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("set_linear_velocity");
      this._bindings.method_set_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_linear_velocity");
      this._bindings.method_get_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("set_angular_velocity");
      this._bindings.method_set_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_angular_velocity");
      this._bindings.method_get_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("set_transform");
      this._bindings.method_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2761652528
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_transform");
      this._bindings.method_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814499831
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_velocity_at_local_position");
      this._bindings.method_get_velocity_at_local_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2656412154
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("apply_central_impulse");
      this._bindings.method_apply_central_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("apply_torque_impulse");
      this._bindings.method_apply_torque_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("apply_impulse");
      this._bindings.method_apply_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4288681949
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("apply_central_force");
      this._bindings.method_apply_central_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3862383994
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("apply_force");
      this._bindings.method_apply_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4288681949
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("apply_torque");
      this._bindings.method_apply_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("add_constant_central_force");
      this._bindings.method_add_constant_central_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3862383994
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("add_constant_force");
      this._bindings.method_add_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4288681949
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("add_constant_torque");
      this._bindings.method_add_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("set_constant_force");
      this._bindings.method_set_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_constant_force");
      this._bindings.method_get_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("set_constant_torque");
      this._bindings.method_set_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_constant_torque");
      this._bindings.method_get_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("set_sleep_state");
      this._bindings.method_set_sleep_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("is_sleeping");
      this._bindings.method_is_sleeping = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_count");
      this._bindings.method_get_contact_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_local_position");
      this._bindings.method_get_contact_local_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_local_normal");
      this._bindings.method_get_contact_local_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_local_shape");
      this._bindings.method_get_contact_local_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_local_velocity_at_position");
      this._bindings.method_get_contact_local_velocity_at_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_collider");
      this._bindings.method_get_contact_collider = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        495598643
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_collider_position");
      this._bindings.method_get_contact_collider_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_collider_id");
      this._bindings.method_get_contact_collider_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_collider_object");
      this._bindings.method_get_contact_collider_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3332903315
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_collider_shape");
      this._bindings.method_get_contact_collider_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_collider_velocity_at_position");
      this._bindings.method_get_contact_collider_velocity_at_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_contact_impulse");
      this._bindings.method_get_contact_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_step");
      this._bindings.method_get_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("integrate_forces");
      this._bindings.method_integrate_forces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState2D");
      let methodname = new StringName("get_space_state");
      this._bindings.method_get_space_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2506717822
      );
    }
  }
  
  get_total_gravity() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_total_gravity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_total_linear_damp() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_total_linear_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_total_angular_damp() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_total_angular_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_center_of_mass() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_center_of_mass,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_center_of_mass_local() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_center_of_mass_local,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_inverse_mass() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_inverse_mass,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_inverse_inertia() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_inverse_inertia,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_linear_velocity(_velocity) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_set_linear_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_linear_velocity() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_linear_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_angular_velocity(_velocity) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_set_angular_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_angular_velocity() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_angular_velocity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_transform(_transform) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_set_transform,
      this._owner,
      _transform
    );
    
  }
  get_transform() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D,
    
      
    );
    
  }
  get_velocity_at_local_position(_local_position) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_velocity_at_local_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _local_position
    );
    
  }
  apply_central_impulse(_impulse) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_apply_central_impulse,
      this._owner,
      _impulse
    );
    
  }
  apply_torque_impulse(_impulse) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_apply_torque_impulse,
      this._owner,
      _impulse
    );
    
  }
  apply_impulse(_impulse, _position) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_apply_impulse,
      this._owner,
      _impulse, _position
    );
    
  }
  apply_central_force(_force) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_apply_central_force,
      this._owner,
      _force
    );
    
  }
  apply_force(_force, _position) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_apply_force,
      this._owner,
      _force, _position
    );
    
  }
  apply_torque(_torque) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_apply_torque,
      this._owner,
      _torque
    );
    
  }
  add_constant_central_force(_force) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_add_constant_central_force,
      this._owner,
      _force
    );
    
  }
  add_constant_force(_force, _position) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_add_constant_force,
      this._owner,
      _force, _position
    );
    
  }
  add_constant_torque(_torque) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_add_constant_torque,
      this._owner,
      _torque
    );
    
  }
  set_constant_force(_force) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_set_constant_force,
      this._owner,
      _force
    );
    
  }
  get_constant_force() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_constant_force,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_constant_torque(_torque) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_set_constant_torque,
      this._owner,
      _torque
    );
    
  }
  get_constant_torque() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_constant_torque,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_sleep_state(_enabled) {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_set_sleep_state,
      this._owner,
      _enabled
    );
    
  }
  is_sleeping() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_is_sleeping,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_contact_count() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_contact_local_position(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_local_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _contact_idx
    );
    
  }
  get_contact_local_normal(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_local_normal,
      this._owner,
			Variant.Type.VECTOR2,
    
      _contact_idx
    );
    
  }
  get_contact_local_shape(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_local_shape,
      this._owner,
			Variant.Type.INT,
      _contact_idx
    );
    
  }
  get_contact_local_velocity_at_position(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_local_velocity_at_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _contact_idx
    );
    
  }
  get_contact_collider(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_collider,
      this._owner,
			Variant.Type.RID,
    
      _contact_idx
    );
    
  }
  get_contact_collider_position(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_collider_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _contact_idx
    );
    
  }
  get_contact_collider_id(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_collider_id,
      this._owner,
			Variant.Type.INT,
      _contact_idx
    );
    
  }
  get_contact_collider_object(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_collider_object,
      this._owner,
			Variant.INT,
      _contact_idx
    );
    
  }
  get_contact_collider_shape(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_collider_shape,
      this._owner,
			Variant.Type.INT,
      _contact_idx
    );
    
  }
  get_contact_collider_velocity_at_position(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_collider_velocity_at_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _contact_idx
    );
    
  }
  get_contact_impulse(_contact_idx) {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_contact_impulse,
      this._owner,
			Variant.Type.VECTOR2,
    
      _contact_idx
    );
    
  }
  get_step() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  integrate_forces() {
    return _call_native_mb_no_ret(
      PhysicsDirectBodyState2D._bindings.method_integrate_forces,
      this._owner,
      
    );
    
  }
  get_space_state() {
    return _call_native_mb_ret(
      PhysicsDirectBodyState2D._bindings.method_get_space_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get step () {
  return this.get_step();
}
get inverse_mass () {
  return this.get_inverse_mass();
}
get inverse_inertia () {
  return this.get_inverse_inertia();
}
get total_angular_damp () {
  return this.get_total_angular_damp();
}
get total_linear_damp () {
  return this.get_total_linear_damp();
}
get total_gravity () {
  return this.get_total_gravity();
}
get center_of_mass () {
  return this.get_center_of_mass();
}
get center_of_mass_local () {
  return this.get_center_of_mass_local();
}
get angular_velocity () {
  return this.get_angular_velocity();
}
set angular_velocity (new_value) {
  this.set_angular_velocity(new_value);
}
get linear_velocity () {
  return this.get_linear_velocity();
}
set linear_velocity (new_value) {
  this.set_linear_velocity(new_value);
}
get sleeping () {
  return this.is_sleeping();
}
set sleeping (new_value) {
  this.set_sleep_state(new_value);
}
get transform () {
  return this.get_transform();
}
set transform (new_value) {
  this.set_transform(new_value);
}


  static {
    this._init_bindings();
  }
}