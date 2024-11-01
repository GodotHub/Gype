
import { GodotObject } from "@godot/classes/godot_object";
import { PhysicsTestMotionParameters2D } from "@godot/classes/physics_test_motion_parameters2d";
import { PhysicsTestMotionResult2D } from "@godot/classes/physics_test_motion_result2d";
import { PhysicsDirectBodyState2D } from "@godot/classes/physics_direct_body_state2d";
import { PhysicsDirectSpaceState2D } from "@godot/classes/physics_direct_space_state2d";

export declare class PhysicsServer2D extends GodotObject{
  public world_boundary_shape_create(): RID;
  public separation_ray_shape_create(): RID;
  public segment_shape_create(): RID;
  public circle_shape_create(): RID;
  public rectangle_shape_create(): RID;
  public capsule_shape_create(): RID;
  public convex_polygon_shape_create(): RID;
  public concave_polygon_shape_create(): RID;
  public shape_set_data(_shape: RID, _data: any): void;
  public shape_get_type(_shape: RID): number;
  public shape_get_data(_shape: RID): any;
  public space_create(): RID;
  public space_set_active(_space: RID, _active: boolean): void;
  public space_is_active(_space: RID): boolean;
  public space_set_param(_space: RID, _param: number, _value: number): void;
  public space_get_param(_space: RID, _param: number): number;
  public space_get_direct_state(_space: RID): PhysicsDirectSpaceState2D;
  public area_create(): RID;
  public area_set_space(_area: RID, _space: RID): void;
  public area_get_space(_area: RID): RID;
  public area_add_shape(_area: RID, _shape: RID, _transform: Transform2D, _disabled: boolean): void;
  public area_set_shape(_area: RID, _shape_idx: number, _shape: RID): void;
  public area_set_shape_transform(_area: RID, _shape_idx: number, _transform: Transform2D): void;
  public area_set_shape_disabled(_area: RID, _shape_idx: number, _disabled: boolean): void;
  public area_get_shape_count(_area: RID): number;
  public area_get_shape(_area: RID, _shape_idx: number): RID;
  public area_get_shape_transform(_area: RID, _shape_idx: number): Transform2D;
  public area_remove_shape(_area: RID, _shape_idx: number): void;
  public area_clear_shapes(_area: RID): void;
  public area_set_collision_layer(_area: RID, _layer: number): void;
  public area_get_collision_layer(_area: RID): number;
  public area_set_collision_mask(_area: RID, _mask: number): void;
  public area_get_collision_mask(_area: RID): number;
  public area_set_param(_area: RID, _param: number, _value: any): void;
  public area_set_transform(_area: RID, _transform: Transform2D): void;
  public area_get_param(_area: RID, _param: number): any;
  public area_get_transform(_area: RID): Transform2D;
  public area_attach_object_instance_id(_area: RID, _id: number): void;
  public area_get_object_instance_id(_area: RID): number;
  public area_attach_canvas_instance_id(_area: RID, _id: number): void;
  public area_get_canvas_instance_id(_area: RID): number;
  public area_set_monitor_callback(_area: RID, _callback: Callable): void;
  public area_set_area_monitor_callback(_area: RID, _callback: Callable): void;
  public area_set_monitorable(_area: RID, _monitorable: boolean): void;
  public body_create(): RID;
  public body_set_space(_body: RID, _space: RID): void;
  public body_get_space(_body: RID): RID;
  public body_set_mode(_body: RID, _mode: number): void;
  public body_get_mode(_body: RID): number;
  public body_add_shape(_body: RID, _shape: RID, _transform: Transform2D, _disabled: boolean): void;
  public body_set_shape(_body: RID, _shape_idx: number, _shape: RID): void;
  public body_set_shape_transform(_body: RID, _shape_idx: number, _transform: Transform2D): void;
  public body_get_shape_count(_body: RID): number;
  public body_get_shape(_body: RID, _shape_idx: number): RID;
  public body_get_shape_transform(_body: RID, _shape_idx: number): Transform2D;
  public body_remove_shape(_body: RID, _shape_idx: number): void;
  public body_clear_shapes(_body: RID): void;
  public body_set_shape_disabled(_body: RID, _shape_idx: number, _disabled: boolean): void;
  public body_set_shape_as_one_way_collision(_body: RID, _shape_idx: number, _enable: boolean, _margin: number): void;
  public body_attach_object_instance_id(_body: RID, _id: number): void;
  public body_get_object_instance_id(_body: RID): number;
  public body_attach_canvas_instance_id(_body: RID, _id: number): void;
  public body_get_canvas_instance_id(_body: RID): number;
  public body_set_continuous_collision_detection_mode(_body: RID, _mode: number): void;
  public body_get_continuous_collision_detection_mode(_body: RID): number;
  public body_set_collision_layer(_body: RID, _layer: number): void;
  public body_get_collision_layer(_body: RID): number;
  public body_set_collision_mask(_body: RID, _mask: number): void;
  public body_get_collision_mask(_body: RID): number;
  public body_set_collision_priority(_body: RID, _priority: number): void;
  public body_get_collision_priority(_body: RID): number;
  public body_set_param(_body: RID, _param: number, _value: any): void;
  public body_get_param(_body: RID, _param: number): any;
  public body_reset_mass_properties(_body: RID): void;
  public body_set_state(_body: RID, _state: number, _value: any): void;
  public body_get_state(_body: RID, _state: number): any;
  public body_apply_central_impulse(_body: RID, _impulse: Vector2): void;
  public body_apply_torque_impulse(_body: RID, _impulse: number): void;
  public body_apply_impulse(_body: RID, _impulse: Vector2, _position: Vector2): void;
  public body_apply_central_force(_body: RID, _force: Vector2): void;
  public body_apply_force(_body: RID, _force: Vector2, _position: Vector2): void;
  public body_apply_torque(_body: RID, _torque: number): void;
  public body_add_constant_central_force(_body: RID, _force: Vector2): void;
  public body_add_constant_force(_body: RID, _force: Vector2, _position: Vector2): void;
  public body_add_constant_torque(_body: RID, _torque: number): void;
  public body_set_constant_force(_body: RID, _force: Vector2): void;
  public body_get_constant_force(_body: RID): Vector2;
  public body_set_constant_torque(_body: RID, _torque: number): void;
  public body_get_constant_torque(_body: RID): number;
  public body_set_axis_velocity(_body: RID, _axis_velocity: Vector2): void;
  public body_add_collision_exception(_body: RID, _excepted_body: RID): void;
  public body_remove_collision_exception(_body: RID, _excepted_body: RID): void;
  public body_set_max_contacts_reported(_body: RID, _amount: number): void;
  public body_get_max_contacts_reported(_body: RID): number;
  public body_set_omit_force_integration(_body: RID, _enable: boolean): void;
  public body_is_omitting_force_integration(_body: RID): boolean;
  public body_set_state_sync_callback(_body: RID, _callable: Callable): void;
  public body_set_force_integration_callback(_body: RID, _callable: Callable, _userdata: any): void;
  public body_test_motion(_body: RID, _parameters: PhysicsTestMotionParameters2D, _result: PhysicsTestMotionResult2D): boolean;
  public body_get_direct_state(_body: RID): PhysicsDirectBodyState2D;
  public joint_create(): RID;
  public joint_clear(_joint: RID): void;
  public joint_set_param(_joint: RID, _param: number, _value: number): void;
  public joint_get_param(_joint: RID, _param: number): number;
  public joint_disable_collisions_between_bodies(_joint: RID, _disable: boolean): void;
  public joint_is_disabled_collisions_between_bodies(_joint: RID): boolean;
  public joint_make_pin(_joint: RID, _anchor: Vector2, _body_a: RID, _body_b: RID): void;
  public joint_make_groove(_joint: RID, _groove1_a: Vector2, _groove2_a: Vector2, _anchor_b: Vector2, _body_a: RID, _body_b: RID): void;
  public joint_make_damped_spring(_joint: RID, _anchor_a: Vector2, _anchor_b: Vector2, _body_a: RID, _body_b: RID): void;
  public pin_joint_set_flag(_joint: RID, _flag: number, _enabled: boolean): void;
  public pin_joint_get_flag(_joint: RID, _flag: number): boolean;
  public pin_joint_set_param(_joint: RID, _param: number, _value: number): void;
  public pin_joint_get_param(_joint: RID, _param: number): number;
  public damped_spring_joint_set_param(_joint: RID, _param: number, _value: number): void;
  public damped_spring_joint_get_param(_joint: RID, _param: number): number;
  public joint_get_type(_joint: RID): number;
  public free_rid(_rid: RID): void;
  public set_active(_active: boolean): void;
  public get_process_info(_process_info: number): number;
  static SpaceParameter = {
    SPACE_PARAM_CONTACT_RECYCLE_RADIUS = 0,
    SPACE_PARAM_CONTACT_MAX_SEPARATION = 1,
    SPACE_PARAM_CONTACT_MAX_ALLOWED_PENETRATION = 2,
    SPACE_PARAM_CONTACT_DEFAULT_BIAS = 3,
    SPACE_PARAM_BODY_LINEAR_VELOCITY_SLEEP_THRESHOLD = 4,
    SPACE_PARAM_BODY_ANGULAR_VELOCITY_SLEEP_THRESHOLD = 5,
    SPACE_PARAM_BODY_TIME_TO_SLEEP = 6,
    SPACE_PARAM_CONSTRAINT_DEFAULT_BIAS = 7,
    SPACE_PARAM_SOLVER_ITERATIONS = 8,
  }
  static ShapeType = {
    SHAPE_WORLD_BOUNDARY = 0,
    SHAPE_SEPARATION_RAY = 1,
    SHAPE_SEGMENT = 2,
    SHAPE_CIRCLE = 3,
    SHAPE_RECTANGLE = 4,
    SHAPE_CAPSULE = 5,
    SHAPE_CONVEX_POLYGON = 6,
    SHAPE_CONCAVE_POLYGON = 7,
    SHAPE_CUSTOM = 8,
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
  static JointType = {
    JOINT_TYPE_PIN = 0,
    JOINT_TYPE_GROOVE = 1,
    JOINT_TYPE_DAMPED_SPRING = 2,
    JOINT_TYPE_MAX = 3,
  }
  static JointParam = {
    JOINT_PARAM_BIAS = 0,
    JOINT_PARAM_MAX_BIAS = 1,
    JOINT_PARAM_MAX_FORCE = 2,
  }
  static PinJointParam = {
    PIN_JOINT_SOFTNESS = 0,
    PIN_JOINT_LIMIT_UPPER = 1,
    PIN_JOINT_LIMIT_LOWER = 2,
    PIN_JOINT_MOTOR_TARGET_VELOCITY = 3,
  }
  static PinJointFlag = {
    PIN_JOINT_FLAG_ANGULAR_LIMIT_ENABLED = 0,
    PIN_JOINT_FLAG_MOTOR_ENABLED = 1,
  }
  static DampedSpringParam = {
    DAMPED_SPRING_REST_LENGTH = 0,
    DAMPED_SPRING_STIFFNESS = 1,
    DAMPED_SPRING_DAMPING = 2,
  }
  static CCDMode = {
    CCD_MODE_DISABLED = 0,
    CCD_MODE_CAST_RAY = 1,
    CCD_MODE_CAST_SHAPE = 2,
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
}