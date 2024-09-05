import * as internal from '__internal__';
import { RID } from '@js_godot/variant/rid'
import { StringName } from '@js_godot/variant/string_name'
import { Transform3D } from '@js_godot/variant/transform3d'
import { Variant } from '@js_godot/variant/variant'
import { PhysicsDirectBodyState3D } from '@js_godot/classes/physics_direct_body_state3d'
import { Basis } from '@js_godot/variant/basis'
import { Vector3 } from '@js_godot/variant/vector3'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class PhysicsDirectBodyState3DExtension extends PhysicsDirectBodyState3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsDirectBodyState3DExtension");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
  }
  
  _get_total_gravity() {
  }
  _get_total_linear_damp() {
  }
  _get_total_angular_damp() {
  }
  _get_center_of_mass() {
  }
  _get_center_of_mass_local() {
  }
  _get_principal_inertia_axes() {
  }
  _get_inverse_mass() {
  }
  _get_inverse_inertia() {
  }
  _get_inverse_inertia_tensor() {
  }
  _set_linear_velocity(_velocity) {
  }
  _get_linear_velocity() {
  }
  _set_angular_velocity(_velocity) {
  }
  _get_angular_velocity() {
  }
  _set_transform(_transform) {
  }
  _get_transform() {
  }
  _get_velocity_at_local_position(_local_position) {
  }
  _apply_central_impulse(_impulse) {
  }
  _apply_impulse(_impulse, _position) {
  }
  _apply_torque_impulse(_impulse) {
  }
  _apply_central_force(_force) {
  }
  _apply_force(_force, _position) {
  }
  _apply_torque(_torque) {
  }
  _add_constant_central_force(_force) {
  }
  _add_constant_force(_force, _position) {
  }
  _add_constant_torque(_torque) {
  }
  _set_constant_force(_force) {
  }
  _get_constant_force() {
  }
  _set_constant_torque(_torque) {
  }
  _get_constant_torque() {
  }
  _set_sleep_state(_enabled) {
  }
  _is_sleeping() {
  }
  _get_contact_count() {
  }
  _get_contact_local_position(_contact_idx) {
  }
  _get_contact_local_normal(_contact_idx) {
  }
  _get_contact_impulse(_contact_idx) {
  }
  _get_contact_local_shape(_contact_idx) {
  }
  _get_contact_local_velocity_at_position(_contact_idx) {
  }
  _get_contact_collider(_contact_idx) {
  }
  _get_contact_collider_position(_contact_idx) {
  }
  _get_contact_collider_id(_contact_idx) {
  }
  _get_contact_collider_object(_contact_idx) {
  }
  _get_contact_collider_shape(_contact_idx) {
  }
  _get_contact_collider_velocity_at_position(_contact_idx) {
  }
  _get_step() {
  }
  _integrate_forces() {
  }
  _get_space_state() {
  }
  


  static {
    this._init_bindings();
  }
}