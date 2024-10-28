
import { Node } from "@godot/classes/node";
import { GeometryInstance3D } from "@godot/classes/geometry_instance3d";
import { Curve } from "@godot/classes/curve";
import { Gradient } from "@godot/classes/gradient";
import { Mesh } from "@godot/classes/mesh";

export declare class CPUParticles3D extends GeometryInstance3D{
  public set_emitting(_emitting: boolean): void;
  public set_amount(_amount: number): void;
  public set_lifetime(_secs: number): void;
  public set_one_shot(_enable: boolean): void;
  public set_pre_process_time(_secs: number): void;
  public set_explosiveness_ratio(_ratio: number): void;
  public set_randomness_ratio(_ratio: number): void;
  public set_visibility_aabb(_aabb: AABB): void;
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
  public get_visibility_aabb(): AABB;
  public get_lifetime_randomness(): number;
  public get_use_local_coordinates(): boolean;
  public get_fixed_fps(): number;
  public get_fractional_delta(): boolean;
  public get_speed_scale(): number;
  public set_draw_order(_order: number): void;
  public get_draw_order(): number;
  public set_mesh(_mesh: Mesh): void;
  public get_mesh(): Mesh;
  public restart(): void;
  public set_direction(_direction: Vector3): void;
  public get_direction(): Vector3;
  public set_spread(_degrees: number): void;
  public get_spread(): number;
  public set_flatness(_amount: number): void;
  public get_flatness(): number;
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
  public set_emission_box_extents(_extents: Vector3): void;
  public get_emission_box_extents(): Vector3;
  public set_emission_points(_array: PackedVector3Array): void;
  public get_emission_points(): PackedVector3Array;
  public set_emission_normals(_array: PackedVector3Array): void;
  public get_emission_normals(): PackedVector3Array;
  public set_emission_colors(_array: PackedColorArray): void;
  public get_emission_colors(): PackedColorArray;
  public set_emission_ring_axis(_axis: Vector3): void;
  public get_emission_ring_axis(): Vector3;
  public set_emission_ring_height(_height: number): void;
  public get_emission_ring_height(): number;
  public set_emission_ring_radius(_radius: number): void;
  public get_emission_ring_radius(): number;
  public set_emission_ring_inner_radius(_inner_radius: number): void;
  public get_emission_ring_inner_radius(): number;
  public get_gravity(): Vector3;
  public set_gravity(_accel_vec: Vector3): void;
  public get_split_scale(): boolean;
  public set_split_scale(_split_scale: boolean): void;
  public get_scale_curve_x(): Curve;
  public set_scale_curve_x(_scale_curve: Curve): void;
  public get_scale_curve_y(): Curve;
  public set_scale_curve_y(_scale_curve: Curve): void;
  public get_scale_curve_z(): Curve;
  public set_scale_curve_z(_scale_curve: Curve): void;
  public convert_from_particles(_particles: Node): void;
  public get emitting(): boolean {
    is_emitting();
  }
  public set emitting(value: boolean): void {
    set_emitting(value);
  }
  public get amount(): number {
    get_amount();
  }
  public set amount(value: number): void {
    set_amount(value);
  }
  public get lifetime(): number {
    get_lifetime();
  }
  public set lifetime(value: number): void {
    set_lifetime(value);
  }
  public get one_shot(): boolean {
    get_one_shot();
  }
  public set one_shot(value: boolean): void {
    set_one_shot(value);
  }
  public get preprocess(): number {
    get_pre_process_time();
  }
  public set preprocess(value: number): void {
    set_pre_process_time(value);
  }
  public get speed_scale(): number {
    get_speed_scale();
  }
  public set speed_scale(value: number): void {
    set_speed_scale(value);
  }
  public get explosiveness(): number {
    get_explosiveness_ratio();
  }
  public set explosiveness(value: number): void {
    set_explosiveness_ratio(value);
  }
  public get randomness(): number {
    get_randomness_ratio();
  }
  public set randomness(value: number): void {
    set_randomness_ratio(value);
  }
  public get lifetime_randomness(): number {
    get_lifetime_randomness();
  }
  public set lifetime_randomness(value: number): void {
    set_lifetime_randomness(value);
  }
  public get fixed_fps(): number {
    get_fixed_fps();
  }
  public set fixed_fps(value: number): void {
    set_fixed_fps(value);
  }
  public get fract_delta(): boolean {
    get_fractional_delta();
  }
  public set fract_delta(value: boolean): void {
    set_fractional_delta(value);
  }
  public get visibility_aabb(): AABB {
    get_visibility_aabb();
  }
  public set visibility_aabb(value: AABB): void {
    set_visibility_aabb(value);
  }
  public get local_coords(): boolean {
    get_use_local_coordinates();
  }
  public set local_coords(value: boolean): void {
    set_use_local_coordinates(value);
  }
  public get draw_order(): number {
    get_draw_order();
  }
  public set draw_order(value: number): void {
    set_draw_order(value);
  }
  public get mesh(): Mesh {
    get_mesh();
  }
  public set mesh(value: Mesh): void {
    set_mesh(value);
  }
  public get emission_shape(): number {
    get_emission_shape();
  }
  public set emission_shape(value: number): void {
    set_emission_shape(value);
  }
  public get emission_sphere_radius(): number {
    get_emission_sphere_radius();
  }
  public set emission_sphere_radius(value: number): void {
    set_emission_sphere_radius(value);
  }
  public get emission_box_extents(): Vector3 {
    get_emission_box_extents();
  }
  public set emission_box_extents(value: Vector3): void {
    set_emission_box_extents(value);
  }
  public get emission_points(): PackedVector3Array {
    get_emission_points();
  }
  public set emission_points(value: PackedVector3Array): void {
    set_emission_points(value);
  }
  public get emission_normals(): PackedVector3Array {
    get_emission_normals();
  }
  public set emission_normals(value: PackedVector3Array): void {
    set_emission_normals(value);
  }
  public get emission_colors(): PackedColorArray {
    get_emission_colors();
  }
  public set emission_colors(value: PackedColorArray): void {
    set_emission_colors(value);
  }
  public get emission_ring_axis(): Vector3 {
    get_emission_ring_axis();
  }
  public set emission_ring_axis(value: Vector3): void {
    set_emission_ring_axis(value);
  }
  public get emission_ring_height(): number {
    get_emission_ring_height();
  }
  public set emission_ring_height(value: number): void {
    set_emission_ring_height(value);
  }
  public get emission_ring_radius(): number {
    get_emission_ring_radius();
  }
  public set emission_ring_radius(value: number): void {
    set_emission_ring_radius(value);
  }
  public get emission_ring_inner_radius(): number {
    get_emission_ring_inner_radius();
  }
  public set emission_ring_inner_radius(value: number): void {
    set_emission_ring_inner_radius(value);
  }
  public get particle_flag_align_y(): boolean {
    get_particle_flag();
  }
  public set particle_flag_align_y(value: boolean): void {
    set_particle_flag(value);
  }
  public get particle_flag_rotate_y(): boolean {
    get_particle_flag();
  }
  public set particle_flag_rotate_y(value: boolean): void {
    set_particle_flag(value);
  }
  public get particle_flag_disable_z(): boolean {
    get_particle_flag();
  }
  public set particle_flag_disable_z(value: boolean): void {
    set_particle_flag(value);
  }
  public get direction(): Vector3 {
    get_direction();
  }
  public set direction(value: Vector3): void {
    set_direction(value);
  }
  public get spread(): number {
    get_spread();
  }
  public set spread(value: number): void {
    set_spread(value);
  }
  public get flatness(): number {
    get_flatness();
  }
  public set flatness(value: number): void {
    set_flatness(value);
  }
  public get gravity(): Vector3 {
    get_gravity();
  }
  public set gravity(value: Vector3): void {
    set_gravity(value);
  }
  public get initial_velocity_min(): number {
    get_param_min();
  }
  public set initial_velocity_min(value: number): void {
    set_param_min(value);
  }
  public get initial_velocity_max(): number {
    get_param_max();
  }
  public set initial_velocity_max(value: number): void {
    set_param_max(value);
  }
  public get angular_velocity_min(): number {
    get_param_min();
  }
  public set angular_velocity_min(value: number): void {
    set_param_min(value);
  }
  public get angular_velocity_max(): number {
    get_param_max();
  }
  public set angular_velocity_max(value: number): void {
    set_param_max(value);
  }
  public get angular_velocity_curve(): Curve {
    get_param_curve();
  }
  public set angular_velocity_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get orbit_velocity_min(): number {
    get_param_min();
  }
  public set orbit_velocity_min(value: number): void {
    set_param_min(value);
  }
  public get orbit_velocity_max(): number {
    get_param_max();
  }
  public set orbit_velocity_max(value: number): void {
    set_param_max(value);
  }
  public get orbit_velocity_curve(): Curve {
    get_param_curve();
  }
  public set orbit_velocity_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get linear_accel_min(): number {
    get_param_min();
  }
  public set linear_accel_min(value: number): void {
    set_param_min(value);
  }
  public get linear_accel_max(): number {
    get_param_max();
  }
  public set linear_accel_max(value: number): void {
    set_param_max(value);
  }
  public get linear_accel_curve(): Curve {
    get_param_curve();
  }
  public set linear_accel_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get radial_accel_min(): number {
    get_param_min();
  }
  public set radial_accel_min(value: number): void {
    set_param_min(value);
  }
  public get radial_accel_max(): number {
    get_param_max();
  }
  public set radial_accel_max(value: number): void {
    set_param_max(value);
  }
  public get radial_accel_curve(): Curve {
    get_param_curve();
  }
  public set radial_accel_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get tangential_accel_min(): number {
    get_param_min();
  }
  public set tangential_accel_min(value: number): void {
    set_param_min(value);
  }
  public get tangential_accel_max(): number {
    get_param_max();
  }
  public set tangential_accel_max(value: number): void {
    set_param_max(value);
  }
  public get tangential_accel_curve(): Curve {
    get_param_curve();
  }
  public set tangential_accel_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get damping_min(): number {
    get_param_min();
  }
  public set damping_min(value: number): void {
    set_param_min(value);
  }
  public get damping_max(): number {
    get_param_max();
  }
  public set damping_max(value: number): void {
    set_param_max(value);
  }
  public get damping_curve(): Curve {
    get_param_curve();
  }
  public set damping_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get angle_min(): number {
    get_param_min();
  }
  public set angle_min(value: number): void {
    set_param_min(value);
  }
  public get angle_max(): number {
    get_param_max();
  }
  public set angle_max(value: number): void {
    set_param_max(value);
  }
  public get angle_curve(): Curve {
    get_param_curve();
  }
  public set angle_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get scale_amount_min(): number {
    get_param_min();
  }
  public set scale_amount_min(value: number): void {
    set_param_min(value);
  }
  public get scale_amount_max(): number {
    get_param_max();
  }
  public set scale_amount_max(value: number): void {
    set_param_max(value);
  }
  public get scale_amount_curve(): Curve {
    get_param_curve();
  }
  public set scale_amount_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get split_scale(): boolean {
    get_split_scale();
  }
  public set split_scale(value: boolean): void {
    set_split_scale(value);
  }
  public get scale_curve_x(): Curve {
    get_scale_curve_x();
  }
  public set scale_curve_x(value: Curve): void {
    set_scale_curve_x(value);
  }
  public get scale_curve_y(): Curve {
    get_scale_curve_y();
  }
  public set scale_curve_y(value: Curve): void {
    set_scale_curve_y(value);
  }
  public get scale_curve_z(): Curve {
    get_scale_curve_z();
  }
  public set scale_curve_z(value: Curve): void {
    set_scale_curve_z(value);
  }
  public get color(): Color {
    get_color();
  }
  public set color(value: Color): void {
    set_color(value);
  }
  public get color_ramp(): Gradient {
    get_color_ramp();
  }
  public set color_ramp(value: Gradient): void {
    set_color_ramp(value);
  }
  public get color_initial_ramp(): Gradient {
    get_color_initial_ramp();
  }
  public set color_initial_ramp(value: Gradient): void {
    set_color_initial_ramp(value);
  }
  public get hue_variation_min(): number {
    get_param_min();
  }
  public set hue_variation_min(value: number): void {
    set_param_min(value);
  }
  public get hue_variation_max(): number {
    get_param_max();
  }
  public set hue_variation_max(value: number): void {
    set_param_max(value);
  }
  public get hue_variation_curve(): Curve {
    get_param_curve();
  }
  public set hue_variation_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get anim_speed_min(): number {
    get_param_min();
  }
  public set anim_speed_min(value: number): void {
    set_param_min(value);
  }
  public get anim_speed_max(): number {
    get_param_max();
  }
  public set anim_speed_max(value: number): void {
    set_param_max(value);
  }
  public get anim_speed_curve(): Curve {
    get_param_curve();
  }
  public set anim_speed_curve(value: Curve): void {
    set_param_curve(value);
  }
  public get anim_offset_min(): number {
    get_param_min();
  }
  public set anim_offset_min(value: number): void {
    set_param_min(value);
  }
  public get anim_offset_max(): number {
    get_param_max();
  }
  public set anim_offset_max(value: number): void {
    set_param_max(value);
  }
  public get anim_offset_curve(): Curve {
    get_param_curve();
  }
  public set anim_offset_curve(value: Curve): void {
    set_param_curve(value);
  }
  static DrawOrder = {
    DRAW_ORDER_INDEX = 0,
    DRAW_ORDER_LIFETIME = 1,
    DRAW_ORDER_VIEW_DEPTH = 2,
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
    EMISSION_SHAPE_BOX = 3,
    EMISSION_SHAPE_POINTS = 4,
    EMISSION_SHAPE_DIRECTED_POINTS = 5,
    EMISSION_SHAPE_RING = 6,
    EMISSION_SHAPE_MAX = 7,
  }
}