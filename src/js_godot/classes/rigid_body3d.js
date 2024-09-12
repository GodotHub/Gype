import * as internal from '__internal__';
import { PhysicsBody3D } from '@js_godot/classes/physics_body3d'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_mass;
  method_get_mass;
  method_set_inertia;
  method_get_inertia;
  method_set_center_of_mass_mode;
  method_get_center_of_mass_mode;
  method_set_center_of_mass;
  method_get_center_of_mass;
  method_set_physics_material_override;
  method_get_physics_material_override;
  method_set_linear_velocity;
  method_get_linear_velocity;
  method_set_angular_velocity;
  method_get_angular_velocity;
  method_get_inverse_inertia_tensor;
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
  method_set_max_contacts_reported;
  method_get_max_contacts_reported;
  method_get_contact_count;
  method_set_use_custom_integrator;
  method_is_using_custom_integrator;
  method_set_contact_monitor;
  method_is_contact_monitor_enabled;
  method_set_use_continuous_collision_detection;
  method_is_using_continuous_collision_detection;
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
export class RigidBody3D extends PhysicsBody3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RigidBody3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_mass() {
    if (!this.#_bindings.method_set_mass) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_mass");
      this.#_bindings.method_set_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_mass() {
    if (!this.#_bindings.method_get_mass) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_mass");
      this.#_bindings.method_get_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_inertia() {
    if (!this.#_bindings.method_set_inertia) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_inertia");
      this.#_bindings.method_set_inertia = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_inertia() {
    if (!this.#_bindings.method_get_inertia) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_inertia");
      this.#_bindings.method_get_inertia = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_center_of_mass_mode() {
    if (!this.#_bindings.method_set_center_of_mass_mode) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_center_of_mass_mode");
      this.#_bindings.method_set_center_of_mass_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3625866032
      );
    }
  }
  static init_method_get_center_of_mass_mode() {
    if (!this.#_bindings.method_get_center_of_mass_mode) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_center_of_mass_mode");
      this.#_bindings.method_get_center_of_mass_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        237405040
      );
    }
  }
  static init_method_set_center_of_mass() {
    if (!this.#_bindings.method_set_center_of_mass) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_center_of_mass");
      this.#_bindings.method_set_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_center_of_mass() {
    if (!this.#_bindings.method_get_center_of_mass) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_center_of_mass");
      this.#_bindings.method_get_center_of_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_physics_material_override() {
    if (!this.#_bindings.method_set_physics_material_override) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_physics_material_override");
      this.#_bindings.method_set_physics_material_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1784508650
      );
    }
  }
  static init_method_get_physics_material_override() {
    if (!this.#_bindings.method_get_physics_material_override) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_physics_material_override");
      this.#_bindings.method_get_physics_material_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2521850424
      );
    }
  }
  static init_method_set_linear_velocity() {
    if (!this.#_bindings.method_set_linear_velocity) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_linear_velocity");
      this.#_bindings.method_set_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_linear_velocity() {
    if (!this.#_bindings.method_get_linear_velocity) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_linear_velocity");
      this.#_bindings.method_get_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_angular_velocity() {
    if (!this.#_bindings.method_set_angular_velocity) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_angular_velocity");
      this.#_bindings.method_set_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_angular_velocity() {
    if (!this.#_bindings.method_get_angular_velocity) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_angular_velocity");
      this.#_bindings.method_get_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_inverse_inertia_tensor() {
    if (!this.#_bindings.method_get_inverse_inertia_tensor) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_inverse_inertia_tensor");
      this.#_bindings.method_get_inverse_inertia_tensor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2716978435
      );
    }
  }
  static init_method_set_gravity_scale() {
    if (!this.#_bindings.method_set_gravity_scale) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_gravity_scale");
      this.#_bindings.method_set_gravity_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_gravity_scale() {
    if (!this.#_bindings.method_get_gravity_scale) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_gravity_scale");
      this.#_bindings.method_get_gravity_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_linear_damp_mode() {
    if (!this.#_bindings.method_set_linear_damp_mode) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_linear_damp_mode");
      this.#_bindings.method_set_linear_damp_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1802035050
      );
    }
  }
  static init_method_get_linear_damp_mode() {
    if (!this.#_bindings.method_get_linear_damp_mode) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_linear_damp_mode");
      this.#_bindings.method_get_linear_damp_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1366206940
      );
    }
  }
  static init_method_set_angular_damp_mode() {
    if (!this.#_bindings.method_set_angular_damp_mode) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_angular_damp_mode");
      this.#_bindings.method_set_angular_damp_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1802035050
      );
    }
  }
  static init_method_get_angular_damp_mode() {
    if (!this.#_bindings.method_get_angular_damp_mode) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_angular_damp_mode");
      this.#_bindings.method_get_angular_damp_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1366206940
      );
    }
  }
  static init_method_set_linear_damp() {
    if (!this.#_bindings.method_set_linear_damp) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_linear_damp");
      this.#_bindings.method_set_linear_damp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_linear_damp() {
    if (!this.#_bindings.method_get_linear_damp) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_linear_damp");
      this.#_bindings.method_get_linear_damp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_angular_damp() {
    if (!this.#_bindings.method_set_angular_damp) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_angular_damp");
      this.#_bindings.method_set_angular_damp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_angular_damp() {
    if (!this.#_bindings.method_get_angular_damp) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_angular_damp");
      this.#_bindings.method_get_angular_damp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_contacts_reported() {
    if (!this.#_bindings.method_set_max_contacts_reported) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_max_contacts_reported");
      this.#_bindings.method_set_max_contacts_reported = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_contacts_reported() {
    if (!this.#_bindings.method_get_max_contacts_reported) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_max_contacts_reported");
      this.#_bindings.method_get_max_contacts_reported = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_contact_count() {
    if (!this.#_bindings.method_get_contact_count) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_contact_count");
      this.#_bindings.method_get_contact_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_use_custom_integrator() {
    if (!this.#_bindings.method_set_use_custom_integrator) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_use_custom_integrator");
      this.#_bindings.method_set_use_custom_integrator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_custom_integrator() {
    if (!this.#_bindings.method_is_using_custom_integrator) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("is_using_custom_integrator");
      this.#_bindings.method_is_using_custom_integrator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_contact_monitor() {
    if (!this.#_bindings.method_set_contact_monitor) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_contact_monitor");
      this.#_bindings.method_set_contact_monitor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_contact_monitor_enabled() {
    if (!this.#_bindings.method_is_contact_monitor_enabled) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("is_contact_monitor_enabled");
      this.#_bindings.method_is_contact_monitor_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_use_continuous_collision_detection() {
    if (!this.#_bindings.method_set_use_continuous_collision_detection) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_use_continuous_collision_detection");
      this.#_bindings.method_set_use_continuous_collision_detection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_continuous_collision_detection() {
    if (!this.#_bindings.method_is_using_continuous_collision_detection) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("is_using_continuous_collision_detection");
      this.#_bindings.method_is_using_continuous_collision_detection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_axis_velocity() {
    if (!this.#_bindings.method_set_axis_velocity) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_axis_velocity");
      this.#_bindings.method_set_axis_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_apply_central_impulse() {
    if (!this.#_bindings.method_apply_central_impulse) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("apply_central_impulse");
      this.#_bindings.method_apply_central_impulse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_apply_impulse() {
    if (!this.#_bindings.method_apply_impulse) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("apply_impulse");
      this.#_bindings.method_apply_impulse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2754756483
      );
    }
  }
  static init_method_apply_torque_impulse() {
    if (!this.#_bindings.method_apply_torque_impulse) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("apply_torque_impulse");
      this.#_bindings.method_apply_torque_impulse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_apply_central_force() {
    if (!this.#_bindings.method_apply_central_force) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("apply_central_force");
      this.#_bindings.method_apply_central_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_apply_force() {
    if (!this.#_bindings.method_apply_force) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("apply_force");
      this.#_bindings.method_apply_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2754756483
      );
    }
  }
  static init_method_apply_torque() {
    if (!this.#_bindings.method_apply_torque) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("apply_torque");
      this.#_bindings.method_apply_torque = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_add_constant_central_force() {
    if (!this.#_bindings.method_add_constant_central_force) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("add_constant_central_force");
      this.#_bindings.method_add_constant_central_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_add_constant_force() {
    if (!this.#_bindings.method_add_constant_force) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("add_constant_force");
      this.#_bindings.method_add_constant_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2754756483
      );
    }
  }
  static init_method_add_constant_torque() {
    if (!this.#_bindings.method_add_constant_torque) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("add_constant_torque");
      this.#_bindings.method_add_constant_torque = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_set_constant_force() {
    if (!this.#_bindings.method_set_constant_force) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_constant_force");
      this.#_bindings.method_set_constant_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_constant_force() {
    if (!this.#_bindings.method_get_constant_force) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_constant_force");
      this.#_bindings.method_get_constant_force = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_constant_torque() {
    if (!this.#_bindings.method_set_constant_torque) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_constant_torque");
      this.#_bindings.method_set_constant_torque = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_constant_torque() {
    if (!this.#_bindings.method_get_constant_torque) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_constant_torque");
      this.#_bindings.method_get_constant_torque = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_sleeping() {
    if (!this.#_bindings.method_set_sleeping) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_sleeping");
      this.#_bindings.method_set_sleeping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_sleeping() {
    if (!this.#_bindings.method_is_sleeping) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("is_sleeping");
      this.#_bindings.method_is_sleeping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_can_sleep() {
    if (!this.#_bindings.method_set_can_sleep) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_can_sleep");
      this.#_bindings.method_set_can_sleep = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_able_to_sleep() {
    if (!this.#_bindings.method_is_able_to_sleep) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("is_able_to_sleep");
      this.#_bindings.method_is_able_to_sleep = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_lock_rotation_enabled() {
    if (!this.#_bindings.method_set_lock_rotation_enabled) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_lock_rotation_enabled");
      this.#_bindings.method_set_lock_rotation_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_lock_rotation_enabled() {
    if (!this.#_bindings.method_is_lock_rotation_enabled) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("is_lock_rotation_enabled");
      this.#_bindings.method_is_lock_rotation_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_freeze_enabled() {
    if (!this.#_bindings.method_set_freeze_enabled) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_freeze_enabled");
      this.#_bindings.method_set_freeze_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_freeze_enabled() {
    if (!this.#_bindings.method_is_freeze_enabled) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("is_freeze_enabled");
      this.#_bindings.method_is_freeze_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_freeze_mode() {
    if (!this.#_bindings.method_set_freeze_mode) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("set_freeze_mode");
      this.#_bindings.method_set_freeze_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1319914653
      );
    }
  }
  static init_method_get_freeze_mode() {
    if (!this.#_bindings.method_get_freeze_mode) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_freeze_mode");
      this.#_bindings.method_get_freeze_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2008423905
      );
    }
  }
  static init_method_get_colliding_bodies() {
    if (!this.#_bindings.method_get_colliding_bodies) {
      let classname = new StringName("RigidBody3D");
      let methodname = new StringName("get_colliding_bodies");
      this.#_bindings.method_get_colliding_bodies = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }

  
  
  _integrate_forces(_state) {
  }
  set_mass(_mass) {
    RigidBody3D.init_method_set_mass();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_mass,
      this._owner,
      _mass
    );
    
  }
  get_mass() {
    RigidBody3D.init_method_get_mass();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_mass,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_inertia(_inertia) {
    RigidBody3D.init_method_set_inertia();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_inertia,
      this._owner,
      _inertia
    );
    
  }
  get_inertia() {
    RigidBody3D.init_method_get_inertia();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_inertia,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_center_of_mass_mode(_mode) {
    RigidBody3D.init_method_set_center_of_mass_mode();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_center_of_mass_mode,
      this._owner,
      _mode
    );
    
  }
  get_center_of_mass_mode() {
    RigidBody3D.init_method_get_center_of_mass_mode();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_center_of_mass_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_center_of_mass(_center_of_mass) {
    RigidBody3D.init_method_set_center_of_mass();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_center_of_mass,
      this._owner,
      _center_of_mass
    );
    
  }
  get_center_of_mass() {
    RigidBody3D.init_method_get_center_of_mass();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_center_of_mass,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_physics_material_override(_physics_material_override) {
    RigidBody3D.init_method_set_physics_material_override();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_physics_material_override,
      this._owner,
      _physics_material_override
    );
    
  }
  get_physics_material_override() {
    RigidBody3D.init_method_get_physics_material_override();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_physics_material_override,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_linear_velocity(_linear_velocity) {
    RigidBody3D.init_method_set_linear_velocity();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_linear_velocity,
      this._owner,
      _linear_velocity
    );
    
  }
  get_linear_velocity() {
    RigidBody3D.init_method_get_linear_velocity();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_angular_velocity(_angular_velocity) {
    RigidBody3D.init_method_set_angular_velocity();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_angular_velocity,
      this._owner,
      _angular_velocity
    );
    
  }
  get_angular_velocity() {
    RigidBody3D.init_method_get_angular_velocity();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_inverse_inertia_tensor() {
    RigidBody3D.init_method_get_inverse_inertia_tensor();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_inverse_inertia_tensor,
      this._owner,
			Variant.Type.BASIS,
    
      
    );
    
  }
  set_gravity_scale(_gravity_scale) {
    RigidBody3D.init_method_set_gravity_scale();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_gravity_scale,
      this._owner,
      _gravity_scale
    );
    
  }
  get_gravity_scale() {
    RigidBody3D.init_method_get_gravity_scale();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_gravity_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_linear_damp_mode(_linear_damp_mode) {
    RigidBody3D.init_method_set_linear_damp_mode();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_linear_damp_mode,
      this._owner,
      _linear_damp_mode
    );
    
  }
  get_linear_damp_mode() {
    RigidBody3D.init_method_get_linear_damp_mode();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_linear_damp_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_angular_damp_mode(_angular_damp_mode) {
    RigidBody3D.init_method_set_angular_damp_mode();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_angular_damp_mode,
      this._owner,
      _angular_damp_mode
    );
    
  }
  get_angular_damp_mode() {
    RigidBody3D.init_method_get_angular_damp_mode();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_angular_damp_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_linear_damp(_linear_damp) {
    RigidBody3D.init_method_set_linear_damp();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_linear_damp,
      this._owner,
      _linear_damp
    );
    
  }
  get_linear_damp() {
    RigidBody3D.init_method_get_linear_damp();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_linear_damp,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_angular_damp(_angular_damp) {
    RigidBody3D.init_method_set_angular_damp();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_angular_damp,
      this._owner,
      _angular_damp
    );
    
  }
  get_angular_damp() {
    RigidBody3D.init_method_get_angular_damp();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_angular_damp,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_contacts_reported(_amount) {
    RigidBody3D.init_method_set_max_contacts_reported();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_max_contacts_reported,
      this._owner,
      _amount
    );
    
  }
  get_max_contacts_reported() {
    RigidBody3D.init_method_get_max_contacts_reported();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_max_contacts_reported,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_contact_count() {
    RigidBody3D.init_method_get_contact_count();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_contact_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_use_custom_integrator(_enable) {
    RigidBody3D.init_method_set_use_custom_integrator();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_use_custom_integrator,
      this._owner,
      _enable
    );
    
  }
  is_using_custom_integrator() {
    RigidBody3D.init_method_is_using_custom_integrator();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_is_using_custom_integrator,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_contact_monitor(_enabled) {
    RigidBody3D.init_method_set_contact_monitor();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_contact_monitor,
      this._owner,
      _enabled
    );
    
  }
  is_contact_monitor_enabled() {
    RigidBody3D.init_method_is_contact_monitor_enabled();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_is_contact_monitor_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_use_continuous_collision_detection(_enable) {
    RigidBody3D.init_method_set_use_continuous_collision_detection();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_use_continuous_collision_detection,
      this._owner,
      _enable
    );
    
  }
  is_using_continuous_collision_detection() {
    RigidBody3D.init_method_is_using_continuous_collision_detection();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_is_using_continuous_collision_detection,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_axis_velocity(_axis_velocity) {
    RigidBody3D.init_method_set_axis_velocity();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_axis_velocity,
      this._owner,
      _axis_velocity
    );
    
  }
  apply_central_impulse(_impulse) {
    RigidBody3D.init_method_apply_central_impulse();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_apply_central_impulse,
      this._owner,
      _impulse
    );
    
  }
  apply_impulse(_impulse, _position) {
    RigidBody3D.init_method_apply_impulse();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_apply_impulse,
      this._owner,
      _impulse, _position
    );
    
  }
  apply_torque_impulse(_impulse) {
    RigidBody3D.init_method_apply_torque_impulse();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_apply_torque_impulse,
      this._owner,
      _impulse
    );
    
  }
  apply_central_force(_force) {
    RigidBody3D.init_method_apply_central_force();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_apply_central_force,
      this._owner,
      _force
    );
    
  }
  apply_force(_force, _position) {
    RigidBody3D.init_method_apply_force();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_apply_force,
      this._owner,
      _force, _position
    );
    
  }
  apply_torque(_torque) {
    RigidBody3D.init_method_apply_torque();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_apply_torque,
      this._owner,
      _torque
    );
    
  }
  add_constant_central_force(_force) {
    RigidBody3D.init_method_add_constant_central_force();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_add_constant_central_force,
      this._owner,
      _force
    );
    
  }
  add_constant_force(_force, _position) {
    RigidBody3D.init_method_add_constant_force();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_add_constant_force,
      this._owner,
      _force, _position
    );
    
  }
  add_constant_torque(_torque) {
    RigidBody3D.init_method_add_constant_torque();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_add_constant_torque,
      this._owner,
      _torque
    );
    
  }
  set_constant_force(_force) {
    RigidBody3D.init_method_set_constant_force();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_constant_force,
      this._owner,
      _force
    );
    
  }
  get_constant_force() {
    RigidBody3D.init_method_get_constant_force();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_constant_force,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_constant_torque(_torque) {
    RigidBody3D.init_method_set_constant_torque();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_constant_torque,
      this._owner,
      _torque
    );
    
  }
  get_constant_torque() {
    RigidBody3D.init_method_get_constant_torque();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_constant_torque,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_sleeping(_sleeping) {
    RigidBody3D.init_method_set_sleeping();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_sleeping,
      this._owner,
      _sleeping
    );
    
  }
  is_sleeping() {
    RigidBody3D.init_method_is_sleeping();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_is_sleeping,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_can_sleep(_able_to_sleep) {
    RigidBody3D.init_method_set_can_sleep();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_can_sleep,
      this._owner,
      _able_to_sleep
    );
    
  }
  is_able_to_sleep() {
    RigidBody3D.init_method_is_able_to_sleep();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_is_able_to_sleep,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_lock_rotation_enabled(_lock_rotation) {
    RigidBody3D.init_method_set_lock_rotation_enabled();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_lock_rotation_enabled,
      this._owner,
      _lock_rotation
    );
    
  }
  is_lock_rotation_enabled() {
    RigidBody3D.init_method_is_lock_rotation_enabled();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_is_lock_rotation_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_freeze_enabled(_freeze_mode) {
    RigidBody3D.init_method_set_freeze_enabled();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_freeze_enabled,
      this._owner,
      _freeze_mode
    );
    
  }
  is_freeze_enabled() {
    RigidBody3D.init_method_is_freeze_enabled();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_is_freeze_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_freeze_mode(_freeze_mode) {
    RigidBody3D.init_method_set_freeze_mode();
    return _call_native_mb_no_ret(
      RigidBody3D.#_bindings.method_set_freeze_mode,
      this._owner,
      _freeze_mode
    );
    
  }
  get_freeze_mode() {
    RigidBody3D.init_method_get_freeze_mode();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_freeze_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_colliding_bodies() {
    RigidBody3D.init_method_get_colliding_bodies();
    return _call_native_mb_ret(
      RigidBody3D.#_bindings.method_get_colliding_bodies,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  
get mass () {
  return this.get_mass();
}
set mass (new_value) {
  this.set_mass(new_value);
}
get physics_material_override () {
  return this.get_physics_material_override();
}
set physics_material_override (new_value) {
  this.set_physics_material_override(new_value);
}
get gravity_scale () {
  return this.get_gravity_scale();
}
set gravity_scale (new_value) {
  this.set_gravity_scale(new_value);
}
get center_of_mass_mode () {
  return this.get_center_of_mass_mode();
}
set center_of_mass_mode (new_value) {
  this.set_center_of_mass_mode(new_value);
}
get center_of_mass () {
  return this.get_center_of_mass();
}
set center_of_mass (new_value) {
  this.set_center_of_mass(new_value);
}
get inertia () {
  return this.get_inertia();
}
set inertia (new_value) {
  this.set_inertia(new_value);
}
get sleeping () {
  return this.is_sleeping();
}
set sleeping (new_value) {
  this.set_sleeping(new_value);
}
get can_sleep () {
  return this.is_able_to_sleep();
}
set can_sleep (new_value) {
  this.set_can_sleep(new_value);
}
get lock_rotation () {
  return this.is_lock_rotation_enabled();
}
set lock_rotation (new_value) {
  this.set_lock_rotation_enabled(new_value);
}
get freeze () {
  return this.is_freeze_enabled();
}
set freeze (new_value) {
  this.set_freeze_enabled(new_value);
}
get freeze_mode () {
  return this.get_freeze_mode();
}
set freeze_mode (new_value) {
  this.set_freeze_mode(new_value);
}
get custom_integrator () {
  return this.is_using_custom_integrator();
}
set custom_integrator (new_value) {
  this.set_use_custom_integrator(new_value);
}
get continuous_cd () {
  return this.is_using_continuous_collision_detection();
}
set continuous_cd (new_value) {
  this.set_use_continuous_collision_detection(new_value);
}
get contact_monitor () {
  return this.is_contact_monitor_enabled();
}
set contact_monitor (new_value) {
  this.set_contact_monitor(new_value);
}
get max_contacts_reported () {
  return this.get_max_contacts_reported();
}
set max_contacts_reported (new_value) {
  this.set_max_contacts_reported(new_value);
}
get linear_velocity () {
  return this.get_linear_velocity();
}
set linear_velocity (new_value) {
  this.set_linear_velocity(new_value);
}
get linear_damp_mode () {
  return this.get_linear_damp_mode();
}
set linear_damp_mode (new_value) {
  this.set_linear_damp_mode(new_value);
}
get linear_damp () {
  return this.get_linear_damp();
}
set linear_damp (new_value) {
  this.set_linear_damp(new_value);
}
get angular_velocity () {
  return this.get_angular_velocity();
}
set angular_velocity (new_value) {
  this.set_angular_velocity(new_value);
}
get angular_damp_mode () {
  return this.get_angular_damp_mode();
}
set angular_damp_mode (new_value) {
  this.set_angular_damp_mode(new_value);
}
get angular_damp () {
  return this.get_angular_damp();
}
set angular_damp (new_value) {
  this.set_angular_damp(new_value);
}
get constant_force () {
  return this.get_constant_force();
}
set constant_force (new_value) {
  this.set_constant_force(new_value);
}
get constant_torque () {
  return this.get_constant_torque();
}
set constant_torque (new_value) {
  this.set_constant_torque(new_value);
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
}