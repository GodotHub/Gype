
import { Material } from "@godot/classes/material";
import { Texture2D } from "@godot/classes/texture2d";


export declare class ParticleProcessMaterial extends Material{
  public set_direction(_degrees: Vector3): void;
  public get_direction(): Vector3;
  public set_inherit_velocity_ratio(_ratio: number): void;
  public get_inherit_velocity_ratio(): number;
  public set_spread(_degrees: number): void;
  public get_spread(): number;
  public set_flatness(_amount: number): void;
  public get_flatness(): number;
  public set_param(_param: number, _value: Vector2): void;
  public get_param(_param: number): Vector2;
  public set_param_min(_param: number, _value: number): void;
  public get_param_min(_param: number): number;
  public set_param_max(_param: number, _value: number): void;
  public get_param_max(_param: number): number;
  public set_param_texture(_param: number, _texture: Texture2D): void;
  public get_param_texture(_param: number): Texture2D;
  public set_color(_color: Color): void;
  public get_color(): Color;
  public set_color_ramp(_ramp: Texture2D): void;
  public get_color_ramp(): Texture2D;
  public set_alpha_curve(_curve: Texture2D): void;
  public get_alpha_curve(): Texture2D;
  public set_emission_curve(_curve: Texture2D): void;
  public get_emission_curve(): Texture2D;
  public set_color_initial_ramp(_ramp: Texture2D): void;
  public get_color_initial_ramp(): Texture2D;
  public set_velocity_limit_curve(_curve: Texture2D): void;
  public get_velocity_limit_curve(): Texture2D;
  public set_particle_flag(_particle_flag: number, _enable: boolean): void;
  public get_particle_flag(_particle_flag: number): boolean;
  public set_velocity_pivot(_pivot: Vector3): void;
  public get_velocity_pivot(): Vector3;
  public set_emission_shape(_shape: number): void;
  public get_emission_shape(): number;
  public set_emission_sphere_radius(_radius: number): void;
  public get_emission_sphere_radius(): number;
  public set_emission_box_extents(_extents: Vector3): void;
  public get_emission_box_extents(): Vector3;
  public set_emission_point_texture(_texture: Texture2D): void;
  public get_emission_point_texture(): Texture2D;
  public set_emission_normal_texture(_texture: Texture2D): void;
  public get_emission_normal_texture(): Texture2D;
  public set_emission_color_texture(_texture: Texture2D): void;
  public get_emission_color_texture(): Texture2D;
  public set_emission_point_count(_point_count: number): void;
  public get_emission_point_count(): number;
  public set_emission_ring_axis(_axis: Vector3): void;
  public get_emission_ring_axis(): Vector3;
  public set_emission_ring_height(_height: number): void;
  public get_emission_ring_height(): number;
  public set_emission_ring_radius(_radius: number): void;
  public get_emission_ring_radius(): number;
  public set_emission_ring_inner_radius(_inner_radius: number): void;
  public get_emission_ring_inner_radius(): number;
  public set_emission_shape_offset(_emission_shape_offset: Vector3): void;
  public get_emission_shape_offset(): Vector3;
  public set_emission_shape_scale(_emission_shape_scale: Vector3): void;
  public get_emission_shape_scale(): Vector3;
  public get_turbulence_enabled(): boolean;
  public set_turbulence_enabled(_turbulence_enabled: boolean): void;
  public get_turbulence_noise_strength(): number;
  public set_turbulence_noise_strength(_turbulence_noise_strength: number): void;
  public get_turbulence_noise_scale(): number;
  public set_turbulence_noise_scale(_turbulence_noise_scale: number): void;
  public get_turbulence_noise_speed_random(): number;
  public set_turbulence_noise_speed_random(_turbulence_noise_speed_random: number): void;
  public get_turbulence_noise_speed(): Vector3;
  public set_turbulence_noise_speed(_turbulence_noise_speed: Vector3): void;
  public get_gravity(): Vector3;
  public set_gravity(_accel_vec: Vector3): void;
  public set_lifetime_randomness(_randomness: number): void;
  public get_lifetime_randomness(): number;
  public get_sub_emitter_mode(): number;
  public set_sub_emitter_mode(_mode: number): void;
  public get_sub_emitter_frequency(): number;
  public set_sub_emitter_frequency(_hz: number): void;
  public get_sub_emitter_amount_at_end(): number;
  public set_sub_emitter_amount_at_end(_amount: number): void;
  public get_sub_emitter_amount_at_collision(): number;
  public set_sub_emitter_amount_at_collision(_amount: number): void;
  public get_sub_emitter_keep_velocity(): boolean;
  public set_sub_emitter_keep_velocity(_enable: boolean): void;
  public set_attractor_interaction_enabled(_enabled: boolean): void;
  public is_attractor_interaction_enabled(): boolean;
  public set_collision_mode(_mode: number): void;
  public get_collision_mode(): number;
  public set_collision_use_scale(_radius: boolean): void;
  public is_collision_using_scale(): boolean;
  public set_collision_friction(_friction: number): void;
  public get_collision_friction(): number;
  public set_collision_bounce(_bounce: number): void;
  public get_collision_bounce(): number;
  public get lifetime_randomness(): number;
  public set lifetime_randomness(value): void;
  public get particle_flag_align_y(): boolean;
  public set particle_flag_align_y(value): void;
  public get particle_flag_rotate_y(): boolean;
  public set particle_flag_rotate_y(value): void;
  public get particle_flag_disable_z(): boolean;
  public set particle_flag_disable_z(value): void;
  public get particle_flag_damping_as_friction(): boolean;
  public set particle_flag_damping_as_friction(value): void;
  public get emission_shape_offset(): Vector3;
  public set emission_shape_offset(value): void;
  public get emission_shape_scale(): Vector3;
  public set emission_shape_scale(value): void;
  public get emission_shape(): number;
  public set emission_shape(value): void;
  public get emission_sphere_radius(): number;
  public set emission_sphere_radius(value): void;
  public get emission_box_extents(): Vector3;
  public set emission_box_extents(value): void;
  public get emission_point_texture(): Texture2D;
  public set emission_point_texture(value): void;
  public get emission_normal_texture(): Texture2D;
  public set emission_normal_texture(value): void;
  public get emission_color_texture(): Texture2D;
  public set emission_color_texture(value): void;
  public get emission_point_count(): number;
  public set emission_point_count(value): void;
  public get emission_ring_axis(): Vector3;
  public set emission_ring_axis(value): void;
  public get emission_ring_height(): number;
  public set emission_ring_height(value): void;
  public get emission_ring_radius(): number;
  public set emission_ring_radius(value): void;
  public get emission_ring_inner_radius(): number;
  public set emission_ring_inner_radius(value): void;
  public get angle(): Vector2;
  public set angle(value): void;
  public get angle_min(): number;
  public set angle_min(value): void;
  public get angle_max(): number;
  public set angle_max(value): void;
  public get angle_curve(): CurveTexture;
  public set angle_curve(value): void;
  public get inherit_velocity_ratio(): number;
  public set inherit_velocity_ratio(value): void;
  public get velocity_pivot(): Vector3;
  public set velocity_pivot(value): void;
  public get direction(): Vector3;
  public set direction(value): void;
  public get spread(): number;
  public set spread(value): void;
  public get flatness(): number;
  public set flatness(value): void;
  public get initial_velocity(): Vector2;
  public set initial_velocity(value): void;
  public get initial_velocity_min(): number;
  public set initial_velocity_min(value): void;
  public get initial_velocity_max(): number;
  public set initial_velocity_max(value): void;
  public get angular_velocity(): Vector2;
  public set angular_velocity(value): void;
  public get angular_velocity_min(): number;
  public set angular_velocity_min(value): void;
  public get angular_velocity_max(): number;
  public set angular_velocity_max(value): void;
  public get angular_velocity_curve(): CurveTexture;
  public set angular_velocity_curve(value): void;
  public get directional_velocity(): Vector2;
  public set directional_velocity(value): void;
  public get directional_velocity_min(): number;
  public set directional_velocity_min(value): void;
  public get directional_velocity_max(): number;
  public set directional_velocity_max(value): void;
  public get directional_velocity_curve(): CurveXYZTexture;
  public set directional_velocity_curve(value): void;
  public get orbit_velocity(): Vector2;
  public set orbit_velocity(value): void;
  public get orbit_velocity_min(): number;
  public set orbit_velocity_min(value): void;
  public get orbit_velocity_max(): number;
  public set orbit_velocity_max(value): void;
  public get orbit_velocity_curve(): CurveTexture;
  public set orbit_velocity_curve(value): void;
  public get radial_velocity(): Vector2;
  public set radial_velocity(value): void;
  public get radial_velocity_min(): number;
  public set radial_velocity_min(value): void;
  public get radial_velocity_max(): number;
  public set radial_velocity_max(value): void;
  public get radial_velocity_curve(): CurveTexture;
  public set radial_velocity_curve(value): void;
  public get velocity_limit_curve(): CurveTexture;
  public set velocity_limit_curve(value): void;
  public get gravity(): Vector3;
  public set gravity(value): void;
  public get linear_accel(): Vector2;
  public set linear_accel(value): void;
  public get linear_accel_min(): number;
  public set linear_accel_min(value): void;
  public get linear_accel_max(): number;
  public set linear_accel_max(value): void;
  public get linear_accel_curve(): CurveTexture;
  public set linear_accel_curve(value): void;
  public get radial_accel(): Vector2;
  public set radial_accel(value): void;
  public get radial_accel_min(): number;
  public set radial_accel_min(value): void;
  public get radial_accel_max(): number;
  public set radial_accel_max(value): void;
  public get radial_accel_curve(): CurveTexture;
  public set radial_accel_curve(value): void;
  public get tangential_accel(): Vector2;
  public set tangential_accel(value): void;
  public get tangential_accel_min(): number;
  public set tangential_accel_min(value): void;
  public get tangential_accel_max(): number;
  public set tangential_accel_max(value): void;
  public get tangential_accel_curve(): CurveTexture;
  public set tangential_accel_curve(value): void;
  public get damping(): Vector2;
  public set damping(value): void;
  public get damping_min(): number;
  public set damping_min(value): void;
  public get damping_max(): number;
  public set damping_max(value): void;
  public get damping_curve(): CurveTexture;
  public set damping_curve(value): void;
  public get attractor_interaction_enabled(): boolean;
  public set attractor_interaction_enabled(value): void;
  public get scale(): Vector2;
  public set scale(value): void;
  public get scale_min(): number;
  public set scale_min(value): void;
  public get scale_max(): number;
  public set scale_max(value): void;
  public get scale_curve(): CurveTexture;
  public set scale_curve(value): void;
  public get scale_over_velocity(): Vector2;
  public set scale_over_velocity(value): void;
  public get scale_over_velocity_min(): number;
  public set scale_over_velocity_min(value): void;
  public get scale_over_velocity_max(): number;
  public set scale_over_velocity_max(value): void;
  public get scale_over_velocity_curve(): CurveTexture;
  public set scale_over_velocity_curve(value): void;
  public get color(): Color;
  public set color(value): void;
  public get color_ramp(): GradientTexture1D;
  public set color_ramp(value): void;
  public get color_initial_ramp(): GradientTexture1D;
  public set color_initial_ramp(value): void;
  public get alpha_curve(): CurveTexture;
  public set alpha_curve(value): void;
  public get emission_curve(): CurveTexture;
  public set emission_curve(value): void;
  public get hue_variation(): Vector2;
  public set hue_variation(value): void;
  public get hue_variation_min(): number;
  public set hue_variation_min(value): void;
  public get hue_variation_max(): number;
  public set hue_variation_max(value): void;
  public get hue_variation_curve(): CurveTexture;
  public set hue_variation_curve(value): void;
  public get anim_speed(): Vector2;
  public set anim_speed(value): void;
  public get anim_speed_min(): number;
  public set anim_speed_min(value): void;
  public get anim_speed_max(): number;
  public set anim_speed_max(value): void;
  public get anim_speed_curve(): CurveTexture;
  public set anim_speed_curve(value): void;
  public get anim_offset(): Vector2;
  public set anim_offset(value): void;
  public get anim_offset_min(): number;
  public set anim_offset_min(value): void;
  public get anim_offset_max(): number;
  public set anim_offset_max(value): void;
  public get anim_offset_curve(): CurveTexture;
  public set anim_offset_curve(value): void;
  public get turbulence_enabled(): boolean;
  public set turbulence_enabled(value): void;
  public get turbulence_noise_strength(): number;
  public set turbulence_noise_strength(value): void;
  public get turbulence_noise_scale(): number;
  public set turbulence_noise_scale(value): void;
  public get turbulence_noise_speed(): Vector3;
  public set turbulence_noise_speed(value): void;
  public get turbulence_noise_speed_random(): number;
  public set turbulence_noise_speed_random(value): void;
  public get turbulence_influence(): Vector2;
  public set turbulence_influence(value): void;
  public get turbulence_influence_min(): number;
  public set turbulence_influence_min(value): void;
  public get turbulence_influence_max(): number;
  public set turbulence_influence_max(value): void;
  public get turbulence_initial_displacement(): Vector2;
  public set turbulence_initial_displacement(value): void;
  public get turbulence_initial_displacement_min(): number;
  public set turbulence_initial_displacement_min(value): void;
  public get turbulence_initial_displacement_max(): number;
  public set turbulence_initial_displacement_max(value): void;
  public get turbulence_influence_over_life(): CurveTexture;
  public set turbulence_influence_over_life(value): void;
  public get collision_mode(): number;
  public set collision_mode(value): void;
  public get collision_friction(): number;
  public set collision_friction(value): void;
  public get collision_bounce(): number;
  public set collision_bounce(value): void;
  public get collision_use_scale(): boolean;
  public set collision_use_scale(value): void;
  public get sub_emitter_mode(): number;
  public set sub_emitter_mode(value): void;
  public get sub_emitter_frequency(): number;
  public set sub_emitter_frequency(value): void;
  public get sub_emitter_amount_at_end(): number;
  public set sub_emitter_amount_at_end(value): void;
  public get sub_emitter_amount_at_collision(): number;
  public set sub_emitter_amount_at_collision(value): void;
  public get sub_emitter_keep_velocity(): boolean;
  public set sub_emitter_keep_velocity(value): void;
  static Parameter = {
    PARAM_INITIAL_LINEAR_VELOCITY = 0,
    PARAM_ANGULAR_VELOCITY = 1,
    PARAM_ORBIT_VELOCITY = 2,
    PARAM_LINEAR_ACCEL = 3,
    PARAM_RADIAL_ACCEL = 4,
    PARAM_TANGENTIAL_ACCEL = 5,
    PARAM_DAMPING = 6,
    PARAM_ANGLE = 7,
    PARAM_SCALE = 8,
    PARAM_HUE_VARIATION = 9,
    PARAM_ANIM_SPEED = 10,
    PARAM_ANIM_OFFSET = 11,
    PARAM_RADIAL_VELOCITY = 15,
    PARAM_DIRECTIONAL_VELOCITY = 16,
    PARAM_SCALE_OVER_VELOCITY = 17,
    PARAM_MAX = 18,
    PARAM_TURB_VEL_INFLUENCE = 13,
    PARAM_TURB_INIT_DISPLACEMENT = 14,
    PARAM_TURB_INFLUENCE_OVER_LIFE = 12,
  }
  static ParticleFlags = {
    PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY = 0,
    PARTICLE_FLAG_ROTATE_Y = 1,
    PARTICLE_FLAG_DISABLE_Z = 2,
    PARTICLE_FLAG_DAMPING_AS_FRICTION = 3,
    PARTICLE_FLAG_MAX = 4,
  }
  static EmissionShape = {
    EMISSION_SHAPE_POINT = 0,
    EMISSION_SHAPE_SPHERE = 1,
    EMISSION_SHAPE_SPHERE_SURFACE = 2,
    EMISSION_SHAPE_BOX = 3,
    EMISSION_SHAPE_POINTS = 4,
    EMISSION_SHAPE_DIRECTED_POINTS = 5,
    EMISSION_SHAPE_RING = 6,
    EMISSION_SHAPE_MAX = 7,
  }
  static SubEmitterMode = {
    SUB_EMITTER_DISABLED = 0,
    SUB_EMITTER_CONSTANT = 1,
    SUB_EMITTER_AT_END = 2,
    SUB_EMITTER_AT_COLLISION = 3,
    SUB_EMITTER_MAX = 4,
  }
  static CollisionMode = {
    COLLISION_DISABLED = 0,
    COLLISION_RIGID = 1,
    COLLISION_HIDE_ON_CONTACT = 2,
    COLLISION_MAX = 3,
  }
}