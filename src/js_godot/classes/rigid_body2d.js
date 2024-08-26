import * as internal from '__internal__';
import { PhysicsBody2D } from 'src/js_godot/classesphysics_body2d'
import { Vector2 } from 'src/js_godot/variant/vector2'
class _MethodBindings {
    method__integrate_forces;
    method_set_mass;
    method_get_mass;
    method_get_inertia;
    method_set_inertia;
    method_set_center_of_mass_mode;
    method_get_center_of_mass_mode;
    method_set_center_of_mass;
    method_get_center_of_mass;
    method_set_physics_material_override;
    method_get_physics_material_override;
    method_set_gravity_scale;
    method_get_gravity_scale;
    method_set_linear_damp_mode;
    method_get_linear_damp_mode;
    method_set_angular_damp_mode;
    method_get_angular_damp_mode;
    method_set_linear_damp;
    method_get_linear_damp;
    method_set_angular_damp;
    method_get_angular_damp;
    method_set_linear_velocity;
    method_get_linear_velocity;
    method_set_angular_velocity;
    method_get_angular_velocity;
    method_set_max_contacts_reported;
    method_get_max_contacts_reported;
    method_get_contact_count;
    method_set_use_custom_integrator;
    method_is_using_custom_integrator;
    method_set_contact_monitor;
    method_is_contact_monitor_enabled;
    method_set_continuous_collision_detection_mode;
    method_get_continuous_collision_detection_mode;
    method_set_axis_velocity;
    method_apply_central_impulse;
    method_apply_impulse;
    method_apply_torque_impulse;
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
    method_set_sleeping;
    method_is_sleeping;
    method_set_can_sleep;
    method_is_able_to_sleep;
    method_set_lock_rotation_enabled;
    method_is_lock_rotation_enabled;
    method_set_freeze_enabled;
    method_is_freeze_enabled;
    method_set_freeze_mode;
    method_get_freeze_mode;
    method_get_colliding_bodies;
}


export class RigidBody2D extends PhysicsBody2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RigidBody2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("_integrate_forces");
      this._bindings.method__integrate_forces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_mass");
      this._bindings.method_set_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_mass");
      this._bindings.method_get_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_inertia");
      this._bindings.method_get_inertia = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_inertia");
      this._bindings.method_set_inertia = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_center_of_mass_mode");
      this._bindings.method_set_center_of_mass_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1757235706
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_center_of_mass_mode");
      this._bindings.method_get_center_of_mass_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3277132817
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_center_of_mass");
      this._bindings.method_set_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_center_of_mass");
      this._bindings.method_get_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_physics_material_override");
      this._bindings.method_set_physics_material_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1784508650
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_physics_material_override");
      this._bindings.method_get_physics_material_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2521850424
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_gravity_scale");
      this._bindings.method_set_gravity_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_gravity_scale");
      this._bindings.method_get_gravity_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_linear_damp_mode");
      this._bindings.method_set_linear_damp_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3406533708
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_linear_damp_mode");
      this._bindings.method_get_linear_damp_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2970511462
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_angular_damp_mode");
      this._bindings.method_set_angular_damp_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3406533708
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_angular_damp_mode");
      this._bindings.method_get_angular_damp_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2970511462
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_linear_damp");
      this._bindings.method_set_linear_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_linear_damp");
      this._bindings.method_get_linear_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_angular_damp");
      this._bindings.method_set_angular_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_angular_damp");
      this._bindings.method_get_angular_damp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_linear_velocity");
      this._bindings.method_set_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_linear_velocity");
      this._bindings.method_get_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_angular_velocity");
      this._bindings.method_set_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_angular_velocity");
      this._bindings.method_get_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_max_contacts_reported");
      this._bindings.method_set_max_contacts_reported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_max_contacts_reported");
      this._bindings.method_get_max_contacts_reported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_contact_count");
      this._bindings.method_get_contact_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_use_custom_integrator");
      this._bindings.method_set_use_custom_integrator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("is_using_custom_integrator");
      this._bindings.method_is_using_custom_integrator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_contact_monitor");
      this._bindings.method_set_contact_monitor = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("is_contact_monitor_enabled");
      this._bindings.method_is_contact_monitor_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_continuous_collision_detection_mode");
      this._bindings.method_set_continuous_collision_detection_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1000241384
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_continuous_collision_detection_mode");
      this._bindings.method_get_continuous_collision_detection_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        815214376
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_axis_velocity");
      this._bindings.method_set_axis_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("apply_central_impulse");
      this._bindings.method_apply_central_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3862383994
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("apply_impulse");
      this._bindings.method_apply_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4288681949
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("apply_torque_impulse");
      this._bindings.method_apply_torque_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("apply_central_force");
      this._bindings.method_apply_central_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("apply_force");
      this._bindings.method_apply_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4288681949
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("apply_torque");
      this._bindings.method_apply_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("add_constant_central_force");
      this._bindings.method_add_constant_central_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("add_constant_force");
      this._bindings.method_add_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4288681949
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("add_constant_torque");
      this._bindings.method_add_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_constant_force");
      this._bindings.method_set_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_constant_force");
      this._bindings.method_get_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_constant_torque");
      this._bindings.method_set_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_constant_torque");
      this._bindings.method_get_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_sleeping");
      this._bindings.method_set_sleeping = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("is_sleeping");
      this._bindings.method_is_sleeping = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_can_sleep");
      this._bindings.method_set_can_sleep = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("is_able_to_sleep");
      this._bindings.method_is_able_to_sleep = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_lock_rotation_enabled");
      this._bindings.method_set_lock_rotation_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("is_lock_rotation_enabled");
      this._bindings.method_is_lock_rotation_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_freeze_enabled");
      this._bindings.method_set_freeze_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("is_freeze_enabled");
      this._bindings.method_is_freeze_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("set_freeze_mode");
      this._bindings.method_set_freeze_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1705112154
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_freeze_mode");
      this._bindings.method_get_freeze_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2016872314
      );
    }
    {
      let classname = new StringName("RigidBody2D");
      let methodname = new StringName("get_colliding_bodies");
      this._bindings.method_get_colliding_bodies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
  }
  _integrate_forces(_state) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__integrate_forces,
      this._owner,
      _state
    );
  }
  set_mass(_mass) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mass,
      this._owner,
      _mass
    );
  }
  get_mass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mass,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_inertia() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_inertia,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_inertia(_inertia) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_inertia,
      this._owner,
      _inertia
    );
  }
  set_center_of_mass_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_center_of_mass_mode,
      this._owner,
      _mode
    );
  }
  get_center_of_mass_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_center_of_mass_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_center_of_mass(_center_of_mass) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_center_of_mass,
      this._owner,
      _center_of_mass
    );
  }
  get_center_of_mass() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_center_of_mass,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_physics_material_override(_physics_material_override) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_physics_material_override,
      this._owner,
      _physics_material_override
    );
  }
  get_physics_material_override() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_physics_material_override,
      this._owner,
			Variant.INT,
      
    );
  }
  set_gravity_scale(_gravity_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gravity_scale,
      this._owner,
      _gravity_scale
    );
  }
  get_gravity_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gravity_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_linear_damp_mode(_linear_damp_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_linear_damp_mode,
      this._owner,
      _linear_damp_mode
    );
  }
  get_linear_damp_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_linear_damp_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_angular_damp_mode(_angular_damp_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_angular_damp_mode,
      this._owner,
      _angular_damp_mode
    );
  }
  get_angular_damp_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_angular_damp_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_linear_damp(_linear_damp) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_linear_damp,
      this._owner,
      _linear_damp
    );
  }
  get_linear_damp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_linear_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_angular_damp(_angular_damp) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_angular_damp,
      this._owner,
      _angular_damp
    );
  }
  get_angular_damp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_angular_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_linear_velocity(_linear_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_linear_velocity,
      this._owner,
      _linear_velocity
    );
  }
  get_linear_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_linear_velocity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_angular_velocity(_angular_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_angular_velocity,
      this._owner,
      _angular_velocity
    );
  }
  get_angular_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_angular_velocity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_max_contacts_reported(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_contacts_reported,
      this._owner,
      _amount
    );
  }
  get_max_contacts_reported() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_contacts_reported,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_contact_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_contact_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_use_custom_integrator(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_custom_integrator,
      this._owner,
      _enable
    );
  }
  is_using_custom_integrator() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_custom_integrator,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_contact_monitor(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_contact_monitor,
      this._owner,
      _enabled
    );
  }
  is_contact_monitor_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_contact_monitor_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_continuous_collision_detection_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_continuous_collision_detection_mode,
      this._owner,
      _mode
    );
  }
  get_continuous_collision_detection_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_continuous_collision_detection_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_axis_velocity(_axis_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_axis_velocity,
      this._owner,
      _axis_velocity
    );
  }
  apply_central_impulse(_impulse) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_apply_central_impulse,
      this._owner,
      _impulse
    );
  }
  apply_impulse(_impulse, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_apply_impulse,
      this._owner,
      _impulse, _position
    );
  }
  apply_torque_impulse(_torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_apply_torque_impulse,
      this._owner,
      _torque
    );
  }
  apply_central_force(_force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_apply_central_force,
      this._owner,
      _force
    );
  }
  apply_force(_force, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_apply_force,
      this._owner,
      _force, _position
    );
  }
  apply_torque(_torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_apply_torque,
      this._owner,
      _torque
    );
  }
  add_constant_central_force(_force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_constant_central_force,
      this._owner,
      _force
    );
  }
  add_constant_force(_force, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_constant_force,
      this._owner,
      _force, _position
    );
  }
  add_constant_torque(_torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_constant_torque,
      this._owner,
      _torque
    );
  }
  set_constant_force(_force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constant_force,
      this._owner,
      _force
    );
  }
  get_constant_force() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constant_force,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_constant_torque(_torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_constant_torque,
      this._owner,
      _torque
    );
  }
  get_constant_torque() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_constant_torque,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_sleeping(_sleeping) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sleeping,
      this._owner,
      _sleeping
    );
  }
  is_sleeping() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_sleeping,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_can_sleep(_able_to_sleep) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_can_sleep,
      this._owner,
      _able_to_sleep
    );
  }
  is_able_to_sleep() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_able_to_sleep,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_lock_rotation_enabled(_lock_rotation) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lock_rotation_enabled,
      this._owner,
      _lock_rotation
    );
  }
  is_lock_rotation_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_lock_rotation_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_freeze_enabled(_freeze_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_freeze_enabled,
      this._owner,
      _freeze_mode
    );
  }
  is_freeze_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_freeze_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_freeze_mode(_freeze_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_freeze_mode,
      this._owner,
      _freeze_mode
    );
  }
  get_freeze_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_freeze_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  get_colliding_bodies() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_colliding_bodies,
      this._owner,
			Variant.INT,
      
    );
  }
  static FreezeMode = {
    FREEZE_MODE_STATIC: 0,
    FREEZE_MODE_KINEMATIC: 1,
  }
  static CenterOfMassMode = {
    CENTER_OF_MASS_MODE_AUTO: 0,
    CENTER_OF_MASS_MODE_CUSTOM: 1,
  }
  static DampMode = {
    DAMP_MODE_COMBINE: 0,
    DAMP_MODE_REPLACE: 1,
  }
  static CCDMode = {
    CCD_MODE_DISABLED: 0,
    CCD_MODE_CAST_RAY: 1,
    CCD_MODE_CAST_SHAPE: 2,
  }
}