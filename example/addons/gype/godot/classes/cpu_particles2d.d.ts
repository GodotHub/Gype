
import { Node } from "@godot/classes/node";
import { Gradient } from "@godot/classes/gradient";
import { Texture2D } from "@godot/classes/texture2d";
import { Curve } from "@godot/classes/curve";
import { Node2D } from "@godot/classes/node2d";
export declare class CPUParticles2D extends Node2D{
  public set_emitting(_emitting: boolean): void;
  public set_amount(_amount: number): void;
  public set_lifetime(_secs: number): void;
  public set_one_shot(_enable: boolean): void;
  public set_pre_process_time(_secs: number): void;
  public set_explosiveness_ratio(_ratio: number): void;
  public set_randomness_ratio(_ratio: number): void;
  public set_lifetime_randomness(_random: number): void;
  public set_use_local_coordinates(_enable: boolean): void;
  public set_fixed_fps(_fps: number): void;
  public set_fractional_delta(_enable: boolean): void;
  public set_speed_scale(_scale: number): void;
  public is_emitting(): boolean;
  public get_amount(): number;
  public get_lifetime(): number;
  public get_one_shot(): boolean;
  public get_pre_process_time(): number;
  public get_explosiveness_ratio(): number;
  public get_randomness_ratio(): number;
  public get_lifetime_randomness(): number;
  public get_use_local_coordinates(): boolean;
  public get_fixed_fps(): number;
  public get_fractional_delta(): boolean;
  public get_speed_scale(): number;
  public set_draw_order(_order: number): void;
  public get_draw_order(): number;
  public set_texture(_texture: Texture2D): void;
  public get_texture(): Texture2D;
  public restart(): void;
  public set_direction(_direction: Vector2): void;
  public get_direction(): Vector2;
  public set_spread(_spread: number): void;
  public get_spread(): number;
  public set_param_min(_param: number, _value: number): void;
  public get_param_min(_param: number): number;
  public set_param_max(_param: number, _value: number): void;
  public get_param_max(_param: number): number;
  public set_param_curve(_param: number, _curve: Curve): void;
  public get_param_curve(_param: number): Curve;
  public set_color(_color: Color): void;
  public get_color(): Color;
  public set_color_ramp(_ramp: Gradient): void;
  public get_color_ramp(): Gradient;
  public set_color_initial_ramp(_ramp: Gradient): void;
  public get_color_initial_ramp(): Gradient;
  public set_particle_flag(_particle_flag: number, _enable: boolean): void;
  public get_particle_flag(_particle_flag: number): boolean;
  public set_emission_shape(_shape: number): void;
  public get_emission_shape(): number;
  public set_emission_sphere_radius(_radius: number): void;
  public get_emission_sphere_radius(): number;
  public set_emission_rect_extents(_extents: Vector2): void;
  public get_emission_rect_extents(): Vector2;
  public set_emission_points(_array: PackedVector2Array): void;
  public get_emission_points(): PackedVector2Array;
  public set_emission_normals(_array: PackedVector2Array): void;
  public get_emission_normals(): PackedVector2Array;
  public set_emission_colors(_array: PackedColorArray): void;
  public get_emission_colors(): PackedColorArray;
  public get_gravity(): Vector2;
  public set_gravity(_accel_vec: Vector2): void;
  public get_split_scale(): boolean;
  public set_split_scale(_split_scale: boolean): void;
  public get_scale_curve_x(): Curve;
  public set_scale_curve_x(_scale_curve: Curve): void;
  public get_scale_curve_y(): Curve;
  public set_scale_curve_y(_scale_curve: Curve): void;
  public convert_from_particles(_particles: Node): void;
  public get emitting(): boolean;
  public set emitting(value): void;
  public get amount(): number;
  public set amount(value): void;
  public get lifetime(): number;
  public set lifetime(value): void;
  public get one_shot(): boolean;
  public set one_shot(value): void;
  public get preprocess(): number;
  public set preprocess(value): void;
  public get speed_scale(): number;
  public set speed_scale(value): void;
  public get explosiveness(): number;
  public set explosiveness(value): void;
  public get randomness(): number;
  public set randomness(value): void;
  public get lifetime_randomness(): number;
  public set lifetime_randomness(value): void;
  public get fixed_fps(): number;
  public set fixed_fps(value): void;
  public get fract_delta(): boolean;
  public set fract_delta(value): void;
  public get local_coords(): boolean;
  public set local_coords(value): void;
  public get draw_order(): number;
  public set draw_order(value): void;
  public get texture(): Texture2D;
  public set texture(value): void;
  public get emission_shape(): number;
  public set emission_shape(value): void;
  public get emission_sphere_radius(): number;
  public set emission_sphere_radius(value): void;
  public get emission_rect_extents(): Vector2;
  public set emission_rect_extents(value): void;
  public get emission_points(): PackedVector2Array;
  public set emission_points(value): void;
  public get emission_normals(): PackedVector2Array;
  public set emission_normals(value): void;
  public get emission_colors(): PackedColorArray;
  public set emission_colors(value): void;
  public get particle_flag_align_y(): boolean;
  public set particle_flag_align_y(value): void;
  public get direction(): Vector2;
  public set direction(value): void;
  public get spread(): number;
  public set spread(value): void;
  public get gravity(): Vector2;
  public set gravity(value): void;
  public get initial_velocity_min(): number;
  public set initial_velocity_min(value): void;
  public get initial_velocity_max(): number;
  public set initial_velocity_max(value): void;
  public get angular_velocity_min(): number;
  public set angular_velocity_min(value): void;
  public get angular_velocity_max(): number;
  public set angular_velocity_max(value): void;
  public get angular_velocity_curve(): Curve;
  public set angular_velocity_curve(value): void;
  public get orbit_velocity_min(): number;
  public set orbit_velocity_min(value): void;
  public get orbit_velocity_max(): number;
  public set orbit_velocity_max(value): void;
  public get orbit_velocity_curve(): Curve;
  public set orbit_velocity_curve(value): void;
  public get linear_accel_min(): number;
  public set linear_accel_min(value): void;
  public get linear_accel_max(): number;
  public set linear_accel_max(value): void;
  public get linear_accel_curve(): Curve;
  public set linear_accel_curve(value): void;
  public get radial_accel_min(): number;
  public set radial_accel_min(value): void;
  public get radial_accel_max(): number;
  public set radial_accel_max(value): void;
  public get radial_accel_curve(): Curve;
  public set radial_accel_curve(value): void;
  public get tangential_accel_min(): number;
  public set tangential_accel_min(value): void;
  public get tangential_accel_max(): number;
  public set tangential_accel_max(value): void;
  public get tangential_accel_curve(): Curve;
  public set tangential_accel_curve(value): void;
  public get damping_min(): number;
  public set damping_min(value): void;
  public get damping_max(): number;
  public set damping_max(value): void;
  public get damping_curve(): Curve;
  public set damping_curve(value): void;
  public get angle_min(): number;
  public set angle_min(value): void;
  public get angle_max(): number;
  public set angle_max(value): void;
  public get angle_curve(): Curve;
  public set angle_curve(value): void;
  public get scale_amount_min(): number;
  public set scale_amount_min(value): void;
  public get scale_amount_max(): number;
  public set scale_amount_max(value): void;
  public get scale_amount_curve(): Curve;
  public set scale_amount_curve(value): void;
  public get split_scale(): boolean;
  public set split_scale(value): void;
  public get scale_curve_x(): Curve;
  public set scale_curve_x(value): void;
  public get scale_curve_y(): Curve;
  public set scale_curve_y(value): void;
  public get color(): Color;
  public set color(value): void;
  public get color_ramp(): Gradient;
  public set color_ramp(value): void;
  public get color_initial_ramp(): Gradient;
  public set color_initial_ramp(value): void;
  public get hue_variation_min(): number;
  public set hue_variation_min(value): void;
  public get hue_variation_max(): number;
  public set hue_variation_max(value): void;
  public get hue_variation_curve(): Curve;
  public set hue_variation_curve(value): void;
  public get anim_speed_min(): number;
  public set anim_speed_min(value): void;
  public get anim_speed_max(): number;
  public set anim_speed_max(value): void;
  public get anim_speed_curve(): Curve;
  public set anim_speed_curve(value): void;
  public get anim_offset_min(): number;
  public set anim_offset_min(value): void;
  public get anim_offset_max(): number;
  public set anim_offset_max(value): void;
  public get anim_offset_curve(): Curve;
  public set anim_offset_curve(value): void;
  static DrawOrder = {
    DRAW_ORDER_INDEX = 0,
    DRAW_ORDER_LIFETIME = 1,
  }
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
    PARAM_MAX = 12,
  }
  static ParticleFlags = {
    PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY = 0,
    PARTICLE_FLAG_ROTATE_Y = 1,
    PARTICLE_FLAG_DISABLE_Z = 2,
    PARTICLE_FLAG_MAX = 3,
  }
  static EmissionShape = {
    EMISSION_SHAPE_POINT = 0,
    EMISSION_SHAPE_SPHERE = 1,
    EMISSION_SHAPE_SPHERE_SURFACE = 2,
    EMISSION_SHAPE_RECTANGLE = 3,
    EMISSION_SHAPE_POINTS = 4,
    EMISSION_SHAPE_DIRECTED_POINTS = 5,
    EMISSION_SHAPE_MAX = 6,
  }
  public get finished(): Signal;
}