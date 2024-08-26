import * as internal from '__internal__';
import { PhysicsDirectBodyState3D } from 'src/js_godot/classesphysics_direct_body_state3d'
import { Basis } from 'src/js_godot/variant/basis'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { RID } from 'src/js_godot/variant/rid'
class _MethodBindings {
    method__get_total_gravity;
    method__get_total_linear_damp;
    method__get_total_angular_damp;
    method__get_center_of_mass;
    method__get_center_of_mass_local;
    method__get_principal_inertia_axes;
    method__get_inverse_mass;
    method__get_inverse_inertia;
    method__get_inverse_inertia_tensor;
    method__set_linear_velocity;
    method__get_linear_velocity;
    method__set_angular_velocity;
    method__get_angular_velocity;
    method__set_transform;
    method__get_transform;
    method__get_velocity_at_local_position;
    method__apply_central_impulse;
    method__apply_impulse;
    method__apply_torque_impulse;
    method__apply_central_force;
    method__apply_force;
    method__apply_torque;
    method__add_constant_central_force;
    method__add_constant_force;
    method__add_constant_torque;
    method__set_constant_force;
    method__get_constant_force;
    method__set_constant_torque;
    method__get_constant_torque;
    method__set_sleep_state;
    method__is_sleeping;
    method__get_contact_count;
    method__get_contact_local_position;
    method__get_contact_local_normal;
    method__get_contact_impulse;
    method__get_contact_local_shape;
    method__get_contact_local_velocity_at_position;
    method__get_contact_collider;
    method__get_contact_collider_position;
    method__get_contact_collider_id;
    method__get_contact_collider_object;
    method__get_contact_collider_shape;
    method__get_contact_collider_velocity_at_position;
    method__get_step;
    method__integrate_forces;
    method__get_space_state;
}


export class PhysicsDirectBodyState3DExtension extends PhysicsDirectBodyState3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsDirectBodyState3DExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_total_gravity");
      this._bindings.method__get_total_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_total_linear_damp");
      this._bindings.method__get_total_linear_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_total_angular_damp");
      this._bindings.method__get_total_angular_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_center_of_mass");
      this._bindings.method__get_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_center_of_mass_local");
      this._bindings.method__get_center_of_mass_local = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_principal_inertia_axes");
      this._bindings.method__get_principal_inertia_axes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_inverse_mass");
      this._bindings.method__get_inverse_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_inverse_inertia");
      this._bindings.method__get_inverse_inertia = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_inverse_inertia_tensor");
      this._bindings.method__get_inverse_inertia_tensor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_set_linear_velocity");
      this._bindings.method__set_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_linear_velocity");
      this._bindings.method__get_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_set_angular_velocity");
      this._bindings.method__set_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_angular_velocity");
      this._bindings.method__get_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_set_transform");
      this._bindings.method__set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_transform");
      this._bindings.method__get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_velocity_at_local_position");
      this._bindings.method__get_velocity_at_local_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_apply_central_impulse");
      this._bindings.method__apply_central_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_apply_impulse");
      this._bindings.method__apply_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_apply_torque_impulse");
      this._bindings.method__apply_torque_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_apply_central_force");
      this._bindings.method__apply_central_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_apply_force");
      this._bindings.method__apply_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_apply_torque");
      this._bindings.method__apply_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_add_constant_central_force");
      this._bindings.method__add_constant_central_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_add_constant_force");
      this._bindings.method__add_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_add_constant_torque");
      this._bindings.method__add_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_set_constant_force");
      this._bindings.method__set_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_constant_force");
      this._bindings.method__get_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_set_constant_torque");
      this._bindings.method__set_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_constant_torque");
      this._bindings.method__get_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_set_sleep_state");
      this._bindings.method__set_sleep_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_is_sleeping");
      this._bindings.method__is_sleeping = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_count");
      this._bindings.method__get_contact_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_local_position");
      this._bindings.method__get_contact_local_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_local_normal");
      this._bindings.method__get_contact_local_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_impulse");
      this._bindings.method__get_contact_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_local_shape");
      this._bindings.method__get_contact_local_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_local_velocity_at_position");
      this._bindings.method__get_contact_local_velocity_at_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_collider");
      this._bindings.method__get_contact_collider = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_collider_position");
      this._bindings.method__get_contact_collider_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_collider_id");
      this._bindings.method__get_contact_collider_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_collider_object");
      this._bindings.method__get_contact_collider_object = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_collider_shape");
      this._bindings.method__get_contact_collider_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_contact_collider_velocity_at_position");
      this._bindings.method__get_contact_collider_velocity_at_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_step");
      this._bindings.method__get_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_integrate_forces");
      this._bindings.method__integrate_forces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("PhysicsDirectBodyState3DExtension");
      let methodname = new StringName("_get_space_state");
      this._bindings.method__get_space_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_total_gravity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_total_gravity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  _get_total_linear_damp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_total_linear_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _get_total_angular_damp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_total_angular_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _get_center_of_mass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_center_of_mass,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  _get_center_of_mass_local() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_center_of_mass_local,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  _get_principal_inertia_axes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_principal_inertia_axes,
      this._owner,
			Variant.Type.BASIS
    ,
      
    );
  }
  _get_inverse_mass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_inverse_mass,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _get_inverse_inertia() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_inverse_inertia,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  _get_inverse_inertia_tensor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_inverse_inertia_tensor,
      this._owner,
			Variant.Type.BASIS
    ,
      
    );
  }
  _set_linear_velocity(_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_linear_velocity,
      this._owner,
      _velocity
    );
  }
  _get_linear_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  _set_angular_velocity(_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_angular_velocity,
      this._owner,
      _velocity
    );
  }
  _get_angular_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  _set_transform(_transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_transform,
      this._owner,
      _transform
    );
  }
  _get_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      
    );
  }
  _get_velocity_at_local_position(_local_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_velocity_at_local_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _local_position
    );
  }
  _apply_central_impulse(_impulse) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__apply_central_impulse,
      this._owner,
      _impulse
    );
  }
  _apply_impulse(_impulse, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__apply_impulse,
      this._owner,
      _impulse, _position
    );
  }
  _apply_torque_impulse(_impulse) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__apply_torque_impulse,
      this._owner,
      _impulse
    );
  }
  _apply_central_force(_force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__apply_central_force,
      this._owner,
      _force
    );
  }
  _apply_force(_force, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__apply_force,
      this._owner,
      _force, _position
    );
  }
  _apply_torque(_torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__apply_torque,
      this._owner,
      _torque
    );
  }
  _add_constant_central_force(_force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__add_constant_central_force,
      this._owner,
      _force
    );
  }
  _add_constant_force(_force, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__add_constant_force,
      this._owner,
      _force, _position
    );
  }
  _add_constant_torque(_torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__add_constant_torque,
      this._owner,
      _torque
    );
  }
  _set_constant_force(_force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_constant_force,
      this._owner,
      _force
    );
  }
  _get_constant_force() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_constant_force,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  _set_constant_torque(_torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_constant_torque,
      this._owner,
      _torque
    );
  }
  _get_constant_torque() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_constant_torque,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  _set_sleep_state(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_sleep_state,
      this._owner,
      _enabled
    );
  }
  _is_sleeping() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_sleeping,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _get_contact_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_contact_local_position(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_local_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _contact_idx
    );
  }
  _get_contact_local_normal(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_local_normal,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _contact_idx
    );
  }
  _get_contact_impulse(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_impulse,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _contact_idx
    );
  }
  _get_contact_local_shape(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_local_shape,
      this._owner,
			Variant.Type.INT,
      _contact_idx
    );
  }
  _get_contact_local_velocity_at_position(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_local_velocity_at_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _contact_idx
    );
  }
  _get_contact_collider(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_collider,
      this._owner,
			Variant.Type.RID
    ,
      _contact_idx
    );
  }
  _get_contact_collider_position(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_collider_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _contact_idx
    );
  }
  _get_contact_collider_id(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_collider_id,
      this._owner,
			Variant.Type.INT,
      _contact_idx
    );
  }
  _get_contact_collider_object(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_collider_object,
      this._owner,
			Variant.INT,
      _contact_idx
    );
  }
  _get_contact_collider_shape(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_collider_shape,
      this._owner,
			Variant.Type.INT,
      _contact_idx
    );
  }
  _get_contact_collider_velocity_at_position(_contact_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_contact_collider_velocity_at_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _contact_idx
    );
  }
  _get_step() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  _integrate_forces() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__integrate_forces,
      this._owner,
      
    );
  }
  _get_space_state() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_space_state,
      this._owner,
			Variant.INT,
      
    );
  }
}