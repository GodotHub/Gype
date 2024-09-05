import * as internal from '__internal__';
import { Vector2 } from '@js_godot/variant/vector2'
import { RID } from '@js_godot/variant/rid'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Callable } from '@js_godot/variant/callable'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import { PhysicsServer2D } from '@js_godot/classes/physics_server2d'
import { Transform2D } from '@js_godot/variant/transform2d'
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
export class PhysicsServer2DExtension extends PhysicsServer2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer2DExtension");
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
      let classname = new StringName("PhysicsServer2DExtension");
      let methodname = new StringName("body_test_motion_is_excluding_body");
      this._bindings.method_body_test_motion_is_excluding_body = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("PhysicsServer2DExtension");
      let methodname = new StringName("body_test_motion_is_excluding_object");
      this._bindings.method_body_test_motion_is_excluding_object = internal.classdb_get_method_bind(
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
  _segment_shape_create() {
  }
  _circle_shape_create() {
  }
  _rectangle_shape_create() {
  }
  _capsule_shape_create() {
  }
  _convex_polygon_shape_create() {
  }
  _concave_polygon_shape_create() {
  }
  _shape_set_data(_shape, _data) {
  }
  _shape_set_custom_solver_bias(_shape, _bias) {
  }
  _shape_get_type(_shape) {
  }
  _shape_get_data(_shape) {
  }
  _shape_get_custom_solver_bias(_shape) {
  }
  _shape_collide(_shape_A, _xform_A, _motion_A, _shape_B, _xform_B, _motion_B, _results, _result_max, _result_count) {
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
  _area_attach_canvas_instance_id(_area, _id) {
  }
  _area_get_canvas_instance_id(_area) {
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
  _area_set_pickable(_area, _pickable) {
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
  _body_get_shape_count(_body) {
  }
  _body_get_shape(_body, _shape_idx) {
  }
  _body_get_shape_transform(_body, _shape_idx) {
  }
  _body_set_shape_disabled(_body, _shape_idx, _disabled) {
  }
  _body_set_shape_as_one_way_collision(_body, _shape_idx, _enable, _margin) {
  }
  _body_remove_shape(_body, _shape_idx) {
  }
  _body_clear_shapes(_body) {
  }
  _body_attach_object_instance_id(_body, _id) {
  }
  _body_get_object_instance_id(_body) {
  }
  _body_attach_canvas_instance_id(_body, _id) {
  }
  _body_get_canvas_instance_id(_body) {
  }
  _body_set_continuous_collision_detection_mode(_body, _mode) {
  }
  _body_get_continuous_collision_detection_mode(_body) {
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
  _body_apply_torque_impulse(_body, _impulse) {
  }
  _body_apply_impulse(_body, _impulse, _position) {
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
  _body_collide_shape(_body, _body_shape, _shape, _shape_xform, _motion, _results, _result_max, _result_count) {
  }
  _body_set_pickable(_body, _pickable) {
  }
  _body_get_direct_state(_body) {
  }
  _body_test_motion(_body, _from, _motion, _margin, _collide_separation_ray, _recovery_as_collision, _result) {
  }
  _joint_create() {
  }
  _joint_clear(_joint) {
  }
  _joint_set_param(_joint, _param, _value) {
  }
  _joint_get_param(_joint, _param) {
  }
  _joint_disable_collisions_between_bodies(_joint, _disable) {
  }
  _joint_is_disabled_collisions_between_bodies(_joint) {
  }
  _joint_make_pin(_joint, _anchor, _body_a, _body_b) {
  }
  _joint_make_groove(_joint, _a_groove1, _a_groove2, _b_anchor, _body_a, _body_b) {
  }
  _joint_make_damped_spring(_joint, _anchor_a, _anchor_b, _body_a, _body_b) {
  }
  _pin_joint_set_flag(_joint, _flag, _enabled) {
  }
  _pin_joint_get_flag(_joint, _flag) {
  }
  _pin_joint_set_param(_joint, _param, _value) {
  }
  _pin_joint_get_param(_joint, _param) {
  }
  _damped_spring_joint_set_param(_joint, _param, _value) {
  }
  _damped_spring_joint_get_param(_joint, _param) {
  }
  _joint_get_type(_joint) {
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
    return _call_native_mb_ret(
      PhysicsServer2DExtension._bindings.method_body_test_motion_is_excluding_body,
      this._owner,
			Variant.Type.BOOL,
      _body
    );
    
  }
  body_test_motion_is_excluding_object(_object) {
    return _call_native_mb_ret(
      PhysicsServer2DExtension._bindings.method_body_test_motion_is_excluding_object,
      this._owner,
			Variant.Type.BOOL,
      _object
    );
    
  }
  


  static {
    this._init_bindings();
  }
}