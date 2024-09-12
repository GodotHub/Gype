import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { PhysicsServer3D } from '@js_godot/classes/physics_server3d'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_body_test_motion_is_excluding_body;
  method_body_test_motion_is_excluding_object;
}
export class PhysicsServer3DExtension extends PhysicsServer3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer3DExtension");
    } else {
      super(godot_object);
    }
  }
  static init_method_body_test_motion_is_excluding_body() {
    if (!this.#_bindings.method_body_test_motion_is_excluding_body) {
      let classname = new StringName("PhysicsServer3DExtension");
      let methodname = new StringName("body_test_motion_is_excluding_body");
      this.#_bindings.method_body_test_motion_is_excluding_body = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_body_test_motion_is_excluding_object() {
    if (!this.#_bindings.method_body_test_motion_is_excluding_object) {
      let classname = new StringName("PhysicsServer3DExtension");
      let methodname = new StringName("body_test_motion_is_excluding_object");
      this.#_bindings.method_body_test_motion_is_excluding_object = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }

  
  
  _world_boundary_shape_create() {
  }
  _separation_ray_shape_create() {
  }
  _sphere_shape_create() {
  }
  _box_shape_create() {
  }
  _capsule_shape_create() {
  }
  _cylinder_shape_create() {
  }
  _convex_polygon_shape_create() {
  }
  _concave_polygon_shape_create() {
  }
  _heightmap_shape_create() {
  }
  _custom_shape_create() {
  }
  _shape_set_data(_shape, _data) {
  }
  _shape_set_custom_solver_bias(_shape, _bias) {
  }
  _shape_set_margin(_shape, _margin) {
  }
  _shape_get_margin(_shape) {
  }
  _shape_get_type(_shape) {
  }
  _shape_get_data(_shape) {
  }
  _shape_get_custom_solver_bias(_shape) {
  }
  _space_create() {
  }
  _space_set_active(_space, _active) {
  }
  _space_is_active(_space) {
  }
  _space_set_param(_space, _param, _value) {
  }
  _space_get_param(_space, _param) {
  }
  _space_get_direct_state(_space) {
  }
  _space_set_debug_contacts(_space, _max_contacts) {
  }
  _space_get_contacts(_space) {
  }
  _space_get_contact_count(_space) {
  }
  _area_create() {
  }
  _area_set_space(_area, _space) {
  }
  _area_get_space(_area) {
  }
  _area_add_shape(_area, _shape, _transform, _disabled) {
  }
  _area_set_shape(_area, _shape_idx, _shape) {
  }
  _area_set_shape_transform(_area, _shape_idx, _transform) {
  }
  _area_set_shape_disabled(_area, _shape_idx, _disabled) {
  }
  _area_get_shape_count(_area) {
  }
  _area_get_shape(_area, _shape_idx) {
  }
  _area_get_shape_transform(_area, _shape_idx) {
  }
  _area_remove_shape(_area, _shape_idx) {
  }
  _area_clear_shapes(_area) {
  }
  _area_attach_object_instance_id(_area, _id) {
  }
  _area_get_object_instance_id(_area) {
  }
  _area_set_param(_area, _param, _value) {
  }
  _area_set_transform(_area, _transform) {
  }
  _area_get_param(_area, _param) {
  }
  _area_get_transform(_area) {
  }
  _area_set_collision_layer(_area, _layer) {
  }
  _area_get_collision_layer(_area) {
  }
  _area_set_collision_mask(_area, _mask) {
  }
  _area_get_collision_mask(_area) {
  }
  _area_set_monitorable(_area, _monitorable) {
  }
  _area_set_ray_pickable(_area, _enable) {
  }
  _area_set_monitor_callback(_area, _callback) {
  }
  _area_set_area_monitor_callback(_area, _callback) {
  }
  _body_create() {
  }
  _body_set_space(_body, _space) {
  }
  _body_get_space(_body) {
  }
  _body_set_mode(_body, _mode) {
  }
  _body_get_mode(_body) {
  }
  _body_add_shape(_body, _shape, _transform, _disabled) {
  }
  _body_set_shape(_body, _shape_idx, _shape) {
  }
  _body_set_shape_transform(_body, _shape_idx, _transform) {
  }
  _body_set_shape_disabled(_body, _shape_idx, _disabled) {
  }
  _body_get_shape_count(_body) {
  }
  _body_get_shape(_body, _shape_idx) {
  }
  _body_get_shape_transform(_body, _shape_idx) {
  }
  _body_remove_shape(_body, _shape_idx) {
  }
  _body_clear_shapes(_body) {
  }
  _body_attach_object_instance_id(_body, _id) {
  }
  _body_get_object_instance_id(_body) {
  }
  _body_set_enable_continuous_collision_detection(_body, _enable) {
  }
  _body_is_continuous_collision_detection_enabled(_body) {
  }
  _body_set_collision_layer(_body, _layer) {
  }
  _body_get_collision_layer(_body) {
  }
  _body_set_collision_mask(_body, _mask) {
  }
  _body_get_collision_mask(_body) {
  }
  _body_set_collision_priority(_body, _priority) {
  }
  _body_get_collision_priority(_body) {
  }
  _body_set_user_flags(_body, _flags) {
  }
  _body_get_user_flags(_body) {
  }
  _body_set_param(_body, _param, _value) {
  }
  _body_get_param(_body, _param) {
  }
  _body_reset_mass_properties(_body) {
  }
  _body_set_state(_body, _state, _value) {
  }
  _body_get_state(_body, _state) {
  }
  _body_apply_central_impulse(_body, _impulse) {
  }
  _body_apply_impulse(_body, _impulse, _position) {
  }
  _body_apply_torque_impulse(_body, _impulse) {
  }
  _body_apply_central_force(_body, _force) {
  }
  _body_apply_force(_body, _force, _position) {
  }
  _body_apply_torque(_body, _torque) {
  }
  _body_add_constant_central_force(_body, _force) {
  }
  _body_add_constant_force(_body, _force, _position) {
  }
  _body_add_constant_torque(_body, _torque) {
  }
  _body_set_constant_force(_body, _force) {
  }
  _body_get_constant_force(_body) {
  }
  _body_set_constant_torque(_body, _torque) {
  }
  _body_get_constant_torque(_body) {
  }
  _body_set_axis_velocity(_body, _axis_velocity) {
  }
  _body_set_axis_lock(_body, _axis, _lock) {
  }
  _body_is_axis_locked(_body, _axis) {
  }
  _body_add_collision_exception(_body, _excepted_body) {
  }
  _body_remove_collision_exception(_body, _excepted_body) {
  }
  _body_get_collision_exceptions(_body) {
  }
  _body_set_max_contacts_reported(_body, _amount) {
  }
  _body_get_max_contacts_reported(_body) {
  }
  _body_set_contacts_reported_depth_threshold(_body, _threshold) {
  }
  _body_get_contacts_reported_depth_threshold(_body) {
  }
  _body_set_omit_force_integration(_body, _enable) {
  }
  _body_is_omitting_force_integration(_body) {
  }
  _body_set_state_sync_callback(_body, _callable) {
  }
  _body_set_force_integration_callback(_body, _callable, _userdata) {
  }
  _body_set_ray_pickable(_body, _enable) {
  }
  _body_test_motion(_body, _from, _motion, _margin, _max_collisions, _collide_separation_ray, _recovery_as_collision, _result) {
  }
  _body_get_direct_state(_body) {
  }
  _soft_body_create() {
  }
  _soft_body_update_rendering_server(_body, _rendering_server_handler) {
  }
  _soft_body_set_space(_body, _space) {
  }
  _soft_body_get_space(_body) {
  }
  _soft_body_set_ray_pickable(_body, _enable) {
  }
  _soft_body_set_collision_layer(_body, _layer) {
  }
  _soft_body_get_collision_layer(_body) {
  }
  _soft_body_set_collision_mask(_body, _mask) {
  }
  _soft_body_get_collision_mask(_body) {
  }
  _soft_body_add_collision_exception(_body, _body_b) {
  }
  _soft_body_remove_collision_exception(_body, _body_b) {
  }
  _soft_body_get_collision_exceptions(_body) {
  }
  _soft_body_set_state(_body, _state, _variant) {
  }
  _soft_body_get_state(_body, _state) {
  }
  _soft_body_set_transform(_body, _transform) {
  }
  _soft_body_set_simulation_precision(_body, _simulation_precision) {
  }
  _soft_body_get_simulation_precision(_body) {
  }
  _soft_body_set_total_mass(_body, _total_mass) {
  }
  _soft_body_get_total_mass(_body) {
  }
  _soft_body_set_linear_stiffness(_body, _linear_stiffness) {
  }
  _soft_body_get_linear_stiffness(_body) {
  }
  _soft_body_set_pressure_coefficient(_body, _pressure_coefficient) {
  }
  _soft_body_get_pressure_coefficient(_body) {
  }
  _soft_body_set_damping_coefficient(_body, _damping_coefficient) {
  }
  _soft_body_get_damping_coefficient(_body) {
  }
  _soft_body_set_drag_coefficient(_body, _drag_coefficient) {
  }
  _soft_body_get_drag_coefficient(_body) {
  }
  _soft_body_set_mesh(_body, _mesh) {
  }
  _soft_body_get_bounds(_body) {
  }
  _soft_body_move_point(_body, _point_index, _global_position) {
  }
  _soft_body_get_point_global_position(_body, _point_index) {
  }
  _soft_body_remove_all_pinned_points(_body) {
  }
  _soft_body_pin_point(_body, _point_index, _pin) {
  }
  _soft_body_is_point_pinned(_body, _point_index) {
  }
  _joint_create() {
  }
  _joint_clear(_joint) {
  }
  _joint_make_pin(_joint, _body_A, _local_A, _body_B, _local_B) {
  }
  _pin_joint_set_param(_joint, _param, _value) {
  }
  _pin_joint_get_param(_joint, _param) {
  }
  _pin_joint_set_local_a(_joint, _local_A) {
  }
  _pin_joint_get_local_a(_joint) {
  }
  _pin_joint_set_local_b(_joint, _local_B) {
  }
  _pin_joint_get_local_b(_joint) {
  }
  _joint_make_hinge(_joint, _body_A, _hinge_A, _body_B, _hinge_B) {
  }
  _joint_make_hinge_simple(_joint, _body_A, _pivot_A, _axis_A, _body_B, _pivot_B, _axis_B) {
  }
  _hinge_joint_set_param(_joint, _param, _value) {
  }
  _hinge_joint_get_param(_joint, _param) {
  }
  _hinge_joint_set_flag(_joint, _flag, _enabled) {
  }
  _hinge_joint_get_flag(_joint, _flag) {
  }
  _joint_make_slider(_joint, _body_A, _local_ref_A, _body_B, _local_ref_B) {
  }
  _slider_joint_set_param(_joint, _param, _value) {
  }
  _slider_joint_get_param(_joint, _param) {
  }
  _joint_make_cone_twist(_joint, _body_A, _local_ref_A, _body_B, _local_ref_B) {
  }
  _cone_twist_joint_set_param(_joint, _param, _value) {
  }
  _cone_twist_joint_get_param(_joint, _param) {
  }
  _joint_make_generic_6dof(_joint, _body_A, _local_ref_A, _body_B, _local_ref_B) {
  }
  _generic_6dof_joint_set_param(_joint, _axis, _param, _value) {
  }
  _generic_6dof_joint_get_param(_joint, _axis, _param) {
  }
  _generic_6dof_joint_set_flag(_joint, _axis, _flag, _enable) {
  }
  _generic_6dof_joint_get_flag(_joint, _axis, _flag) {
  }
  _joint_get_type(_joint) {
  }
  _joint_set_solver_priority(_joint, _priority) {
  }
  _joint_get_solver_priority(_joint) {
  }
  _joint_disable_collisions_between_bodies(_joint, _disable) {
  }
  _joint_is_disabled_collisions_between_bodies(_joint) {
  }
  _free_rid(_rid) {
  }
  _set_active(_active) {
  }
  _init() {
  }
  _step(_step) {
  }
  _sync() {
  }
  _flush_queries() {
  }
  _end_sync() {
  }
  _finish() {
  }
  _is_flushing_queries() {
  }
  _get_process_info(_process_info) {
  }
  body_test_motion_is_excluding_body(_body) {
    PhysicsServer3DExtension.init_method_body_test_motion_is_excluding_body();
    return _call_native_mb_ret(
      PhysicsServer3DExtension.#_bindings.method_body_test_motion_is_excluding_body,
      this._owner,
			Variant.Type.BOOL,
    
      _body
    );
    
  }
  body_test_motion_is_excluding_object(_object) {
    PhysicsServer3DExtension.init_method_body_test_motion_is_excluding_object();
    return _call_native_mb_ret(
      PhysicsServer3DExtension.#_bindings.method_body_test_motion_is_excluding_object,
      this._owner,
			Variant.Type.BOOL,
    
      _object
    );
    
  }
  

}