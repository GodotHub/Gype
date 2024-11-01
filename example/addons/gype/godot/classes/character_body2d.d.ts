
import { KinematicCollision2D } from "@godot/classes/kinematic_collision2d";
import { PhysicsBody2D } from "@godot/classes/physics_body2d";

export declare class CharacterBody2D extends PhysicsBody2D{
  public move_and_slide(): boolean;
  public apply_floor_snap(): void;
  public set_velocity(_velocity: Vector2): void;
  public get_velocity(): Vector2;
  public set_safe_margin(_margin: number): void;
  public get_safe_margin(): number;
  public is_floor_stop_on_slope_enabled(): boolean;
  public set_floor_stop_on_slope_enabled(_enabled: boolean): void;
  public set_floor_constant_speed_enabled(_enabled: boolean): void;
  public is_floor_constant_speed_enabled(): boolean;
  public set_floor_block_on_wall_enabled(_enabled: boolean): void;
  public is_floor_block_on_wall_enabled(): boolean;
  public set_slide_on_ceiling_enabled(_enabled: boolean): void;
  public is_slide_on_ceiling_enabled(): boolean;
  public set_platform_floor_layers(_exclude_layer: number): void;
  public get_platform_floor_layers(): number;
  public set_platform_wall_layers(_exclude_layer: number): void;
  public get_platform_wall_layers(): number;
  public get_max_slides(): number;
  public set_max_slides(_max_slides: number): void;
  public get_floor_max_angle(): number;
  public set_floor_max_angle(_radians: number): void;
  public get_floor_snap_length(): number;
  public set_floor_snap_length(_floor_snap_length: number): void;
  public get_wall_min_slide_angle(): number;
  public set_wall_min_slide_angle(_radians: number): void;
  public get_up_direction(): Vector2;
  public set_up_direction(_up_direction: Vector2): void;
  public set_motion_mode(_mode: number): void;
  public get_motion_mode(): number;
  public set_platform_on_leave(_on_leave_apply_velocity: number): void;
  public get_platform_on_leave(): number;
  public is_on_floor(): boolean;
  public is_on_floor_only(): boolean;
  public is_on_ceiling(): boolean;
  public is_on_ceiling_only(): boolean;
  public is_on_wall(): boolean;
  public is_on_wall_only(): boolean;
  public get_floor_normal(): Vector2;
  public get_wall_normal(): Vector2;
  public get_last_motion(): Vector2;
  public get_position_delta(): Vector2;
  public get_real_velocity(): Vector2;
  public get_floor_angle(_up_direction: Vector2): number;
  public get_platform_velocity(): Vector2;
  public get_slide_collision_count(): number;
  public get_slide_collision(_slide_idx: number): KinematicCollision2D;
  public get_last_slide_collision(): KinematicCollision2D;
  public get motion_mode(): number {
    get_motion_mode();
  }
  public set motion_mode(value): void {
    set_motion_mode(value);
  }
  public get up_direction(): Vector2 {
    get_up_direction();
  }
  public set up_direction(value): void {
    set_up_direction(value);
  }
  public get velocity(): Vector2 {
    get_velocity();
  }
  public set velocity(value): void {
    set_velocity(value);
  }
  public get slide_on_ceiling(): boolean {
    is_slide_on_ceiling_enabled();
  }
  public set slide_on_ceiling(value): void {
    set_slide_on_ceiling_enabled(value);
  }
  public get max_slides(): number {
    get_max_slides();
  }
  public set max_slides(value): void {
    set_max_slides(value);
  }
  public get wall_min_slide_angle(): number {
    get_wall_min_slide_angle();
  }
  public set wall_min_slide_angle(value): void {
    set_wall_min_slide_angle(value);
  }
  public get floor_stop_on_slope(): boolean {
    is_floor_stop_on_slope_enabled();
  }
  public set floor_stop_on_slope(value): void {
    set_floor_stop_on_slope_enabled(value);
  }
  public get floor_constant_speed(): boolean {
    is_floor_constant_speed_enabled();
  }
  public set floor_constant_speed(value): void {
    set_floor_constant_speed_enabled(value);
  }
  public get floor_block_on_wall(): boolean {
    is_floor_block_on_wall_enabled();
  }
  public set floor_block_on_wall(value): void {
    set_floor_block_on_wall_enabled(value);
  }
  public get floor_max_angle(): number {
    get_floor_max_angle();
  }
  public set floor_max_angle(value): void {
    set_floor_max_angle(value);
  }
  public get floor_snap_length(): number {
    get_floor_snap_length();
  }
  public set floor_snap_length(value): void {
    set_floor_snap_length(value);
  }
  public get platform_on_leave(): number {
    get_platform_on_leave();
  }
  public set platform_on_leave(value): void {
    set_platform_on_leave(value);
  }
  public get platform_floor_layers(): number {
    get_platform_floor_layers();
  }
  public set platform_floor_layers(value): void {
    set_platform_floor_layers(value);
  }
  public get platform_wall_layers(): number {
    get_platform_wall_layers();
  }
  public set platform_wall_layers(value): void {
    set_platform_wall_layers(value);
  }
  public get safe_margin(): number {
    get_safe_margin();
  }
  public set safe_margin(value): void {
    set_safe_margin(value);
  }
  static MotionMode = {
    MOTION_MODE_GROUNDED = 0,
    MOTION_MODE_FLOATING = 1,
  }
  static PlatformOnLeave = {
    PLATFORM_ON_LEAVE_ADD_VELOCITY = 0,
    PLATFORM_ON_LEAVE_ADD_UPWARD_VELOCITY = 1,
    PLATFORM_ON_LEAVE_DO_NOTHING = 2,
  }
}