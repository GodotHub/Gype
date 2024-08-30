import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform2D } from 'src/js_godot/variant/transform2d'
import { Callable } from 'src/js_godot/variant/callable'
import { Variant } from 'src/js_godot/variant/variant'
import { RID } from 'src/js_godot/variant/rid'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_world_boundary_shape_create;
    method_separation_ray_shape_create;
    method_segment_shape_create;
    method_circle_shape_create;
    method_rectangle_shape_create;
    method_capsule_shape_create;
    method_convex_polygon_shape_create;
    method_concave_polygon_shape_create;
    method_shape_set_data;
    method_shape_get_type;
    method_shape_get_data;
    method_space_create;
    method_space_set_active;
    method_space_is_active;
    method_space_set_param;
    method_space_get_param;
    method_space_get_direct_state;
    method_area_create;
    method_area_set_space;
    method_area_get_space;
    method_area_add_shape;
    method_area_set_shape;
    method_area_set_shape_transform;
    method_area_set_shape_disabled;
    method_area_get_shape_count;
    method_area_get_shape;
    method_area_get_shape_transform;
    method_area_remove_shape;
    method_area_clear_shapes;
    method_area_set_collision_layer;
    method_area_get_collision_layer;
    method_area_set_collision_mask;
    method_area_get_collision_mask;
    method_area_set_param;
    method_area_set_transform;
    method_area_get_param;
    method_area_get_transform;
    method_area_attach_object_instance_id;
    method_area_get_object_instance_id;
    method_area_attach_canvas_instance_id;
    method_area_get_canvas_instance_id;
    method_area_set_monitor_callback;
    method_area_set_area_monitor_callback;
    method_area_set_monitorable;
    method_body_create;
    method_body_set_space;
    method_body_get_space;
    method_body_set_mode;
    method_body_get_mode;
    method_body_add_shape;
    method_body_set_shape;
    method_body_set_shape_transform;
    method_body_get_shape_count;
    method_body_get_shape;
    method_body_get_shape_transform;
    method_body_remove_shape;
    method_body_clear_shapes;
    method_body_set_shape_disabled;
    method_body_set_shape_as_one_way_collision;
    method_body_attach_object_instance_id;
    method_body_get_object_instance_id;
    method_body_attach_canvas_instance_id;
    method_body_get_canvas_instance_id;
    method_body_set_continuous_collision_detection_mode;
    method_body_get_continuous_collision_detection_mode;
    method_body_set_collision_layer;
    method_body_get_collision_layer;
    method_body_set_collision_mask;
    method_body_get_collision_mask;
    method_body_set_collision_priority;
    method_body_get_collision_priority;
    method_body_set_param;
    method_body_get_param;
    method_body_reset_mass_properties;
    method_body_set_state;
    method_body_get_state;
    method_body_apply_central_impulse;
    method_body_apply_torque_impulse;
    method_body_apply_impulse;
    method_body_apply_central_force;
    method_body_apply_force;
    method_body_apply_torque;
    method_body_add_constant_central_force;
    method_body_add_constant_force;
    method_body_add_constant_torque;
    method_body_set_constant_force;
    method_body_get_constant_force;
    method_body_set_constant_torque;
    method_body_get_constant_torque;
    method_body_set_axis_velocity;
    method_body_add_collision_exception;
    method_body_remove_collision_exception;
    method_body_set_max_contacts_reported;
    method_body_get_max_contacts_reported;
    method_body_set_omit_force_integration;
    method_body_is_omitting_force_integration;
    method_body_set_state_sync_callback;
    method_body_set_force_integration_callback;
    method_body_test_motion;
    method_body_get_direct_state;
    method_joint_create;
    method_joint_clear;
    method_joint_set_param;
    method_joint_get_param;
    method_joint_disable_collisions_between_bodies;
    method_joint_is_disabled_collisions_between_bodies;
    method_joint_make_pin;
    method_joint_make_groove;
    method_joint_make_damped_spring;
    method_pin_joint_set_flag;
    method_pin_joint_get_flag;
    method_pin_joint_set_param;
    method_pin_joint_get_param;
    method_damped_spring_joint_set_param;
    method_damped_spring_joint_get_param;
    method_joint_get_type;
    method_free_rid;
    method_set_active;
    method_get_process_info;
}

export const PhysicsServer2D = new _PhysicsServer2D();

class _PhysicsServer2D extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("world_boundary_shape_create");
        this._bindings.method_world_boundary_shape_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("separation_ray_shape_create");
        this._bindings.method_separation_ray_shape_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("segment_shape_create");
        this._bindings.method_segment_shape_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("circle_shape_create");
        this._bindings.method_circle_shape_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("rectangle_shape_create");
        this._bindings.method_rectangle_shape_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("capsule_shape_create");
        this._bindings.method_capsule_shape_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("convex_polygon_shape_create");
        this._bindings.method_convex_polygon_shape_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("concave_polygon_shape_create");
        this._bindings.method_concave_polygon_shape_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("shape_set_data");
        this._bindings.method_shape_set_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3175752987
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("shape_get_type");
        this._bindings.method_shape_get_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1240598777
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("shape_get_data");
        this._bindings.method_shape_get_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4171304767
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("space_create");
        this._bindings.method_space_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("space_set_active");
        this._bindings.method_space_set_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("space_is_active");
        this._bindings.method_space_is_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("space_set_param");
        this._bindings.method_space_set_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          949194586
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("space_get_param");
        this._bindings.method_space_get_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          874111783
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("space_get_direct_state");
        this._bindings.method_space_get_direct_state = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3160173886
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_create");
        this._bindings.method_area_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_space");
        this._bindings.method_area_set_space = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_space");
        this._bindings.method_area_get_space = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814569979
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_add_shape");
        this._bindings.method_area_add_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          339056240
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_shape");
        this._bindings.method_area_set_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2310537182
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_shape_transform");
        this._bindings.method_area_set_shape_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          736082694
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_shape_disabled");
        this._bindings.method_area_set_shape_disabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2658558584
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_shape_count");
        this._bindings.method_area_get_shape_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_shape");
        this._bindings.method_area_get_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1066463050
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_shape_transform");
        this._bindings.method_area_get_shape_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1324854622
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_remove_shape");
        this._bindings.method_area_remove_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_clear_shapes");
        this._bindings.method_area_clear_shapes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_collision_layer");
        this._bindings.method_area_set_collision_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_collision_layer");
        this._bindings.method_area_get_collision_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_collision_mask");
        this._bindings.method_area_set_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_collision_mask");
        this._bindings.method_area_get_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_param");
        this._bindings.method_area_set_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1257146028
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_transform");
        this._bindings.method_area_set_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1246044741
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_param");
        this._bindings.method_area_get_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3047435120
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_transform");
        this._bindings.method_area_get_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          213527486
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_attach_object_instance_id");
        this._bindings.method_area_attach_object_instance_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_object_instance_id");
        this._bindings.method_area_get_object_instance_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_attach_canvas_instance_id");
        this._bindings.method_area_attach_canvas_instance_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_get_canvas_instance_id");
        this._bindings.method_area_get_canvas_instance_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_monitor_callback");
        this._bindings.method_area_set_monitor_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3379118538
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_area_monitor_callback");
        this._bindings.method_area_set_area_monitor_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3379118538
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("area_set_monitorable");
        this._bindings.method_area_set_monitorable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_create");
        this._bindings.method_body_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_space");
        this._bindings.method_body_set_space = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_space");
        this._bindings.method_body_get_space = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3814569979
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_mode");
        this._bindings.method_body_set_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1658067650
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_mode");
        this._bindings.method_body_get_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3261702585
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_add_shape");
        this._bindings.method_body_add_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          339056240
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_shape");
        this._bindings.method_body_set_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2310537182
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_shape_transform");
        this._bindings.method_body_set_shape_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          736082694
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_shape_count");
        this._bindings.method_body_get_shape_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_shape");
        this._bindings.method_body_get_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1066463050
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_shape_transform");
        this._bindings.method_body_get_shape_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1324854622
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_remove_shape");
        this._bindings.method_body_remove_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_clear_shapes");
        this._bindings.method_body_clear_shapes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_shape_disabled");
        this._bindings.method_body_set_shape_disabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2658558584
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_shape_as_one_way_collision");
        this._bindings.method_body_set_shape_as_one_way_collision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2556489974
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_attach_object_instance_id");
        this._bindings.method_body_attach_object_instance_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_object_instance_id");
        this._bindings.method_body_get_object_instance_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_attach_canvas_instance_id");
        this._bindings.method_body_attach_canvas_instance_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_canvas_instance_id");
        this._bindings.method_body_get_canvas_instance_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_continuous_collision_detection_mode");
        this._bindings.method_body_set_continuous_collision_detection_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1882257015
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_continuous_collision_detection_mode");
        this._bindings.method_body_get_continuous_collision_detection_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2661282217
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_collision_layer");
        this._bindings.method_body_set_collision_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_collision_layer");
        this._bindings.method_body_get_collision_layer = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_collision_mask");
        this._bindings.method_body_set_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_collision_mask");
        this._bindings.method_body_get_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_collision_priority");
        this._bindings.method_body_set_collision_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_collision_priority");
        this._bindings.method_body_get_collision_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_param");
        this._bindings.method_body_set_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2715630609
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_param");
        this._bindings.method_body_get_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3208033526
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_reset_mass_properties");
        this._bindings.method_body_reset_mass_properties = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_state");
        this._bindings.method_body_set_state = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1706355209
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_state");
        this._bindings.method_body_get_state = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4036367961
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_apply_central_impulse");
        this._bindings.method_body_apply_central_impulse = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_apply_torque_impulse");
        this._bindings.method_body_apply_torque_impulse = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_apply_impulse");
        this._bindings.method_body_apply_impulse = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          205485391
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_apply_central_force");
        this._bindings.method_body_apply_central_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_apply_force");
        this._bindings.method_body_apply_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          205485391
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_apply_torque");
        this._bindings.method_body_apply_torque = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_add_constant_central_force");
        this._bindings.method_body_add_constant_central_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_add_constant_force");
        this._bindings.method_body_add_constant_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          205485391
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_add_constant_torque");
        this._bindings.method_body_add_constant_torque = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_constant_force");
        this._bindings.method_body_set_constant_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_constant_force");
        this._bindings.method_body_get_constant_force = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2440833711
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_constant_torque");
        this._bindings.method_body_set_constant_torque = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1794382983
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_constant_torque");
        this._bindings.method_body_get_constant_torque = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          866169185
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_axis_velocity");
        this._bindings.method_body_set_axis_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3201125042
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_add_collision_exception");
        this._bindings.method_body_add_collision_exception = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_remove_collision_exception");
        this._bindings.method_body_remove_collision_exception = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          395945892
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_max_contacts_reported");
        this._bindings.method_body_set_max_contacts_reported = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3411492887
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_max_contacts_reported");
        this._bindings.method_body_get_max_contacts_reported = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2198884583
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_omit_force_integration");
        this._bindings.method_body_set_omit_force_integration = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_is_omitting_force_integration");
        this._bindings.method_body_is_omitting_force_integration = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_state_sync_callback");
        this._bindings.method_body_set_state_sync_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3379118538
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_set_force_integration_callback");
        this._bindings.method_body_set_force_integration_callback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3059434249
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_test_motion");
        this._bindings.method_body_test_motion = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1699844009
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("body_get_direct_state");
        this._bindings.method_body_get_direct_state = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1191931871
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_create");
        this._bindings.method_joint_create = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          529393457
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_clear");
        this._bindings.method_joint_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_set_param");
        this._bindings.method_joint_set_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3972556514
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_get_param");
        this._bindings.method_joint_get_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4016448949
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_disable_collisions_between_bodies");
        this._bindings.method_joint_disable_collisions_between_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1265174801
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_is_disabled_collisions_between_bodies");
        this._bindings.method_joint_is_disabled_collisions_between_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4155700596
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_make_pin");
        this._bindings.method_joint_make_pin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1612646186
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_make_groove");
        this._bindings.method_joint_make_groove = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          481430435
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_make_damped_spring");
        this._bindings.method_joint_make_damped_spring = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1994657646
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("pin_joint_set_flag");
        this._bindings.method_pin_joint_set_flag = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3520002352
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("pin_joint_get_flag");
        this._bindings.method_pin_joint_get_flag = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2647867364
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("pin_joint_set_param");
        this._bindings.method_pin_joint_set_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          550574241
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("pin_joint_get_param");
        this._bindings.method_pin_joint_get_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          348281383
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("damped_spring_joint_set_param");
        this._bindings.method_damped_spring_joint_set_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          220564071
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("damped_spring_joint_get_param");
        this._bindings.method_damped_spring_joint_get_param = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2075871277
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("joint_get_type");
        this._bindings.method_joint_get_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4262502231
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("free_rid");
        this._bindings.method_free_rid = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("set_active");
        this._bindings.method_set_active = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PhysicsServer2D");
        let methodname = new StringName("get_process_info");
        this._bindings.method_get_process_info = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          576496006
        );
      }
  }
  world_boundary_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_world_boundary_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  separation_ray_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_separation_ray_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  segment_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_segment_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  circle_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_circle_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  rectangle_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_rectangle_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  capsule_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_capsule_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  convex_polygon_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_convex_polygon_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  concave_polygon_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_concave_polygon_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  shape_set_data(_shape, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shape_set_data,
      this._owner,
      _shape, _data
    );
    
  }
  shape_get_type(_shape) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shape_get_type,
      this._owner,
			Variant.INT,
      _shape
    );
    
  }
  shape_get_data(_shape) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shape_get_data,
      this._owner,
			Variant.Type.VARIANT
    ,
      _shape
    );
    
  }
  space_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_space_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  space_set_active(_space, _active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_space_set_active,
      this._owner,
      _space, _active
    );
    
  }
  space_is_active(_space) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_space_is_active,
      this._owner,
			Variant.Type.BOOL,
      _space
    );
    
  }
  space_set_param(_space, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_space_set_param,
      this._owner,
      _space, _param, _value
    );
    
  }
  space_get_param(_space, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_space_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _space, _param
    );
    
  }
  space_get_direct_state(_space) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_space_get_direct_state,
      this._owner,
			Variant.INT,
      _space
    );
    
  }
  area_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  area_set_space(_area, _space) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_space,
      this._owner,
      _area, _space
    );
    
  }
  area_get_space(_area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_space,
      this._owner,
			Variant.Type.RID
    ,
      _area
    );
    
  }
  area_add_shape(_area, _shape, _transform, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_add_shape,
      this._owner,
      _area, _shape, _transform, _disabled
    );
    
  }
  area_set_shape(_area, _shape_idx, _shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_shape,
      this._owner,
      _area, _shape_idx, _shape
    );
    
  }
  area_set_shape_transform(_area, _shape_idx, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_shape_transform,
      this._owner,
      _area, _shape_idx, _transform
    );
    
  }
  area_set_shape_disabled(_area, _shape_idx, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_shape_disabled,
      this._owner,
      _area, _shape_idx, _disabled
    );
    
  }
  area_get_shape_count(_area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_shape_count,
      this._owner,
			Variant.Type.INT,
      _area
    );
    
  }
  area_get_shape(_area, _shape_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_shape,
      this._owner,
			Variant.Type.RID
    ,
      _area, _shape_idx
    );
    
  }
  area_get_shape_transform(_area, _shape_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_shape_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      _area, _shape_idx
    );
    
  }
  area_remove_shape(_area, _shape_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_remove_shape,
      this._owner,
      _area, _shape_idx
    );
    
  }
  area_clear_shapes(_area) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_clear_shapes,
      this._owner,
      _area
    );
    
  }
  area_set_collision_layer(_area, _layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_collision_layer,
      this._owner,
      _area, _layer
    );
    
  }
  area_get_collision_layer(_area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_collision_layer,
      this._owner,
			Variant.Type.INT,
      _area
    );
    
  }
  area_set_collision_mask(_area, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_collision_mask,
      this._owner,
      _area, _mask
    );
    
  }
  area_get_collision_mask(_area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      _area
    );
    
  }
  area_set_param(_area, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_param,
      this._owner,
      _area, _param, _value
    );
    
  }
  area_set_transform(_area, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_transform,
      this._owner,
      _area, _transform
    );
    
  }
  area_get_param(_area, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_param,
      this._owner,
			Variant.Type.VARIANT
    ,
      _area, _param
    );
    
  }
  area_get_transform(_area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      _area
    );
    
  }
  area_attach_object_instance_id(_area, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_attach_object_instance_id,
      this._owner,
      _area, _id
    );
    
  }
  area_get_object_instance_id(_area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_object_instance_id,
      this._owner,
			Variant.Type.INT,
      _area
    );
    
  }
  area_attach_canvas_instance_id(_area, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_attach_canvas_instance_id,
      this._owner,
      _area, _id
    );
    
  }
  area_get_canvas_instance_id(_area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_area_get_canvas_instance_id,
      this._owner,
			Variant.Type.INT,
      _area
    );
    
  }
  area_set_monitor_callback(_area, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_monitor_callback,
      this._owner,
      _area, _callback
    );
    
  }
  area_set_area_monitor_callback(_area, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_area_monitor_callback,
      this._owner,
      _area, _callback
    );
    
  }
  area_set_monitorable(_area, _monitorable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_monitorable,
      this._owner,
      _area, _monitorable
    );
    
  }
  body_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  body_set_space(_body, _space) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_space,
      this._owner,
      _body, _space
    );
    
  }
  body_get_space(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_space,
      this._owner,
			Variant.Type.RID
    ,
      _body
    );
    
  }
  body_set_mode(_body, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_mode,
      this._owner,
      _body, _mode
    );
    
  }
  body_get_mode(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_mode,
      this._owner,
			Variant.INT,
      _body
    );
    
  }
  body_add_shape(_body, _shape, _transform, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_add_shape,
      this._owner,
      _body, _shape, _transform, _disabled
    );
    
  }
  body_set_shape(_body, _shape_idx, _shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_shape,
      this._owner,
      _body, _shape_idx, _shape
    );
    
  }
  body_set_shape_transform(_body, _shape_idx, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_shape_transform,
      this._owner,
      _body, _shape_idx, _transform
    );
    
  }
  body_get_shape_count(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_shape_count,
      this._owner,
			Variant.Type.INT,
      _body
    );
    
  }
  body_get_shape(_body, _shape_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_shape,
      this._owner,
			Variant.Type.RID
    ,
      _body, _shape_idx
    );
    
  }
  body_get_shape_transform(_body, _shape_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_shape_transform,
      this._owner,
			Variant.Type.TRANSFORM2D
    ,
      _body, _shape_idx
    );
    
  }
  body_remove_shape(_body, _shape_idx) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_remove_shape,
      this._owner,
      _body, _shape_idx
    );
    
  }
  body_clear_shapes(_body) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_clear_shapes,
      this._owner,
      _body
    );
    
  }
  body_set_shape_disabled(_body, _shape_idx, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_shape_disabled,
      this._owner,
      _body, _shape_idx, _disabled
    );
    
  }
  body_set_shape_as_one_way_collision(_body, _shape_idx, _enable, _margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_shape_as_one_way_collision,
      this._owner,
      _body, _shape_idx, _enable, _margin
    );
    
  }
  body_attach_object_instance_id(_body, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_attach_object_instance_id,
      this._owner,
      _body, _id
    );
    
  }
  body_get_object_instance_id(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_object_instance_id,
      this._owner,
			Variant.Type.INT,
      _body
    );
    
  }
  body_attach_canvas_instance_id(_body, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_attach_canvas_instance_id,
      this._owner,
      _body, _id
    );
    
  }
  body_get_canvas_instance_id(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_canvas_instance_id,
      this._owner,
			Variant.Type.INT,
      _body
    );
    
  }
  body_set_continuous_collision_detection_mode(_body, _mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_continuous_collision_detection_mode,
      this._owner,
      _body, _mode
    );
    
  }
  body_get_continuous_collision_detection_mode(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_continuous_collision_detection_mode,
      this._owner,
			Variant.INT,
      _body
    );
    
  }
  body_set_collision_layer(_body, _layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_collision_layer,
      this._owner,
      _body, _layer
    );
    
  }
  body_get_collision_layer(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_collision_layer,
      this._owner,
			Variant.Type.INT,
      _body
    );
    
  }
  body_set_collision_mask(_body, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_collision_mask,
      this._owner,
      _body, _mask
    );
    
  }
  body_get_collision_mask(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      _body
    );
    
  }
  body_set_collision_priority(_body, _priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_collision_priority,
      this._owner,
      _body, _priority
    );
    
  }
  body_get_collision_priority(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_collision_priority,
      this._owner,
			Variant.Type.FLOAT,
      _body
    );
    
  }
  body_set_param(_body, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_param,
      this._owner,
      _body, _param, _value
    );
    
  }
  body_get_param(_body, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_param,
      this._owner,
			Variant.Type.VARIANT
    ,
      _body, _param
    );
    
  }
  body_reset_mass_properties(_body) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_reset_mass_properties,
      this._owner,
      _body
    );
    
  }
  body_set_state(_body, _state, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_state,
      this._owner,
      _body, _state, _value
    );
    
  }
  body_get_state(_body, _state) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_state,
      this._owner,
			Variant.Type.VARIANT
    ,
      _body, _state
    );
    
  }
  body_apply_central_impulse(_body, _impulse) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_apply_central_impulse,
      this._owner,
      _body, _impulse
    );
    
  }
  body_apply_torque_impulse(_body, _impulse) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_apply_torque_impulse,
      this._owner,
      _body, _impulse
    );
    
  }
  body_apply_impulse(_body, _impulse, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_apply_impulse,
      this._owner,
      _body, _impulse, _position
    );
    
  }
  body_apply_central_force(_body, _force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_apply_central_force,
      this._owner,
      _body, _force
    );
    
  }
  body_apply_force(_body, _force, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_apply_force,
      this._owner,
      _body, _force, _position
    );
    
  }
  body_apply_torque(_body, _torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_apply_torque,
      this._owner,
      _body, _torque
    );
    
  }
  body_add_constant_central_force(_body, _force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_add_constant_central_force,
      this._owner,
      _body, _force
    );
    
  }
  body_add_constant_force(_body, _force, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_add_constant_force,
      this._owner,
      _body, _force, _position
    );
    
  }
  body_add_constant_torque(_body, _torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_add_constant_torque,
      this._owner,
      _body, _torque
    );
    
  }
  body_set_constant_force(_body, _force) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_constant_force,
      this._owner,
      _body, _force
    );
    
  }
  body_get_constant_force(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_constant_force,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _body
    );
    
  }
  body_set_constant_torque(_body, _torque) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_constant_torque,
      this._owner,
      _body, _torque
    );
    
  }
  body_get_constant_torque(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_constant_torque,
      this._owner,
			Variant.Type.FLOAT,
      _body
    );
    
  }
  body_set_axis_velocity(_body, _axis_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_axis_velocity,
      this._owner,
      _body, _axis_velocity
    );
    
  }
  body_add_collision_exception(_body, _excepted_body) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_add_collision_exception,
      this._owner,
      _body, _excepted_body
    );
    
  }
  body_remove_collision_exception(_body, _excepted_body) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_remove_collision_exception,
      this._owner,
      _body, _excepted_body
    );
    
  }
  body_set_max_contacts_reported(_body, _amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_max_contacts_reported,
      this._owner,
      _body, _amount
    );
    
  }
  body_get_max_contacts_reported(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_max_contacts_reported,
      this._owner,
			Variant.Type.INT,
      _body
    );
    
  }
  body_set_omit_force_integration(_body, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_omit_force_integration,
      this._owner,
      _body, _enable
    );
    
  }
  body_is_omitting_force_integration(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_is_omitting_force_integration,
      this._owner,
			Variant.Type.BOOL,
      _body
    );
    
  }
  body_set_state_sync_callback(_body, _callable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_state_sync_callback,
      this._owner,
      _body, _callable
    );
    
  }
  body_set_force_integration_callback(_body, _callable, _userdata) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_force_integration_callback,
      this._owner,
      _body, _callable, _userdata
    );
    
  }
  body_test_motion(_body, _parameters, _result) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_test_motion,
      this._owner,
			Variant.Type.BOOL,
      _body, _parameters, _result
    );
    
  }
  body_get_direct_state(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_get_direct_state,
      this._owner,
			Variant.INT,
      _body
    );
    
  }
  joint_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_joint_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  joint_clear(_joint) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_clear,
      this._owner,
      _joint
    );
    
  }
  joint_set_param(_joint, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_set_param,
      this._owner,
      _joint, _param, _value
    );
    
  }
  joint_get_param(_joint, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_joint_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _joint, _param
    );
    
  }
  joint_disable_collisions_between_bodies(_joint, _disable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_disable_collisions_between_bodies,
      this._owner,
      _joint, _disable
    );
    
  }
  joint_is_disabled_collisions_between_bodies(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_joint_is_disabled_collisions_between_bodies,
      this._owner,
			Variant.Type.BOOL,
      _joint
    );
    
  }
  joint_make_pin(_joint, _anchor, _body_a, _body_b) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_make_pin,
      this._owner,
      _joint, _anchor, _body_a, _body_b
    );
    
  }
  joint_make_groove(_joint, _groove1_a, _groove2_a, _anchor_b, _body_a, _body_b) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_make_groove,
      this._owner,
      _joint, _groove1_a, _groove2_a, _anchor_b, _body_a, _body_b
    );
    
  }
  joint_make_damped_spring(_joint, _anchor_a, _anchor_b, _body_a, _body_b) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_make_damped_spring,
      this._owner,
      _joint, _anchor_a, _anchor_b, _body_a, _body_b
    );
    
  }
  pin_joint_set_flag(_joint, _flag, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_pin_joint_set_flag,
      this._owner,
      _joint, _flag, _enabled
    );
    
  }
  pin_joint_get_flag(_joint, _flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_pin_joint_get_flag,
      this._owner,
			Variant.Type.BOOL,
      _joint, _flag
    );
    
  }
  pin_joint_set_param(_joint, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_pin_joint_set_param,
      this._owner,
      _joint, _param, _value
    );
    
  }
  pin_joint_get_param(_joint, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_pin_joint_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _joint, _param
    );
    
  }
  damped_spring_joint_set_param(_joint, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_damped_spring_joint_set_param,
      this._owner,
      _joint, _param, _value
    );
    
  }
  damped_spring_joint_get_param(_joint, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_damped_spring_joint_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _joint, _param
    );
    
  }
  joint_get_type(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_joint_get_type,
      this._owner,
			Variant.INT,
      _joint
    );
    
  }
  free_rid(_rid) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_free_rid,
      this._owner,
      _rid
    );
    
  }
  set_active(_active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_active,
      this._owner,
      _active
    );
    
  }
  get_process_info(_process_info) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_process_info,
      this._owner,
			Variant.Type.INT,
      _process_info
    );
    
  }
  static SpaceParameter = {
    SPACE_PARAM_CONTACT_RECYCLE_RADIUS: 0,
    SPACE_PARAM_CONTACT_MAX_SEPARATION: 1,
    SPACE_PARAM_CONTACT_MAX_ALLOWED_PENETRATION: 2,
    SPACE_PARAM_CONTACT_DEFAULT_BIAS: 3,
    SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD: 4,
    SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD: 5,
    SPACE_PARAM_BODY_TIME_TO_SLEEP: 6,
    SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS: 7,
    SPACE_PARAM_SOLVER_ITERATIONS: 8,
  }
  static ShapeType = {
    SHAPE_WORLD_BOUNDARY: 0,
    SHAPE_SEPARATION_RAY: 1,
    SHAPE_SEGMENT: 2,
    SHAPE_CIRCLE: 3,
    SHAPE_RECTANGLE: 4,
    SHAPE_CAPSULE: 5,
    SHAPE_CONVEX_POLYGON: 6,
    SHAPE_CONCAVE_POLYGON: 7,
    SHAPE_CUSTOM: 8,
  }
  static AreaParameter = {
    AREA_PARAM_GRAVITY_OVERRIDE_MODE: 0,
    AREA_PARAM_GRAVITY: 1,
    AREA_PARAM_GRAVITY_VECTOR: 2,
    AREA_PARAM_GRAVITY_IS_POINT: 3,
    AREA_PARAM_GRAVITY_POINT_UNIT_DISTANCE: 4,
    AREA_PARAM_LINEAR_DAMP_OVERRIDE_MODE: 5,
    AREA_PARAM_LINEAR_DAMP: 6,
    AREA_PARAM_ANGULAR_DAMP_OVERRIDE_MODE: 7,
    AREA_PARAM_ANGULAR_DAMP: 8,
    AREA_PARAM_PRIORITY: 9,
  }
  static AreaSpaceOverrideMode = {
    AREA_SPACE_OVERRIDE_DISABLED: 0,
    AREA_SPACE_OVERRIDE_COMBINE: 1,
    AREA_SPACE_OVERRIDE_COMBINE_REPLACE: 2,
    AREA_SPACE_OVERRIDE_REPLACE: 3,
    AREA_SPACE_OVERRIDE_REPLACE_COMBINE: 4,
  }
  static BodyMode = {
    BODY_MODE_STATIC: 0,
    BODY_MODE_KINEMATIC: 1,
    BODY_MODE_RIGID: 2,
    BODY_MODE_RIGID_LINEAR: 3,
  }
  static BodyParameter = {
    BODY_PARAM_BOUNCE: 0,
    BODY_PARAM_FRICTION: 1,
    BODY_PARAM_MASS: 2,
    BODY_PARAM_INERTIA: 3,
    BODY_PARAM_CENTER_OF_MASS: 4,
    BODY_PARAM_GRAVITY_SCALE: 5,
    BODY_PARAM_LINEAR_DAMP_MODE: 6,
    BODY_PARAM_ANGULAR_DAMP_MODE: 7,
    BODY_PARAM_LINEAR_DAMP: 8,
    BODY_PARAM_ANGULAR_DAMP: 9,
    BODY_PARAM_MAX: 10,
  }
  static BodyDampMode = {
    BODY_DAMP_MODE_COMBINE: 0,
    BODY_DAMP_MODE_REPLACE: 1,
  }
  static BodyState = {
    BODY_STATE_TRANSFORM: 0,
    BODY_STATE_LINEAR_VELOCITY: 1,
    BODY_STATE_ANGULAR_VELOCITY: 2,
    BODY_STATE_SLEEPING: 3,
    BODY_STATE_CAN_SLEEP: 4,
  }
  static JointType = {
    JOINT_TYPE_PIN: 0,
    JOINT_TYPE_GROOVE: 1,
    JOINT_TYPE_DAMPED_SPRING: 2,
    JOINT_TYPE_MAX: 3,
  }
  static JointParam = {
    JOINT_PARAM_BIAS: 0,
    JOINT_PARAM_MAX_BIAS: 1,
    JOINT_PARAM_MAX_FORCE: 2,
  }
  static PinJointParam = {
    PIN_JOINT_SOFTNESS: 0,
    PIN_JOINT_LIMIT_UPPER: 1,
    PIN_JOINT_LIMIT_LOWER: 2,
    PIN_JOINT_MOTOR_TARGET_VELOCITY: 3,
  }
  static PinJointFlag = {
    PIN_JOINT_FLAG_ANGULAR_LIMIT_ENABLED: 0,
    PIN_JOINT_FLAG_MOTOR_ENABLED: 1,
  }
  static DampedSpringParam = {
    DAMPED_SPRING_REST_LENGTH: 0,
    DAMPED_SPRING_STIFFNESS: 1,
    DAMPED_SPRING_DAMPING: 2,
  }
  static CCDMode = {
    CCD_MODE_DISABLED: 0,
    CCD_MODE_CAST_RAY: 1,
    CCD_MODE_CAST_SHAPE: 2,
  }
  static AreaBodyStatus = {
    AREA_BODY_ADDED: 0,
    AREA_BODY_REMOVED: 1,
  }
  static ProcessInfo = {
    INFO_ACTIVE_OBJECTS: 0,
    INFO_COLLISION_PAIRS: 1,
    INFO_ISLAND_COUNT: 2,
  }
}