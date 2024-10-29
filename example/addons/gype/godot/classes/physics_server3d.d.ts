
import { PhysicsDirectSpaceState3D } from "@godot/classes/physics_direct_space_state3d";
import { PhysicsTestMotionResult3D } from "@godot/classes/physics_test_motion_result3d";
import { Object } from "@godot/classes/object";
import { PhysicsTestMotionParameters3D } from "@godot/classes/physics_test_motion_parameters3d";
import { PhysicsServer3DRenderingServerHandler } from "@godot/classes/physics_server3d_rendering_server_handler";
import { PhysicsDirectBodyState3D } from "@godot/classes/physics_direct_body_state3d";

export declare class PhysicsServer3D extends Object{
  public world_boundary_shape_create(): RID;
  public separation_ray_shape_create(): RID;
  public sphere_shape_create(): RID;
  public box_shape_create(): RID;
  public capsule_shape_create(): RID;
  public cylinder_shape_create(): RID;
  public convex_polygon_shape_create(): RID;
  public concave_polygon_shape_create(): RID;
  public heightmap_shape_create(): RID;
  public custom_shape_create(): RID;
  public shape_set_data(_shape: RID, _data: any): void;
  public shape_set_margin(_shape: RID, _margin: number): void;
  public shape_get_type(_shape: RID): number;
  public shape_get_data(_shape: RID): any;
  public shape_get_margin(_shape: RID): number;
  public space_create(): RID;
  public space_set_active(_space: RID, _active: boolean): void;
  public space_is_active(_space: RID): boolean;
  public space_set_param(_space: RID, _param: number, _value: number): void;
  public space_get_param(_space: RID, _param: number): number;
  public space_get_direct_state(_space: RID): PhysicsDirectSpaceState3D;
  public area_create(): RID;
  public area_set_space(_area: RID, _space: RID): void;
  public area_get_space(_area: RID): RID;
  public area_add_shape(_area: RID, _shape: RID, _transform: Transform3D, _disabled: boolean): void;
  public area_set_shape(_area: RID, _shape_idx: number, _shape: RID): void;
  public area_set_shape_transform(_area: RID, _shape_idx: number, _transform: Transform3D): void;
  public area_set_shape_disabled(_area: RID, _shape_idx: number, _disabled: boolean): void;
  public area_get_shape_count(_area: RID): number;
  public area_get_shape(_area: RID, _shape_idx: number): RID;
  public area_get_shape_transform(_area: RID, _shape_idx: number): Transform3D;
  public area_remove_shape(_area: RID, _shape_idx: number): void;
  public area_clear_shapes(_area: RID): void;
  public area_set_collision_layer(_area: RID, _layer: number): void;
  public area_get_collision_layer(_area: RID): number;
  public area_set_collision_mask(_area: RID, _mask: number): void;
  public area_get_collision_mask(_area: RID): number;
  public area_set_param(_area: RID, _param: number, _value: any): void;
  public area_set_transform(_area: RID, _transform: Transform3D): void;
  public area_get_param(_area: RID, _param: number): any;
  public area_get_transform(_area: RID): Transform3D;
  public area_attach_object_instance_id(_area: RID, _id: number): void;
  public area_get_object_instance_id(_area: RID): number;
  public area_set_monitor_callback(_area: RID, _callback: Callable): void;
  public area_set_area_monitor_callback(_area: RID, _callback: Callable): void;
  public area_set_monitorable(_area: RID, _monitorable: boolean): void;
  public area_set_ray_pickable(_area: RID, _enable: boolean): void;
  public body_create(): RID;
  public body_set_space(_body: RID, _space: RID): void;
  public body_get_space(_body: RID): RID;
  public body_set_mode(_body: RID, _mode: number): void;
  public body_get_mode(_body: RID): number;
  public body_set_collision_layer(_body: RID, _layer: number): void;
  public body_get_collision_layer(_body: RID): number;
  public body_set_collision_mask(_body: RID, _mask: number): void;
  public body_get_collision_mask(_body: RID): number;
  public body_set_collision_priority(_body: RID, _priority: number): void;
  public body_get_collision_priority(_body: RID): number;
  public body_add_shape(_body: RID, _shape: RID, _transform: Transform3D, _disabled: boolean): void;
  public body_set_shape(_body: RID, _shape_idx: number, _shape: RID): void;
  public body_set_shape_transform(_body: RID, _shape_idx: number, _transform: Transform3D): void;
  public body_set_shape_disabled(_body: RID, _shape_idx: number, _disabled: boolean): void;
  public body_get_shape_count(_body: RID): number;
  public body_get_shape(_body: RID, _shape_idx: number): RID;
  public body_get_shape_transform(_body: RID, _shape_idx: number): Transform3D;
  public body_remove_shape(_body: RID, _shape_idx: number): void;
  public body_clear_shapes(_body: RID): void;
  public body_attach_object_instance_id(_body: RID, _id: number): void;
  public body_get_object_instance_id(_body: RID): number;
  public body_set_enable_continuous_collision_detection(_body: RID, _enable: boolean): void;
  public body_is_continuous_collision_detection_enabled(_body: RID): boolean;
  public body_set_param(_body: RID, _param: number, _value: any): void;
  public body_get_param(_body: RID, _param: number): any;
  public body_reset_mass_properties(_body: RID): void;
  public body_set_state(_body: RID, _state: number, _value: any): void;
  public body_get_state(_body: RID, _state: number): any;
  public body_apply_central_impulse(_body: RID, _impulse: Vector3): void;
  public body_apply_impulse(_body: RID, _impulse: Vector3, _position: Vector3): void;
  public body_apply_torque_impulse(_body: RID, _impulse: Vector3): void;
  public body_apply_central_force(_body: RID, _force: Vector3): void;
  public body_apply_force(_body: RID, _force: Vector3, _position: Vector3): void;
  public body_apply_torque(_body: RID, _torque: Vector3): void;
  public body_add_constant_central_force(_body: RID, _force: Vector3): void;
  public body_add_constant_force(_body: RID, _force: Vector3, _position: Vector3): void;
  public body_add_constant_torque(_body: RID, _torque: Vector3): void;
  public body_set_constant_force(_body: RID, _force: Vector3): void;
  public body_get_constant_force(_body: RID): Vector3;
  public body_set_constant_torque(_body: RID, _torque: Vector3): void;
  public body_get_constant_torque(_body: RID): Vector3;
  public body_set_axis_velocity(_body: RID, _axis_velocity: Vector3): void;
  public body_set_axis_lock(_body: RID, _axis: number, _lock: boolean): void;
  public body_is_axis_locked(_body: RID, _axis: number): boolean;
  public body_add_collision_exception(_body: RID, _excepted_body: RID): void;
  public body_remove_collision_exception(_body: RID, _excepted_body: RID): void;
  public body_set_max_contacts_reported(_body: RID, _amount: number): void;
  public body_get_max_contacts_reported(_body: RID): number;
  public body_set_omit_force_integration(_body: RID, _enable: boolean): void;
  public body_is_omitting_force_integration(_body: RID): boolean;
  public body_set_state_sync_callback(_body: RID, _callable: Callable): void;
  public body_set_force_integration_callback(_body: RID, _callable: Callable, _userdata: any): void;
  public body_set_ray_pickable(_body: RID, _enable: boolean): void;
  public body_test_motion(_body: RID, _parameters: PhysicsTestMotionParameters3D, _result: PhysicsTestMotionResult3D): boolean;
  public body_get_direct_state(_body: RID): PhysicsDirectBodyState3D;
  public soft_body_create(): RID;
  public soft_body_update_rendering_server(_body: RID, _rendering_server_handler: PhysicsServer3DRenderingServerHandler): void;
  public soft_body_set_space(_body: RID, _space: RID): void;
  public soft_body_get_space(_body: RID): RID;
  public soft_body_set_mesh(_body: RID, _mesh: RID): void;
  public soft_body_get_bounds(_body: RID): AABB;
  public soft_body_set_collision_layer(_body: RID, _layer: number): void;
  public soft_body_get_collision_layer(_body: RID): number;
  public soft_body_set_collision_mask(_body: RID, _mask: number): void;
  public soft_body_get_collision_mask(_body: RID): number;
  public soft_body_add_collision_exception(_body: RID, _body_b: RID): void;
  public soft_body_remove_collision_exception(_body: RID, _body_b: RID): void;
  public soft_body_set_state(_body: RID, _state: number, _variant: any): void;
  public soft_body_get_state(_body: RID, _state: number): any;
  public soft_body_set_transform(_body: RID, _transform: Transform3D): void;
  public soft_body_set_ray_pickable(_body: RID, _enable: boolean): void;
  public soft_body_set_simulation_precision(_body: RID, _simulation_precision: number): void;
  public soft_body_get_simulation_precision(_body: RID): number;
  public soft_body_set_total_mass(_body: RID, _total_mass: number): void;
  public soft_body_get_total_mass(_body: RID): number;
  public soft_body_set_linear_stiffness(_body: RID, _stiffness: number): void;
  public soft_body_get_linear_stiffness(_body: RID): number;
  public soft_body_set_pressure_coefficient(_body: RID, _pressure_coefficient: number): void;
  public soft_body_get_pressure_coefficient(_body: RID): number;
  public soft_body_set_damping_coefficient(_body: RID, _damping_coefficient: number): void;
  public soft_body_get_damping_coefficient(_body: RID): number;
  public soft_body_set_drag_coefficient(_body: RID, _drag_coefficient: number): void;
  public soft_body_get_drag_coefficient(_body: RID): number;
  public soft_body_move_point(_body: RID, _point_index: number, _global_position: Vector3): void;
  public soft_body_get_point_global_position(_body: RID, _point_index: number): Vector3;
  public soft_body_remove_all_pinned_points(_body: RID): void;
  public soft_body_pin_point(_body: RID, _point_index: number, _pin: boolean): void;
  public soft_body_is_point_pinned(_body: RID, _point_index: number): boolean;
  public joint_create(): RID;
  public joint_clear(_joint: RID): void;
  public joint_make_pin(_joint: RID, _body_A: RID, _local_A: Vector3, _body_B: RID, _local_B: Vector3): void;
  public pin_joint_set_param(_joint: RID, _param: number, _value: number): void;
  public pin_joint_get_param(_joint: RID, _param: number): number;
  public pin_joint_set_local_a(_joint: RID, _local_A: Vector3): void;
  public pin_joint_get_local_a(_joint: RID): Vector3;
  public pin_joint_set_local_b(_joint: RID, _local_B: Vector3): void;
  public pin_joint_get_local_b(_joint: RID): Vector3;
  public joint_make_hinge(_joint: RID, _body_A: RID, _hinge_A: Transform3D, _body_B: RID, _hinge_B: Transform3D): void;
  public hinge_joint_set_param(_joint: RID, _param: number, _value: number): void;
  public hinge_joint_get_param(_joint: RID, _param: number): number;
  public hinge_joint_set_flag(_joint: RID, _flag: number, _enabled: boolean): void;
  public hinge_joint_get_flag(_joint: RID, _flag: number): boolean;
  public joint_make_slider(_joint: RID, _body_A: RID, _local_ref_A: Transform3D, _body_B: RID, _local_ref_B: Transform3D): void;
  public slider_joint_set_param(_joint: RID, _param: number, _value: number): void;
  public slider_joint_get_param(_joint: RID, _param: number): number;
  public joint_make_cone_twist(_joint: RID, _body_A: RID, _local_ref_A: Transform3D, _body_B: RID, _local_ref_B: Transform3D): void;
  public cone_twist_joint_set_param(_joint: RID, _param: number, _value: number): void;
  public cone_twist_joint_get_param(_joint: RID, _param: number): number;
  public joint_get_type(_joint: RID): number;
  public joint_set_solver_priority(_joint: RID, _priority: number): void;
  public joint_get_solver_priority(_joint: RID): number;
  public joint_disable_collisions_between_bodies(_joint: RID, _disable: boolean): void;
  public joint_is_disabled_collisions_between_bodies(_joint: RID): boolean;
  public joint_make_generic_6dof(_joint: RID, _body_A: RID, _local_ref_A: Transform3D, _body_B: RID, _local_ref_B: Transform3D): void;
  public generic_6dof_joint_set_param(_joint: RID, _axis: number, _param: number, _value: number): void;
  public generic_6dof_joint_get_param(_joint: RID, _axis: number, _param: number): number;
  public generic_6dof_joint_set_flag(_joint: RID, _axis: number, _flag: number, _enable: boolean): void;
  public generic_6dof_joint_get_flag(_joint: RID, _axis: number, _flag: number): boolean;
  public free_rid(_rid: RID): void;
  public set_active(_active: boolean): void;
  public get_process_info(_process_info: number): number;
  static JointType = {
    JOINT_TYPE_PIN = 0,
    JOINT_TYPE_HINGE = 1,
    JOINT_TYPE_SLIDER = 2,
    JOINT_TYPE_CONE_TWIST = 3,
    JOINT_TYPE_6DOF = 4,
    JOINT_TYPE_MAX = 5,
  }
  static PinJointParam = {
    PIN_JOINT_BIAS = 0,
    PIN_JOINT_DAMPING = 1,
    PIN_JOINT_IMPULSE_CLAMP = 2,
  }
  static HingeJointParam = {
    HINGE_JOINT_BIAS = 0,
    HINGE_JOINT_LIMIT_UPPER = 1,
    HINGE_JOINT_LIMIT_LOWER = 2,
    HINGE_JOINT_LIMIT_BIAS = 3,
    HINGE_JOINT_LIMIT_SOFTNESS = 4,
    HINGE_JOINT_LIMIT_RELAXATION = 5,
    HINGE_JOINT_MOTOR_TARGET_VELOCITY = 6,
    HINGE_JOINT_MOTOR_MAX_IMPULSE = 7,
  }
  static HingeJointFlag = {
    HINGE_JOINT_FLAG_USE_LIMIT = 0,
    HINGE_JOINT_FLAG_ENABLE_MOTOR = 1,
  }
  static SliderJointParam = {
    SLIDER_JOINT_LINEAR_LIMIT_UPPER = 0,
    SLIDER_JOINT_LINEAR_LIMIT_LOWER = 1,
    SLIDER_JOINT_LINEAR_LIMIT_SOFTNESS = 2,
    SLIDER_JOINT_LINEAR_LIMIT_RESTITUTION = 3,
    SLIDER_JOINT_LINEAR_LIMIT_DAMPING = 4,
    SLIDER_JOINT_LINEAR_MOTION_SOFTNESS = 5,
    SLIDER_JOINT_LINEAR_MOTION_RESTITUTION = 6,
    SLIDER_JOINT_LINEAR_MOTION_DAMPING = 7,
    SLIDER_JOINT_LINEAR_ORTHOGONAL_SOFTNESS = 8,
    SLIDER_JOINT_LINEAR_ORTHOGONAL_RESTITUTION = 9,
    SLIDER_JOINT_LINEAR_ORTHOGONAL_DAMPING = 10,
    SLIDER_JOINT_ANGULAR_LIMIT_UPPER = 11,
    SLIDER_JOINT_ANGULAR_LIMIT_LOWER = 12,
    SLIDER_JOINT_ANGULAR_LIMIT_SOFTNESS = 13,
    SLIDER_JOINT_ANGULAR_LIMIT_RESTITUTION = 14,
    SLIDER_JOINT_ANGULAR_LIMIT_DAMPING = 15,
    SLIDER_JOINT_ANGULAR_MOTION_SOFTNESS = 16,
    SLIDER_JOINT_ANGULAR_MOTION_RESTITUTION = 17,
    SLIDER_JOINT_ANGULAR_MOTION_DAMPING = 18,
    SLIDER_JOINT_ANGULAR_ORTHOGONAL_SOFTNESS = 19,
    SLIDER_JOINT_ANGULAR_ORTHOGONAL_RESTITUTION = 20,
    SLIDER_JOINT_ANGULAR_ORTHOGONAL_DAMPING = 21,
    SLIDER_JOINT_MAX = 22,
  }
  static ConeTwistJointParam = {
    CONE_TWIST_JOINT_SWING_SPAN = 0,
    CONE_TWIST_JOINT_TWIST_SPAN = 1,
    CONE_TWIST_JOINT_BIAS = 2,
    CONE_TWIST_JOINT_SOFTNESS = 3,
    CONE_TWIST_JOINT_RELAXATION = 4,
  }
  static G6DOFJointAxisParam = {
    G6DOF_JOINT_LINEAR_LOWER_LIMIT = 0,
    G6DOF_JOINT_LINEAR_UPPER_LIMIT = 1,
    G6DOF_JOINT_LINEAR_LIMIT_SOFTNESS = 2,
    G6DOF_JOINT_LINEAR_RESTITUTION = 3,
    G6DOF_JOINT_LINEAR_DAMPING = 4,
    G6DOF_JOINT_LINEAR_MOTOR_TARGET_VELOCITY = 5,
    G6DOF_JOINT_LINEAR_MOTOR_FORCE_LIMIT = 6,
    G6DOF_JOINT_LINEAR_SPRING_STIFFNESS = 7,
    G6DOF_JOINT_LINEAR_SPRING_DAMPING = 8,
    G6DOF_JOINT_LINEAR_SPRING_EQUILIBRIUM_POINT = 9,
    G6DOF_JOINT_ANGULAR_LOWER_LIMIT = 10,
    G6DOF_JOINT_ANGULAR_UPPER_LIMIT = 11,
    G6DOF_JOINT_ANGULAR_LIMIT_SOFTNESS = 12,
    G6DOF_JOINT_ANGULAR_DAMPING = 13,
    G6DOF_JOINT_ANGULAR_RESTITUTION = 14,
    G6DOF_JOINT_ANGULAR_FORCE_LIMIT = 15,
    G6DOF_JOINT_ANGULAR_ERP = 16,
    G6DOF_JOINT_ANGULAR_MOTOR_TARGET_VELOCITY = 17,
    G6DOF_JOINT_ANGULAR_MOTOR_FORCE_LIMIT = 18,
    G6DOF_JOINT_ANGULAR_SPRING_STIFFNESS = 19,
    G6DOF_JOINT_ANGULAR_SPRING_DAMPING = 20,
    G6DOF_JOINT_ANGULAR_SPRING_EQUILIBRIUM_POINT = 21,
    G6DOF_JOINT_MAX = 22,
  }
  static G6DOFJointAxisFlag = {
    G6DOF_JOINT_FLAG_ENABLE_LINEAR_LIMIT = 0,
    G6DOF_JOINT_FLAG_ENABLE_ANGULAR_LIMIT = 1,
    G6DOF_JOINT_FLAG_ENABLE_ANGULAR_SPRING = 2,
    G6DOF_JOINT_FLAG_ENABLE_LINEAR_SPRING = 3,
    G6DOF_JOINT_FLAG_ENABLE_MOTOR = 4,
    G6DOF_JOINT_FLAG_ENABLE_LINEAR_MOTOR = 5,
    G6DOF_JOINT_FLAG_MAX = 6,
  }
  static ShapeType = {
    SHAPE_WORLD_BOUNDARY = 0,
    SHAPE_SEPARATION_RAY = 1,
    SHAPE_SPHERE = 2,
    SHAPE_BOX = 3,
    SHAPE_CAPSULE = 4,
    SHAPE_CYLINDER = 5,
    SHAPE_CONVEX_POLYGON = 6,
    SHAPE_CONCAVE_POLYGON = 7,
    SHAPE_HEIGHTMAP = 8,
    SHAPE_SOFT_BODY = 9,
    SHAPE_CUSTOM = 10,
  }
  static AreaParameter = {
    AREA_PARAM_GRAVITY_OVERRIDE_MODE = 0,
    AREA_PARAM_GRAVITY = 1,
    AREA_PARAM_GRAVITY_VECTOR = 2,
    AREA_PARAM_GRAVITY_IS_POINT = 3,
    AREA_PARAM_GRAVITY_POINT_UNIT_DISTANCE = 4,
    AREA_PARAM_LINEAR_DAMP_OVERRIDE_MODE = 5,
    AREA_PARAM_LINEAR_DAMP = 6,
    AREA_PARAM_ANGULAR_DAMP_OVERRIDE_MODE = 7,
    AREA_PARAM_ANGULAR_DAMP = 8,
    AREA_PARAM_PRIORITY = 9,
    AREA_PARAM_WIND_FORCE_MAGNITUDE = 10,
    AREA_PARAM_WIND_SOURCE = 11,
    AREA_PARAM_WIND_DIRECTION = 12,
    AREA_PARAM_WIND_ATTENUATION_FACTOR = 13,
  }
  static AreaSpaceOverrideMode = {
    AREA_SPACE_OVERRIDE_DISABLED = 0,
    AREA_SPACE_OVERRIDE_COMBINE = 1,
    AREA_SPACE_OVERRIDE_COMBINE_REPLACE = 2,
    AREA_SPACE_OVERRIDE_REPLACE = 3,
    AREA_SPACE_OVERRIDE_REPLACE_COMBINE = 4,
  }
  static BodyMode = {
    BODY_MODE_STATIC = 0,
    BODY_MODE_KINEMATIC = 1,
    BODY_MODE_RIGID = 2,
    BODY_MODE_RIGID_LINEAR = 3,
  }
  static BodyParameter = {
    BODY_PARAM_BOUNCE = 0,
    BODY_PARAM_FRICTION = 1,
    BODY_PARAM_MASS = 2,
    BODY_PARAM_INERTIA = 3,
    BODY_PARAM_CENTER_OF_MASS = 4,
    BODY_PARAM_GRAVITY_SCALE = 5,
    BODY_PARAM_LINEAR_DAMP_MODE = 6,
    BODY_PARAM_ANGULAR_DAMP_MODE = 7,
    BODY_PARAM_LINEAR_DAMP = 8,
    BODY_PARAM_ANGULAR_DAMP = 9,
    BODY_PARAM_MAX = 10,
  }
  static BodyDampMode = {
    BODY_DAMP_MODE_COMBINE = 0,
    BODY_DAMP_MODE_REPLACE = 1,
  }
  static BodyState = {
    BODY_STATE_TRANSFORM = 0,
    BODY_STATE_LINEAR_VELOCITY = 1,
    BODY_STATE_ANGULAR_VELOCITY = 2,
    BODY_STATE_SLEEPING = 3,
    BODY_STATE_CAN_SLEEP = 4,
  }
  static AreaBodyStatus = {
    AREA_BODY_ADDED = 0,
    AREA_BODY_REMOVED = 1,
  }
  static ProcessInfo = {
    INFO_ACTIVE_OBJECTS = 0,
    INFO_COLLISION_PAIRS = 1,
    INFO_ISLAND_COUNT = 2,
  }
  static SpaceParameter = {
    SPACE_PARAM_CONTACT_RECYCLE_RADIUS = 0,
    SPACE_PARAM_CONTACT_MAX_SEPARATION = 1,
    SPACE_PARAM_CONTACT_MAX_ALLOWED_PENETRATION = 2,
    SPACE_PARAM_CONTACT_DEFAULT_BIAS = 3,
    SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD = 4,
    SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD = 5,
    SPACE_PARAM_BODY_TIME_TO_SLEEP = 6,
    SPACE_PARAM_SOLVER_ITERATIONS = 7,
  }
  static BodyAxis = {
    BODY_AXIS_LINEAR_X = 1,
    BODY_AXIS_LINEAR_Y = 2,
    BODY_AXIS_LINEAR_Z = 4,
    BODY_AXIS_ANGULAR_X = 8,
    BODY_AXIS_ANGULAR_Y = 16,
    BODY_AXIS_ANGULAR_Z = 32,
  }
}