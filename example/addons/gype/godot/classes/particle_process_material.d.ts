
import { Texture2D } from "@godot/classes/texture2d";
import { Material } from "@godot/classes/material";

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
  public get lifetime_randomness(): number {
    get_lifetime_randomness();
  }
  public set lifetime_randomness(value: number): void {
    set_lifetime_randomness(value);
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
  public get particle_flag_damping_as_friction(): boolean {
    get_particle_flag();
  }
  public set particle_flag_damping_as_friction(value: boolean): void {
    set_particle_flag(value);
  }
  public get emission_shape_offset(): Vector3 {
    get_emission_shape_offset();
  }
  public set emission_shape_offset(value: Vector3): void {
    set_emission_shape_offset(value);
  }
  public get emission_shape_scale(): Vector3 {
    get_emission_shape_scale();
  }
  public set emission_shape_scale(value: Vector3): void {
    set_emission_shape_scale(value);
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
  public get emission_point_texture(): Texture2D {
    get_emission_point_texture();
  }
  public set emission_point_texture(value: Texture2D): void {
    set_emission_point_texture(value);
  }
  public get emission_normal_texture(): Texture2D {
    get_emission_normal_texture();
  }
  public set emission_normal_texture(value: Texture2D): void {
    set_emission_normal_texture(value);
  }
  public get emission_color_texture(): Texture2D {
    get_emission_color_texture();
  }
  public set emission_color_texture(value: Texture2D): void {
    set_emission_color_texture(value);
  }
  public get emission_point_count(): number {
    get_emission_point_count();
  }
  public set emission_point_count(value: number): void {
    set_emission_point_count(value);
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
  public get angle(): Vector2 {
    get_param();
  }
  public set angle(value: Vector2): void {
    set_param(value);
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
  public get angle_curve(): CurveTexture {
    get_param_texture();
  }
  public set angle_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get inherit_velocity_ratio(): number {
    get_inherit_velocity_ratio();
  }
  public set inherit_velocity_ratio(value: number): void {
    set_inherit_velocity_ratio(value);
  }
  public get velocity_pivot(): Vector3 {
    get_velocity_pivot();
  }
  public set velocity_pivot(value: Vector3): void {
    set_velocity_pivot(value);
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
  public get initial_velocity(): Vector2 {
    get_param();
  }
  public set initial_velocity(value: Vector2): void {
    set_param(value);
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
  public get angular_velocity(): Vector2 {
    get_param();
  }
  public set angular_velocity(value: Vector2): void {
    set_param(value);
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
  public get angular_velocity_curve(): CurveTexture {
    get_param_texture();
  }
  public set angular_velocity_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get directional_velocity(): Vector2 {
    get_param();
  }
  public set directional_velocity(value: Vector2): void {
    set_param(value);
  }
  public get directional_velocity_min(): number {
    get_param_min();
  }
  public set directional_velocity_min(value: number): void {
    set_param_min(value);
  }
  public get directional_velocity_max(): number {
    get_param_max();
  }
  public set directional_velocity_max(value: number): void {
    set_param_max(value);
  }
  public get directional_velocity_curve(): CurveXYZTexture {
    get_param_texture();
  }
  public set directional_velocity_curve(value: CurveXYZTexture): void {
    set_param_texture(value);
  }
  public get orbit_velocity(): Vector2 {
    get_param();
  }
  public set orbit_velocity(value: Vector2): void {
    set_param(value);
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
  public get orbit_velocity_curve(): CurveTexture,CurveXYZTexture {
    get_param_texture();
  }
  public set orbit_velocity_curve(value: CurveTexture,CurveXYZTexture): void {
    set_param_texture(value);
  }
  public get radial_velocity(): Vector2 {
    get_param();
  }
  public set radial_velocity(value: Vector2): void {
    set_param(value);
  }
  public get radial_velocity_min(): number {
    get_param_min();
  }
  public set radial_velocity_min(value: number): void {
    set_param_min(value);
  }
  public get radial_velocity_max(): number {
    get_param_max();
  }
  public set radial_velocity_max(value: number): void {
    set_param_max(value);
  }
  public get radial_velocity_curve(): CurveTexture {
    get_param_texture();
  }
  public set radial_velocity_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get velocity_limit_curve(): CurveTexture {
    get_velocity_limit_curve();
  }
  public set velocity_limit_curve(value: CurveTexture): void {
    set_velocity_limit_curve(value);
  }
  public get gravity(): Vector3 {
    get_gravity();
  }
  public set gravity(value: Vector3): void {
    set_gravity(value);
  }
  public get linear_accel(): Vector2 {
    get_param();
  }
  public set linear_accel(value: Vector2): void {
    set_param(value);
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
  public get linear_accel_curve(): CurveTexture {
    get_param_texture();
  }
  public set linear_accel_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get radial_accel(): Vector2 {
    get_param();
  }
  public set radial_accel(value: Vector2): void {
    set_param(value);
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
  public get radial_accel_curve(): CurveTexture {
    get_param_texture();
  }
  public set radial_accel_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get tangential_accel(): Vector2 {
    get_param();
  }
  public set tangential_accel(value: Vector2): void {
    set_param(value);
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
  public get tangential_accel_curve(): CurveTexture {
    get_param_texture();
  }
  public set tangential_accel_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get damping(): Vector2 {
    get_param();
  }
  public set damping(value: Vector2): void {
    set_param(value);
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
  public get damping_curve(): CurveTexture {
    get_param_texture();
  }
  public set damping_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get attractor_interaction_enabled(): boolean {
    is_attractor_interaction_enabled();
  }
  public set attractor_interaction_enabled(value: boolean): void {
    set_attractor_interaction_enabled(value);
  }
  public get scale(): Vector2 {
    get_param();
  }
  public set scale(value: Vector2): void {
    set_param(value);
  }
  public get scale_min(): number {
    get_param_min();
  }
  public set scale_min(value: number): void {
    set_param_min(value);
  }
  public get scale_max(): number {
    get_param_max();
  }
  public set scale_max(value: number): void {
    set_param_max(value);
  }
  public get scale_curve(): CurveTexture,CurveXYZTexture {
    get_param_texture();
  }
  public set scale_curve(value: CurveTexture,CurveXYZTexture): void {
    set_param_texture(value);
  }
  public get scale_over_velocity(): Vector2 {
    get_param();
  }
  public set scale_over_velocity(value: Vector2): void {
    set_param(value);
  }
  public get scale_over_velocity_min(): number {
    get_param_min();
  }
  public set scale_over_velocity_min(value: number): void {
    set_param_min(value);
  }
  public get scale_over_velocity_max(): number {
    get_param_max();
  }
  public set scale_over_velocity_max(value: number): void {
    set_param_max(value);
  }
  public get scale_over_velocity_curve(): CurveTexture,CurveXYZTexture {
    get_param_texture();
  }
  public set scale_over_velocity_curve(value: CurveTexture,CurveXYZTexture): void {
    set_param_texture(value);
  }
  public get color(): Color {
    get_color();
  }
  public set color(value: Color): void {
    set_color(value);
  }
  public get color_ramp(): GradientTexture1D {
    get_color_ramp();
  }
  public set color_ramp(value: GradientTexture1D): void {
    set_color_ramp(value);
  }
  public get color_initial_ramp(): GradientTexture1D {
    get_color_initial_ramp();
  }
  public set color_initial_ramp(value: GradientTexture1D): void {
    set_color_initial_ramp(value);
  }
  public get alpha_curve(): CurveTexture {
    get_alpha_curve();
  }
  public set alpha_curve(value: CurveTexture): void {
    set_alpha_curve(value);
  }
  public get emission_curve(): CurveTexture {
    get_emission_curve();
  }
  public set emission_curve(value: CurveTexture): void {
    set_emission_curve(value);
  }
  public get hue_variation(): Vector2 {
    get_param();
  }
  public set hue_variation(value: Vector2): void {
    set_param(value);
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
  public get hue_variation_curve(): CurveTexture {
    get_param_texture();
  }
  public set hue_variation_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get anim_speed(): Vector2 {
    get_param();
  }
  public set anim_speed(value: Vector2): void {
    set_param(value);
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
  public get anim_speed_curve(): CurveTexture {
    get_param_texture();
  }
  public set anim_speed_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get anim_offset(): Vector2 {
    get_param();
  }
  public set anim_offset(value: Vector2): void {
    set_param(value);
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
  public get anim_offset_curve(): CurveTexture {
    get_param_texture();
  }
  public set anim_offset_curve(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get turbulence_enabled(): boolean {
    get_turbulence_enabled();
  }
  public set turbulence_enabled(value: boolean): void {
    set_turbulence_enabled(value);
  }
  public get turbulence_noise_strength(): number {
    get_turbulence_noise_strength();
  }
  public set turbulence_noise_strength(value: number): void {
    set_turbulence_noise_strength(value);
  }
  public get turbulence_noise_scale(): number {
    get_turbulence_noise_scale();
  }
  public set turbulence_noise_scale(value: number): void {
    set_turbulence_noise_scale(value);
  }
  public get turbulence_noise_speed(): Vector3 {
    get_turbulence_noise_speed();
  }
  public set turbulence_noise_speed(value: Vector3): void {
    set_turbulence_noise_speed(value);
  }
  public get turbulence_noise_speed_random(): number {
    get_turbulence_noise_speed_random();
  }
  public set turbulence_noise_speed_random(value: number): void {
    set_turbulence_noise_speed_random(value);
  }
  public get turbulence_influence(): Vector2 {
    get_param();
  }
  public set turbulence_influence(value: Vector2): void {
    set_param(value);
  }
  public get turbulence_influence_min(): number {
    get_param_min();
  }
  public set turbulence_influence_min(value: number): void {
    set_param_min(value);
  }
  public get turbulence_influence_max(): number {
    get_param_max();
  }
  public set turbulence_influence_max(value: number): void {
    set_param_max(value);
  }
  public get turbulence_initial_displacement(): Vector2 {
    get_param();
  }
  public set turbulence_initial_displacement(value: Vector2): void {
    set_param(value);
  }
  public get turbulence_initial_displacement_min(): number {
    get_param_min();
  }
  public set turbulence_initial_displacement_min(value: number): void {
    set_param_min(value);
  }
  public get turbulence_initial_displacement_max(): number {
    get_param_max();
  }
  public set turbulence_initial_displacement_max(value: number): void {
    set_param_max(value);
  }
  public get turbulence_influence_over_life(): CurveTexture {
    get_param_texture();
  }
  public set turbulence_influence_over_life(value: CurveTexture): void {
    set_param_texture(value);
  }
  public get collision_mode(): number {
    get_collision_mode();
  }
  public set collision_mode(value: number): void {
    set_collision_mode(value);
  }
  public get collision_friction(): number {
    get_collision_friction();
  }
  public set collision_friction(value: number): void {
    set_collision_friction(value);
  }
  public get collision_bounce(): number {
    get_collision_bounce();
  }
  public set collision_bounce(value: number): void {
    set_collision_bounce(value);
  }
  public get collision_use_scale(): boolean {
    is_collision_using_scale();
  }
  public set collision_use_scale(value: boolean): void {
    set_collision_use_scale(value);
  }
  public get sub_emitter_mode(): number {
    get_sub_emitter_mode();
  }
  public set sub_emitter_mode(value: number): void {
    set_sub_emitter_mode(value);
  }
  public get sub_emitter_frequency(): number {
    get_sub_emitter_frequency();
  }
  public set sub_emitter_frequency(value: number): void {
    set_sub_emitter_frequency(value);
  }
  public get sub_emitter_amount_at_end(): number {
    get_sub_emitter_amount_at_end();
  }
  public set sub_emitter_amount_at_end(value: number): void {
    set_sub_emitter_amount_at_end(value);
  }
  public get sub_emitter_amount_at_collision(): number {
    get_sub_emitter_amount_at_collision();
  }
  public set sub_emitter_amount_at_collision(value: number): void {
    set_sub_emitter_amount_at_collision(value);
  }
  public get sub_emitter_keep_velocity(): boolean {
    get_sub_emitter_keep_velocity();
  }
  public set sub_emitter_keep_velocity(value: boolean): void {
    set_sub_emitter_keep_velocity(value);
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