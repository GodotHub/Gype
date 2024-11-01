
import { Node2D } from "@godot/classes/node2d";
import { Curve } from "@godot/classes/curve";
import { Texture2D } from "@godot/classes/texture2d";
import { Node } from "@godot/classes/node";
import { Gradient } from "@godot/classes/gradient";

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
  public get emitting(): boolean {
    is_emitting();
  }
  public set emitting(value): void {
    set_emitting(value);
  }
  public get amount(): number {
    get_amount();
  }
  public set amount(value): void {
    set_amount(value);
  }
  public get lifetime(): number {
    get_lifetime();
  }
  public set lifetime(value): void {
    set_lifetime(value);
  }
  public get one_shot(): boolean {
    get_one_shot();
  }
  public set one_shot(value): void {
    set_one_shot(value);
  }
  public get preprocess(): number {
    get_pre_process_time();
  }
  public set preprocess(value): void {
    set_pre_process_time(value);
  }
  public get speed_scale(): number {
    get_speed_scale();
  }
  public set speed_scale(value): void {
    set_speed_scale(value);
  }
  public get explosiveness(): number {
    get_explosiveness_ratio();
  }
  public set explosiveness(value): void {
    set_explosiveness_ratio(value);
  }
  public get randomness(): number {
    get_randomness_ratio();
  }
  public set randomness(value): void {
    set_randomness_ratio(value);
  }
  public get lifetime_randomness(): number {
    get_lifetime_randomness();
  }
  public set lifetime_randomness(value): void {
    set_lifetime_randomness(value);
  }
  public get fixed_fps(): number {
    get_fixed_fps();
  }
  public set fixed_fps(value): void {
    set_fixed_fps(value);
  }
  public get fract_delta(): boolean {
    get_fractional_delta();
  }
  public set fract_delta(value): void {
    set_fractional_delta(value);
  }
  public get local_coords(): boolean {
    get_use_local_coordinates();
  }
  public set local_coords(value): void {
    set_use_local_coordinates(value);
  }
  public get draw_order(): number {
    get_draw_order();
  }
  public set draw_order(value): void {
    set_draw_order(value);
  }
  public get texture(): Texture2D {
    get_texture();
  }
  public set texture(value): void {
    set_texture(value);
  }
  public get emission_shape(): number {
    get_emission_shape();
  }
  public set emission_shape(value): void {
    set_emission_shape(value);
  }
  public get emission_sphere_radius(): number {
    get_emission_sphere_radius();
  }
  public set emission_sphere_radius(value): void {
    set_emission_sphere_radius(value);
  }
  public get emission_rect_extents(): Vector2 {
    get_emission_rect_extents();
  }
  public set emission_rect_extents(value): void {
    set_emission_rect_extents(value);
  }
  public get emission_points(): PackedVector2Array {
    get_emission_points();
  }
  public set emission_points(value): void {
    set_emission_points(value);
  }
  public get emission_normals(): PackedVector2Array {
    get_emission_normals();
  }
  public set emission_normals(value): void {
    set_emission_normals(value);
  }
  public get emission_colors(): PackedColorArray {
    get_emission_colors();
  }
  public set emission_colors(value): void {
    set_emission_colors(value);
  }
  public get particle_flag_align_y(): boolean {
    get_particle_flag();
  }
  public set particle_flag_align_y(value): void {
    set_particle_flag(value);
  }
  public get direction(): Vector2 {
    get_direction();
  }
  public set direction(value): void {
    set_direction(value);
  }
  public get spread(): number {
    get_spread();
  }
  public set spread(value): void {
    set_spread(value);
  }
  public get gravity(): Vector2 {
    get_gravity();
  }
  public set gravity(value): void {
    set_gravity(value);
  }
  public get initial_velocity_min(): number {
    get_param_min();
  }
  public set initial_velocity_min(value): void {
    set_param_min(value);
  }
  public get initial_velocity_max(): number {
    get_param_max();
  }
  public set initial_velocity_max(value): void {
    set_param_max(value);
  }
  public get angular_velocity_min(): number {
    get_param_min();
  }
  public set angular_velocity_min(value): void {
    set_param_min(value);
  }
  public get angular_velocity_max(): number {
    get_param_max();
  }
  public set angular_velocity_max(value): void {
    set_param_max(value);
  }
  public get angular_velocity_curve(): Curve {
    get_param_curve();
  }
  public set angular_velocity_curve(value): void {
    set_param_curve(value);
  }
  public get orbit_velocity_min(): number {
    get_param_min();
  }
  public set orbit_velocity_min(value): void {
    set_param_min(value);
  }
  public get orbit_velocity_max(): number {
    get_param_max();
  }
  public set orbit_velocity_max(value): void {
    set_param_max(value);
  }
  public get orbit_velocity_curve(): Curve {
    get_param_curve();
  }
  public set orbit_velocity_curve(value): void {
    set_param_curve(value);
  }
  public get linear_accel_min(): number {
    get_param_min();
  }
  public set linear_accel_min(value): void {
    set_param_min(value);
  }
  public get linear_accel_max(): number {
    get_param_max();
  }
  public set linear_accel_max(value): void {
    set_param_max(value);
  }
  public get linear_accel_curve(): Curve {
    get_param_curve();
  }
  public set linear_accel_curve(value): void {
    set_param_curve(value);
  }
  public get radial_accel_min(): number {
    get_param_min();
  }
  public set radial_accel_min(value): void {
    set_param_min(value);
  }
  public get radial_accel_max(): number {
    get_param_max();
  }
  public set radial_accel_max(value): void {
    set_param_max(value);
  }
  public get radial_accel_curve(): Curve {
    get_param_curve();
  }
  public set radial_accel_curve(value): void {
    set_param_curve(value);
  }
  public get tangential_accel_min(): number {
    get_param_min();
  }
  public set tangential_accel_min(value): void {
    set_param_min(value);
  }
  public get tangential_accel_max(): number {
    get_param_max();
  }
  public set tangential_accel_max(value): void {
    set_param_max(value);
  }
  public get tangential_accel_curve(): Curve {
    get_param_curve();
  }
  public set tangential_accel_curve(value): void {
    set_param_curve(value);
  }
  public get damping_min(): number {
    get_param_min();
  }
  public set damping_min(value): void {
    set_param_min(value);
  }
  public get damping_max(): number {
    get_param_max();
  }
  public set damping_max(value): void {
    set_param_max(value);
  }
  public get damping_curve(): Curve {
    get_param_curve();
  }
  public set damping_curve(value): void {
    set_param_curve(value);
  }
  public get angle_min(): number {
    get_param_min();
  }
  public set angle_min(value): void {
    set_param_min(value);
  }
  public get angle_max(): number {
    get_param_max();
  }
  public set angle_max(value): void {
    set_param_max(value);
  }
  public get angle_curve(): Curve {
    get_param_curve();
  }
  public set angle_curve(value): void {
    set_param_curve(value);
  }
  public get scale_amount_min(): number {
    get_param_min();
  }
  public set scale_amount_min(value): void {
    set_param_min(value);
  }
  public get scale_amount_max(): number {
    get_param_max();
  }
  public set scale_amount_max(value): void {
    set_param_max(value);
  }
  public get scale_amount_curve(): Curve {
    get_param_curve();
  }
  public set scale_amount_curve(value): void {
    set_param_curve(value);
  }
  public get split_scale(): boolean {
    get_split_scale();
  }
  public set split_scale(value): void {
    set_split_scale(value);
  }
  public get scale_curve_x(): Curve {
    get_scale_curve_x();
  }
  public set scale_curve_x(value): void {
    set_scale_curve_x(value);
  }
  public get scale_curve_y(): Curve {
    get_scale_curve_y();
  }
  public set scale_curve_y(value): void {
    set_scale_curve_y(value);
  }
  public get color(): Color {
    get_color();
  }
  public set color(value): void {
    set_color(value);
  }
  public get color_ramp(): Gradient {
    get_color_ramp();
  }
  public set color_ramp(value): void {
    set_color_ramp(value);
  }
  public get color_initial_ramp(): Gradient {
    get_color_initial_ramp();
  }
  public set color_initial_ramp(value): void {
    set_color_initial_ramp(value);
  }
  public get hue_variation_min(): number {
    get_param_min();
  }
  public set hue_variation_min(value): void {
    set_param_min(value);
  }
  public get hue_variation_max(): number {
    get_param_max();
  }
  public set hue_variation_max(value): void {
    set_param_max(value);
  }
  public get hue_variation_curve(): Curve {
    get_param_curve();
  }
  public set hue_variation_curve(value): void {
    set_param_curve(value);
  }
  public get anim_speed_min(): number {
    get_param_min();
  }
  public set anim_speed_min(value): void {
    set_param_min(value);
  }
  public get anim_speed_max(): number {
    get_param_max();
  }
  public set anim_speed_max(value): void {
    set_param_max(value);
  }
  public get anim_speed_curve(): Curve {
    get_param_curve();
  }
  public set anim_speed_curve(value): void {
    set_param_curve(value);
  }
  public get anim_offset_min(): number {
    get_param_min();
  }
  public set anim_offset_min(value): void {
    set_param_min(value);
  }
  public get anim_offset_max(): number {
    get_param_max();
  }
  public set anim_offset_max(value): void {
    set_param_max(value);
  }
  public get anim_offset_curve(): Curve {
    get_param_curve();
  }
  public set anim_offset_curve(value): void {
    set_param_curve(value);
  }
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