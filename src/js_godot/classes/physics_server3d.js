import * as internal from '__internal__';
import { Variant } from 'src/js_godot/variant/variant'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { AABB } from 'src/js_godot/variant/aabb'
import { RID } from 'src/js_godot/variant/rid'
import { Callable } from 'src/js_godot/variant/callable'
class _MethodBindings {
    method_world_boundary_shape_create;
    method_separation_ray_shape_create;
    method_sphere_shape_create;
    method_box_shape_create;
    method_capsule_shape_create;
    method_cylinder_shape_create;
    method_convex_polygon_shape_create;
    method_concave_polygon_shape_create;
    method_heightmap_shape_create;
    method_custom_shape_create;
    method_shape_set_data;
    method_shape_set_margin;
    method_shape_get_type;
    method_shape_get_data;
    method_shape_get_margin;
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
    method_area_set_monitor_callback;
    method_area_set_area_monitor_callback;
    method_area_set_monitorable;
    method_area_set_ray_pickable;
    method_body_create;
    method_body_set_space;
    method_body_get_space;
    method_body_set_mode;
    method_body_get_mode;
    method_body_set_collision_layer;
    method_body_get_collision_layer;
    method_body_set_collision_mask;
    method_body_get_collision_mask;
    method_body_set_collision_priority;
    method_body_get_collision_priority;
    method_body_add_shape;
    method_body_set_shape;
    method_body_set_shape_transform;
    method_body_set_shape_disabled;
    method_body_get_shape_count;
    method_body_get_shape;
    method_body_get_shape_transform;
    method_body_remove_shape;
    method_body_clear_shapes;
    method_body_attach_object_instance_id;
    method_body_get_object_instance_id;
    method_body_set_enable_continuous_collision_detection;
    method_body_is_continuous_collision_detection_enabled;
    method_body_set_param;
    method_body_get_param;
    method_body_reset_mass_properties;
    method_body_set_state;
    method_body_get_state;
    method_body_apply_central_impulse;
    method_body_apply_impulse;
    method_body_apply_torque_impulse;
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
    method_body_set_axis_lock;
    method_body_is_axis_locked;
    method_body_add_collision_exception;
    method_body_remove_collision_exception;
    method_body_set_max_contacts_reported;
    method_body_get_max_contacts_reported;
    method_body_set_omit_force_integration;
    method_body_is_omitting_force_integration;
    method_body_set_state_sync_callback;
    method_body_set_force_integration_callback;
    method_body_set_ray_pickable;
    method_body_test_motion;
    method_body_get_direct_state;
    method_soft_body_create;
    method_soft_body_update_rendering_server;
    method_soft_body_set_space;
    method_soft_body_get_space;
    method_soft_body_set_mesh;
    method_soft_body_get_bounds;
    method_soft_body_set_collision_layer;
    method_soft_body_get_collision_layer;
    method_soft_body_set_collision_mask;
    method_soft_body_get_collision_mask;
    method_soft_body_add_collision_exception;
    method_soft_body_remove_collision_exception;
    method_soft_body_set_state;
    method_soft_body_get_state;
    method_soft_body_set_transform;
    method_soft_body_set_ray_pickable;
    method_soft_body_set_simulation_precision;
    method_soft_body_get_simulation_precision;
    method_soft_body_set_total_mass;
    method_soft_body_get_total_mass;
    method_soft_body_set_linear_stiffness;
    method_soft_body_get_linear_stiffness;
    method_soft_body_set_pressure_coefficient;
    method_soft_body_get_pressure_coefficient;
    method_soft_body_set_damping_coefficient;
    method_soft_body_get_damping_coefficient;
    method_soft_body_set_drag_coefficient;
    method_soft_body_get_drag_coefficient;
    method_soft_body_move_point;
    method_soft_body_get_point_global_position;
    method_soft_body_remove_all_pinned_points;
    method_soft_body_pin_point;
    method_soft_body_is_point_pinned;
    method_joint_create;
    method_joint_clear;
    method_joint_make_pin;
    method_pin_joint_set_param;
    method_pin_joint_get_param;
    method_pin_joint_set_local_a;
    method_pin_joint_get_local_a;
    method_pin_joint_set_local_b;
    method_pin_joint_get_local_b;
    method_joint_make_hinge;
    method_hinge_joint_set_param;
    method_hinge_joint_get_param;
    method_hinge_joint_set_flag;
    method_hinge_joint_get_flag;
    method_joint_make_slider;
    method_slider_joint_set_param;
    method_slider_joint_get_param;
    method_joint_make_cone_twist;
    method_cone_twist_joint_set_param;
    method_cone_twist_joint_get_param;
    method_joint_get_type;
    method_joint_set_solver_priority;
    method_joint_get_solver_priority;
    method_joint_disable_collisions_between_bodies;
    method_joint_is_disabled_collisions_between_bodies;
    method_joint_make_generic_6dof;
    method_generic_6dof_joint_set_param;
    method_generic_6dof_joint_get_param;
    method_generic_6dof_joint_set_flag;
    method_generic_6dof_joint_get_flag;
    method_free_rid;
    method_set_active;
    method_get_process_info;
}

export const PhysicsServer3D = new _PhysicsServer3D();

class _PhysicsServer3D extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("world_boundary_shape_create");
      this._bindings.method_world_boundary_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("separation_ray_shape_create");
      this._bindings.method_separation_ray_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("sphere_shape_create");
      this._bindings.method_sphere_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("box_shape_create");
      this._bindings.method_box_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("capsule_shape_create");
      this._bindings.method_capsule_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("cylinder_shape_create");
      this._bindings.method_cylinder_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("convex_polygon_shape_create");
      this._bindings.method_convex_polygon_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("concave_polygon_shape_create");
      this._bindings.method_concave_polygon_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("heightmap_shape_create");
      this._bindings.method_heightmap_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("custom_shape_create");
      this._bindings.method_custom_shape_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("shape_set_data");
      this._bindings.method_shape_set_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3175752987
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("shape_set_margin");
      this._bindings.method_shape_set_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("shape_get_type");
      this._bindings.method_shape_get_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3418923367
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("shape_get_data");
      this._bindings.method_shape_get_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4171304767
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("shape_get_margin");
      this._bindings.method_shape_get_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("space_create");
      this._bindings.method_space_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("space_set_active");
      this._bindings.method_space_set_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("space_is_active");
      this._bindings.method_space_is_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("space_set_param");
      this._bindings.method_space_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2406017470
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("space_get_param");
      this._bindings.method_space_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1523206731
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("space_get_direct_state");
      this._bindings.method_space_get_direct_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2048616813
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_create");
      this._bindings.method_area_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_space");
      this._bindings.method_area_set_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        395945892
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_get_space");
      this._bindings.method_area_get_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814569979
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_add_shape");
      this._bindings.method_area_add_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3711419014
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_shape");
      this._bindings.method_area_set_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2310537182
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_shape_transform");
      this._bindings.method_area_set_shape_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        675327471
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_shape_disabled");
      this._bindings.method_area_set_shape_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2658558584
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_get_shape_count");
      this._bindings.method_area_get_shape_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_get_shape");
      this._bindings.method_area_get_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1066463050
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_get_shape_transform");
      this._bindings.method_area_get_shape_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1050775521
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_remove_shape");
      this._bindings.method_area_remove_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_clear_shapes");
      this._bindings.method_area_clear_shapes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_collision_layer");
      this._bindings.method_area_set_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_get_collision_layer");
      this._bindings.method_area_get_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_collision_mask");
      this._bindings.method_area_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_get_collision_mask");
      this._bindings.method_area_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_param");
      this._bindings.method_area_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2980114638
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_transform");
      this._bindings.method_area_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3935195649
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_get_param");
      this._bindings.method_area_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        890056067
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_get_transform");
      this._bindings.method_area_get_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1128465797
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_attach_object_instance_id");
      this._bindings.method_area_attach_object_instance_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_get_object_instance_id");
      this._bindings.method_area_get_object_instance_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_monitor_callback");
      this._bindings.method_area_set_monitor_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3379118538
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_area_monitor_callback");
      this._bindings.method_area_set_area_monitor_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3379118538
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_monitorable");
      this._bindings.method_area_set_monitorable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("area_set_ray_pickable");
      this._bindings.method_area_set_ray_pickable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_create");
      this._bindings.method_body_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_space");
      this._bindings.method_body_set_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        395945892
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_space");
      this._bindings.method_body_get_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814569979
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_mode");
      this._bindings.method_body_set_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        606803466
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_mode");
      this._bindings.method_body_get_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2488819728
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_collision_layer");
      this._bindings.method_body_set_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_collision_layer");
      this._bindings.method_body_get_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_collision_mask");
      this._bindings.method_body_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_collision_mask");
      this._bindings.method_body_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_collision_priority");
      this._bindings.method_body_set_collision_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_collision_priority");
      this._bindings.method_body_get_collision_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_add_shape");
      this._bindings.method_body_add_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3711419014
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_shape");
      this._bindings.method_body_set_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2310537182
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_shape_transform");
      this._bindings.method_body_set_shape_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        675327471
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_shape_disabled");
      this._bindings.method_body_set_shape_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2658558584
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_shape_count");
      this._bindings.method_body_get_shape_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_shape");
      this._bindings.method_body_get_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1066463050
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_shape_transform");
      this._bindings.method_body_get_shape_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1050775521
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_remove_shape");
      this._bindings.method_body_remove_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_clear_shapes");
      this._bindings.method_body_clear_shapes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_attach_object_instance_id");
      this._bindings.method_body_attach_object_instance_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_object_instance_id");
      this._bindings.method_body_get_object_instance_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_enable_continuous_collision_detection");
      this._bindings.method_body_set_enable_continuous_collision_detection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_is_continuous_collision_detection_enabled");
      this._bindings.method_body_is_continuous_collision_detection_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_param");
      this._bindings.method_body_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        910941953
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_param");
      this._bindings.method_body_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3385027841
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_reset_mass_properties");
      this._bindings.method_body_reset_mass_properties = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_state");
      this._bindings.method_body_set_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        599977762
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_state");
      this._bindings.method_body_get_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1850449534
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_apply_central_impulse");
      this._bindings.method_body_apply_central_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_apply_impulse");
      this._bindings.method_body_apply_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        390416203
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_apply_torque_impulse");
      this._bindings.method_body_apply_torque_impulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_apply_central_force");
      this._bindings.method_body_apply_central_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_apply_force");
      this._bindings.method_body_apply_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        390416203
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_apply_torque");
      this._bindings.method_body_apply_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_add_constant_central_force");
      this._bindings.method_body_add_constant_central_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_add_constant_force");
      this._bindings.method_body_add_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        390416203
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_add_constant_torque");
      this._bindings.method_body_add_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_constant_force");
      this._bindings.method_body_set_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_constant_force");
      this._bindings.method_body_get_constant_force = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        531438156
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_constant_torque");
      this._bindings.method_body_set_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_constant_torque");
      this._bindings.method_body_get_constant_torque = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        531438156
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_axis_velocity");
      this._bindings.method_body_set_axis_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_axis_lock");
      this._bindings.method_body_set_axis_lock = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2020836892
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_is_axis_locked");
      this._bindings.method_body_is_axis_locked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        587853580
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_add_collision_exception");
      this._bindings.method_body_add_collision_exception = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        395945892
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_remove_collision_exception");
      this._bindings.method_body_remove_collision_exception = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        395945892
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_max_contacts_reported");
      this._bindings.method_body_set_max_contacts_reported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_max_contacts_reported");
      this._bindings.method_body_get_max_contacts_reported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_omit_force_integration");
      this._bindings.method_body_set_omit_force_integration = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_is_omitting_force_integration");
      this._bindings.method_body_is_omitting_force_integration = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_state_sync_callback");
      this._bindings.method_body_set_state_sync_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3379118538
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_force_integration_callback");
      this._bindings.method_body_set_force_integration_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3059434249
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_set_ray_pickable");
      this._bindings.method_body_set_ray_pickable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_test_motion");
      this._bindings.method_body_test_motion = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1944921792
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("body_get_direct_state");
      this._bindings.method_body_get_direct_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3029727957
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_create");
      this._bindings.method_soft_body_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_update_rendering_server");
      this._bindings.method_soft_body_update_rendering_server = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2218179753
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_space");
      this._bindings.method_soft_body_set_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        395945892
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_space");
      this._bindings.method_soft_body_get_space = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3814569979
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_mesh");
      this._bindings.method_soft_body_set_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        395945892
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_bounds");
      this._bindings.method_soft_body_get_bounds = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        974181306
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_collision_layer");
      this._bindings.method_soft_body_set_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_collision_layer");
      this._bindings.method_soft_body_get_collision_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_collision_mask");
      this._bindings.method_soft_body_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_collision_mask");
      this._bindings.method_soft_body_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_add_collision_exception");
      this._bindings.method_soft_body_add_collision_exception = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        395945892
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_remove_collision_exception");
      this._bindings.method_soft_body_remove_collision_exception = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        395945892
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_state");
      this._bindings.method_soft_body_set_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        599977762
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_state");
      this._bindings.method_soft_body_get_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1850449534
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_transform");
      this._bindings.method_soft_body_set_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3935195649
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_ray_pickable");
      this._bindings.method_soft_body_set_ray_pickable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_simulation_precision");
      this._bindings.method_soft_body_set_simulation_precision = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_simulation_precision");
      this._bindings.method_soft_body_get_simulation_precision = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_total_mass");
      this._bindings.method_soft_body_set_total_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_total_mass");
      this._bindings.method_soft_body_get_total_mass = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_linear_stiffness");
      this._bindings.method_soft_body_set_linear_stiffness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_linear_stiffness");
      this._bindings.method_soft_body_get_linear_stiffness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_pressure_coefficient");
      this._bindings.method_soft_body_set_pressure_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_pressure_coefficient");
      this._bindings.method_soft_body_get_pressure_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_damping_coefficient");
      this._bindings.method_soft_body_set_damping_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_damping_coefficient");
      this._bindings.method_soft_body_get_damping_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_set_drag_coefficient");
      this._bindings.method_soft_body_set_drag_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794382983
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_drag_coefficient");
      this._bindings.method_soft_body_get_drag_coefficient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        866169185
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_move_point");
      this._bindings.method_soft_body_move_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        831953689
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_get_point_global_position");
      this._bindings.method_soft_body_get_point_global_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3440143363
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_remove_all_pinned_points");
      this._bindings.method_soft_body_remove_all_pinned_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_pin_point");
      this._bindings.method_soft_body_pin_point = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2658558584
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("soft_body_is_point_pinned");
      this._bindings.method_soft_body_is_point_pinned = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3120086654
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_create");
      this._bindings.method_joint_create = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_clear");
      this._bindings.method_joint_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_make_pin");
      this._bindings.method_joint_make_pin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4280171926
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("pin_joint_set_param");
      this._bindings.method_pin_joint_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        810685294
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("pin_joint_get_param");
      this._bindings.method_pin_joint_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2817972347
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("pin_joint_set_local_a");
      this._bindings.method_pin_joint_set_local_a = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("pin_joint_get_local_a");
      this._bindings.method_pin_joint_get_local_a = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        531438156
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("pin_joint_set_local_b");
      this._bindings.method_pin_joint_set_local_b = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3227306858
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("pin_joint_get_local_b");
      this._bindings.method_pin_joint_get_local_b = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        531438156
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_make_hinge");
      this._bindings.method_joint_make_hinge = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1684107643
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("hinge_joint_set_param");
      this._bindings.method_hinge_joint_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3165502333
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("hinge_joint_get_param");
      this._bindings.method_hinge_joint_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2129207581
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("hinge_joint_set_flag");
      this._bindings.method_hinge_joint_set_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1601626188
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("hinge_joint_get_flag");
      this._bindings.method_hinge_joint_get_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4165147865
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_make_slider");
      this._bindings.method_joint_make_slider = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1684107643
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("slider_joint_set_param");
      this._bindings.method_slider_joint_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2264833593
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("slider_joint_get_param");
      this._bindings.method_slider_joint_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3498644957
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_make_cone_twist");
      this._bindings.method_joint_make_cone_twist = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1684107643
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("cone_twist_joint_set_param");
      this._bindings.method_cone_twist_joint_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        808587618
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("cone_twist_joint_get_param");
      this._bindings.method_cone_twist_joint_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1134789658
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_get_type");
      this._bindings.method_joint_get_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4290791900
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_set_solver_priority");
      this._bindings.method_joint_set_solver_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3411492887
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_get_solver_priority");
      this._bindings.method_joint_get_solver_priority = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2198884583
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_disable_collisions_between_bodies");
      this._bindings.method_joint_disable_collisions_between_bodies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265174801
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_is_disabled_collisions_between_bodies");
      this._bindings.method_joint_is_disabled_collisions_between_bodies = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4155700596
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("joint_make_generic_6dof");
      this._bindings.method_joint_make_generic_6dof = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1684107643
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("generic_6dof_joint_set_param");
      this._bindings.method_generic_6dof_joint_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2600081391
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("generic_6dof_joint_get_param");
      this._bindings.method_generic_6dof_joint_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        467122058
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("generic_6dof_joint_set_flag");
      this._bindings.method_generic_6dof_joint_set_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3570926903
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("generic_6dof_joint_get_flag");
      this._bindings.method_generic_6dof_joint_get_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4158090196
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("free_rid");
      this._bindings.method_free_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("set_active");
      this._bindings.method_set_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PhysicsServer3D");
      let methodname = new StringName("get_process_info");
      this._bindings.method_get_process_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1332958745
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
  sphere_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_sphere_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  box_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_box_shape_create,
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
  cylinder_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_cylinder_shape_create,
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
  heightmap_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_heightmap_shape_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  custom_shape_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_custom_shape_create,
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
  shape_set_margin(_shape, _margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_shape_set_margin,
      this._owner,
      _shape, _margin
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
  shape_get_margin(_shape) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_shape_get_margin,
      this._owner,
			Variant.Type.FLOAT,
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
			Variant.Type.TRANSFORM3D
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
			Variant.Type.TRANSFORM3D
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
  area_set_ray_pickable(_area, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_area_set_ray_pickable,
      this._owner,
      _area, _enable
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
  body_set_shape_disabled(_body, _shape_idx, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_shape_disabled,
      this._owner,
      _body, _shape_idx, _disabled
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
			Variant.Type.TRANSFORM3D
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
  body_set_enable_continuous_collision_detection(_body, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_enable_continuous_collision_detection,
      this._owner,
      _body, _enable
    );
  }
  body_is_continuous_collision_detection_enabled(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_is_continuous_collision_detection_enabled,
      this._owner,
			Variant.Type.BOOL,
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
  body_apply_impulse(_body, _impulse, _position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_apply_impulse,
      this._owner,
      _body, _impulse, _position
    );
  }
  body_apply_torque_impulse(_body, _impulse) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_apply_torque_impulse,
      this._owner,
      _body, _impulse
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
			Variant.Type.VECTOR3
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
			Variant.Type.VECTOR3
    ,
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
  body_set_axis_lock(_body, _axis, _lock) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_axis_lock,
      this._owner,
      _body, _axis, _lock
    );
  }
  body_is_axis_locked(_body, _axis) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_body_is_axis_locked,
      this._owner,
			Variant.Type.BOOL,
      _body, _axis
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
  body_set_ray_pickable(_body, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_body_set_ray_pickable,
      this._owner,
      _body, _enable
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
  soft_body_create() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_create,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  soft_body_update_rendering_server(_body, _rendering_server_handler) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_update_rendering_server,
      this._owner,
      _body, _rendering_server_handler
    );
  }
  soft_body_set_space(_body, _space) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_space,
      this._owner,
      _body, _space
    );
  }
  soft_body_get_space(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_space,
      this._owner,
			Variant.Type.RID
    ,
      _body
    );
  }
  soft_body_set_mesh(_body, _mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_mesh,
      this._owner,
      _body, _mesh
    );
  }
  soft_body_get_bounds(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_bounds,
      this._owner,
			Variant.Type.AABB
    ,
      _body
    );
  }
  soft_body_set_collision_layer(_body, _layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_collision_layer,
      this._owner,
      _body, _layer
    );
  }
  soft_body_get_collision_layer(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_collision_layer,
      this._owner,
			Variant.Type.INT,
      _body
    );
  }
  soft_body_set_collision_mask(_body, _mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_collision_mask,
      this._owner,
      _body, _mask
    );
  }
  soft_body_get_collision_mask(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      _body
    );
  }
  soft_body_add_collision_exception(_body, _body_b) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_add_collision_exception,
      this._owner,
      _body, _body_b
    );
  }
  soft_body_remove_collision_exception(_body, _body_b) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_remove_collision_exception,
      this._owner,
      _body, _body_b
    );
  }
  soft_body_set_state(_body, _state, _variant) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_state,
      this._owner,
      _body, _state, _variant
    );
  }
  soft_body_get_state(_body, _state) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_state,
      this._owner,
			Variant.Type.VARIANT
    ,
      _body, _state
    );
  }
  soft_body_set_transform(_body, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_transform,
      this._owner,
      _body, _transform
    );
  }
  soft_body_set_ray_pickable(_body, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_ray_pickable,
      this._owner,
      _body, _enable
    );
  }
  soft_body_set_simulation_precision(_body, _simulation_precision) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_simulation_precision,
      this._owner,
      _body, _simulation_precision
    );
  }
  soft_body_get_simulation_precision(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_simulation_precision,
      this._owner,
			Variant.Type.INT,
      _body
    );
  }
  soft_body_set_total_mass(_body, _total_mass) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_total_mass,
      this._owner,
      _body, _total_mass
    );
  }
  soft_body_get_total_mass(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_total_mass,
      this._owner,
			Variant.Type.FLOAT,
      _body
    );
  }
  soft_body_set_linear_stiffness(_body, _stiffness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_linear_stiffness,
      this._owner,
      _body, _stiffness
    );
  }
  soft_body_get_linear_stiffness(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_linear_stiffness,
      this._owner,
			Variant.Type.FLOAT,
      _body
    );
  }
  soft_body_set_pressure_coefficient(_body, _pressure_coefficient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_pressure_coefficient,
      this._owner,
      _body, _pressure_coefficient
    );
  }
  soft_body_get_pressure_coefficient(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_pressure_coefficient,
      this._owner,
			Variant.Type.FLOAT,
      _body
    );
  }
  soft_body_set_damping_coefficient(_body, _damping_coefficient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_damping_coefficient,
      this._owner,
      _body, _damping_coefficient
    );
  }
  soft_body_get_damping_coefficient(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_damping_coefficient,
      this._owner,
			Variant.Type.FLOAT,
      _body
    );
  }
  soft_body_set_drag_coefficient(_body, _drag_coefficient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_set_drag_coefficient,
      this._owner,
      _body, _drag_coefficient
    );
  }
  soft_body_get_drag_coefficient(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_drag_coefficient,
      this._owner,
			Variant.Type.FLOAT,
      _body
    );
  }
  soft_body_move_point(_body, _point_index, _global_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_move_point,
      this._owner,
      _body, _point_index, _global_position
    );
  }
  soft_body_get_point_global_position(_body, _point_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_get_point_global_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _body, _point_index
    );
  }
  soft_body_remove_all_pinned_points(_body) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_remove_all_pinned_points,
      this._owner,
      _body
    );
  }
  soft_body_pin_point(_body, _point_index, _pin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_soft_body_pin_point,
      this._owner,
      _body, _point_index, _pin
    );
  }
  soft_body_is_point_pinned(_body, _point_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_soft_body_is_point_pinned,
      this._owner,
			Variant.Type.BOOL,
      _body, _point_index
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
  joint_make_pin(_joint, _body_A, _local_A, _body_B, _local_B) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_make_pin,
      this._owner,
      _joint, _body_A, _local_A, _body_B, _local_B
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
  pin_joint_set_local_a(_joint, _local_A) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_pin_joint_set_local_a,
      this._owner,
      _joint, _local_A
    );
  }
  pin_joint_get_local_a(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_pin_joint_get_local_a,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _joint
    );
  }
  pin_joint_set_local_b(_joint, _local_B) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_pin_joint_set_local_b,
      this._owner,
      _joint, _local_B
    );
  }
  pin_joint_get_local_b(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_pin_joint_get_local_b,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _joint
    );
  }
  joint_make_hinge(_joint, _body_A, _hinge_A, _body_B, _hinge_B) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_make_hinge,
      this._owner,
      _joint, _body_A, _hinge_A, _body_B, _hinge_B
    );
  }
  hinge_joint_set_param(_joint, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_hinge_joint_set_param,
      this._owner,
      _joint, _param, _value
    );
  }
  hinge_joint_get_param(_joint, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_hinge_joint_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _joint, _param
    );
  }
  hinge_joint_set_flag(_joint, _flag, _enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_hinge_joint_set_flag,
      this._owner,
      _joint, _flag, _enabled
    );
  }
  hinge_joint_get_flag(_joint, _flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_hinge_joint_get_flag,
      this._owner,
			Variant.Type.BOOL,
      _joint, _flag
    );
  }
  joint_make_slider(_joint, _body_A, _local_ref_A, _body_B, _local_ref_B) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_make_slider,
      this._owner,
      _joint, _body_A, _local_ref_A, _body_B, _local_ref_B
    );
  }
  slider_joint_set_param(_joint, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_slider_joint_set_param,
      this._owner,
      _joint, _param, _value
    );
  }
  slider_joint_get_param(_joint, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_slider_joint_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _joint, _param
    );
  }
  joint_make_cone_twist(_joint, _body_A, _local_ref_A, _body_B, _local_ref_B) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_make_cone_twist,
      this._owner,
      _joint, _body_A, _local_ref_A, _body_B, _local_ref_B
    );
  }
  cone_twist_joint_set_param(_joint, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_cone_twist_joint_set_param,
      this._owner,
      _joint, _param, _value
    );
  }
  cone_twist_joint_get_param(_joint, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_cone_twist_joint_get_param,
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
  joint_set_solver_priority(_joint, _priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_set_solver_priority,
      this._owner,
      _joint, _priority
    );
  }
  joint_get_solver_priority(_joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_joint_get_solver_priority,
      this._owner,
			Variant.Type.INT,
      _joint
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
  joint_make_generic_6dof(_joint, _body_A, _local_ref_A, _body_B, _local_ref_B) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_joint_make_generic_6dof,
      this._owner,
      _joint, _body_A, _local_ref_A, _body_B, _local_ref_B
    );
  }
  generic_6dof_joint_set_param(_joint, _axis, _param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_generic_6dof_joint_set_param,
      this._owner,
      _joint, _axis, _param, _value
    );
  }
  generic_6dof_joint_get_param(_joint, _axis, _param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generic_6dof_joint_get_param,
      this._owner,
			Variant.Type.FLOAT,
      _joint, _axis, _param
    );
  }
  generic_6dof_joint_set_flag(_joint, _axis, _flag, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_generic_6dof_joint_set_flag,
      this._owner,
      _joint, _axis, _flag, _enable
    );
  }
  generic_6dof_joint_get_flag(_joint, _axis, _flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generic_6dof_joint_get_flag,
      this._owner,
			Variant.Type.BOOL,
      _joint, _axis, _flag
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
  static JointType = {
    JOINT_TYPE_PIN: 0,
    JOINT_TYPE_HINGE: 1,
    JOINT_TYPE_SLIDER: 2,
    JOINT_TYPE_CONE_TWIST: 3,
    JOINT_TYPE_6DOF: 4,
    JOINT_TYPE_MAX: 5,
  }
  static PinJointParam = {
    PIN_JOINT_BIAS: 0,
    PIN_JOINT_DAMPING: 1,
    PIN_JOINT_IMPULSE_CLAMP: 2,
  }
  static HingeJointParam = {
    HINGE_JOINT_BIAS: 0,
    HINGE_JOINT_LIMIT_UPPER: 1,
    HINGE_JOINT_LIMIT_LOWER: 2,
    HINGE_JOINT_LIMIT_BIAS: 3,
    HINGE_JOINT_LIMIT_SOFTNESS: 4,
    HINGE_JOINT_LIMIT_RELAXATION: 5,
    HINGE_JOINT_MOTOR_TARGET_VELOCITY: 6,
    HINGE_JOINT_MOTOR_MAX_IMPULSE: 7,
  }
  static HingeJointFlag = {
    HINGE_JOINT_FLAG_USE_LIMIT: 0,
    HINGE_JOINT_FLAG_ENABLE_MOTOR: 1,
  }
  static SliderJointParam = {
    SLIDER_JOINT_LINEAR_LIMIT_UPPER: 0,
    SLIDER_JOINT_LINEAR_LIMIT_LOWER: 1,
    SLIDER_JOINT_LINEAR_LIMIT_SOFTNESS: 2,
    SLIDER_JOINT_LINEAR_LIMIT_RESTITUTION: 3,
    SLIDER_JOINT_LINEAR_LIMIT_DAMPING: 4,
    SLIDER_JOINT_LINEAR_MOTION_SOFTNESS: 5,
    SLIDER_JOINT_LINEAR_MOTION_RESTITUTION: 6,
    SLIDER_JOINT_LINEAR_MOTION_DAMPING: 7,
    SLIDER_JOINT_LINEAR_ORTHOGONAL_SOFTNESS: 8,
    SLIDER_JOINT_LINEAR_ORTHOGONAL_RESTITUTION: 9,
    SLIDER_JOINT_LINEAR_ORTHOGONAL_DAMPING: 10,
    SLIDER_JOINT_ANGULAR_LIMIT_UPPER: 11,
    SLIDER_JOINT_ANGULAR_LIMIT_LOWER: 12,
    SLIDER_JOINT_ANGULAR_LIMIT_SOFTNESS: 13,
    SLIDER_JOINT_ANGULAR_LIMIT_RESTITUTION: 14,
    SLIDER_JOINT_ANGULAR_LIMIT_DAMPING: 15,
    SLIDER_JOINT_ANGULAR_MOTION_SOFTNESS: 16,
    SLIDER_JOINT_ANGULAR_MOTION_RESTITUTION: 17,
    SLIDER_JOINT_ANGULAR_MOTION_DAMPING: 18,
    SLIDER_JOINT_ANGULAR_ORTHOGONAL_SOFTNESS: 19,
    SLIDER_JOINT_ANGULAR_ORTHOGONAL_RESTITUTION: 20,
    SLIDER_JOINT_ANGULAR_ORTHOGONAL_DAMPING: 21,
    SLIDER_JOINT_MAX: 22,
  }
  static ConeTwistJointParam = {
    CONE_TWIST_JOINT_SWING_SPAN: 0,
    CONE_TWIST_JOINT_TWIST_SPAN: 1,
    CONE_TWIST_JOINT_BIAS: 2,
    CONE_TWIST_JOINT_SOFTNESS: 3,
    CONE_TWIST_JOINT_RELAXATION: 4,
  }
  static G6DOFJointAxisParam = {
    G6DOF_JOINT_LINEAR_LOWER_LIMIT: 0,
    G6DOF_JOINT_LINEAR_UPPER_LIMIT: 1,
    G6DOF_JOINT_LINEAR_LIMIT_SOFTNESS: 2,
    G6DOF_JOINT_LINEAR_RESTITUTION: 3,
    G6DOF_JOINT_LINEAR_DAMPING: 4,
    G6DOF_JOINT_LINEAR_MOTOR_TARGET_VELOCITY: 5,
    G6DOF_JOINT_LINEAR_MOTOR_FORCE_LIMIT: 6,
    G6DOF_JOINT_LINEAR_SPRING_STIFFNESS: 7,
    G6DOF_JOINT_LINEAR_SPRING_DAMPING: 8,
    G6DOF_JOINT_LINEAR_SPRING_EQUILIBRIUM_POINT: 9,
    G6DOF_JOINT_ANGULAR_LOWER_LIMIT: 10,
    G6DOF_JOINT_ANGULAR_UPPER_LIMIT: 11,
    G6DOF_JOINT_ANGULAR_LIMIT_SOFTNESS: 12,
    G6DOF_JOINT_ANGULAR_DAMPING: 13,
    G6DOF_JOINT_ANGULAR_RESTITUTION: 14,
    G6DOF_JOINT_ANGULAR_FORCE_LIMIT: 15,
    G6DOF_JOINT_ANGULAR_ERP: 16,
    G6DOF_JOINT_ANGULAR_MOTOR_TARGET_VELOCITY: 17,
    G6DOF_JOINT_ANGULAR_MOTOR_FORCE_LIMIT: 18,
    G6DOF_JOINT_ANGULAR_SPRING_STIFFNESS: 19,
    G6DOF_JOINT_ANGULAR_SPRING_DAMPING: 20,
    G6DOF_JOINT_ANGULAR_SPRING_EQUILIBRIUM_POINT: 21,
    G6DOF_JOINT_MAX: 22,
  }
  static G6DOFJointAxisFlag = {
    G6DOF_JOINT_FLAG_ENABLE_LINEAR_LIMIT: 0,
    G6DOF_JOINT_FLAG_ENABLE_ANGULAR_LIMIT: 1,
    G6DOF_JOINT_FLAG_ENABLE_ANGULAR_SPRING: 2,
    G6DOF_JOINT_FLAG_ENABLE_LINEAR_SPRING: 3,
    G6DOF_JOINT_FLAG_ENABLE_MOTOR: 4,
    G6DOF_JOINT_FLAG_ENABLE_LINEAR_MOTOR: 5,
    G6DOF_JOINT_FLAG_MAX: 6,
  }
  static ShapeType = {
    SHAPE_WORLD_BOUNDARY: 0,
    SHAPE_SEPARATION_RAY: 1,
    SHAPE_SPHERE: 2,
    SHAPE_BOX: 3,
    SHAPE_CAPSULE: 4,
    SHAPE_CYLINDER: 5,
    SHAPE_CONVEX_POLYGON: 6,
    SHAPE_CONCAVE_POLYGON: 7,
    SHAPE_HEIGHTMAP: 8,
    SHAPE_SOFT_BODY: 9,
    SHAPE_CUSTOM: 10,
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
    AREA_PARAM_WIND_FORCE_MAGNITUDE: 10,
    AREA_PARAM_WIND_SOURCE: 11,
    AREA_PARAM_WIND_DIRECTION: 12,
    AREA_PARAM_WIND_ATTENUATION_FACTOR: 13,
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
  static AreaBodyStatus = {
    AREA_BODY_ADDED: 0,
    AREA_BODY_REMOVED: 1,
  }
  static ProcessInfo = {
    INFO_ACTIVE_OBJECTS: 0,
    INFO_COLLISION_PAIRS: 1,
    INFO_ISLAND_COUNT: 2,
  }
  static SpaceParameter = {
    SPACE_PARAM_CONTACT_RECYCLE_RADIUS: 0,
    SPACE_PARAM_CONTACT_MAX_SEPARATION: 1,
    SPACE_PARAM_CONTACT_MAX_ALLOWED_PENETRATION: 2,
    SPACE_PARAM_CONTACT_DEFAULT_BIAS: 3,
    SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD: 4,
    SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD: 5,
    SPACE_PARAM_BODY_TIME_TO_SLEEP: 6,
    SPACE_PARAM_SOLVER_ITERATIONS: 7,
  }
  static BodyAxis = {
    BODY_AXIS_LINEAR_X: 1,
    BODY_AXIS_LINEAR_Y: 2,
    BODY_AXIS_LINEAR_Z: 4,
    BODY_AXIS_ANGULAR_X: 8,
    BODY_AXIS_ANGULAR_Y: 16,
    BODY_AXIS_ANGULAR_Z: 32,
  }
}