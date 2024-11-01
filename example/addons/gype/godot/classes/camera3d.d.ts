
import { CameraAttributes } from "@godot/classes/camera_attributes";
import { Environment } from "@godot/classes/environment";
import { Node3D } from "@godot/classes/node3d";
import { Compositor } from "@godot/classes/compositor";

export declare class Camera3D extends Node3D{
  public project_ray_normal(_screen_point: Vector2): Vector3;
  public project_local_ray_normal(_screen_point: Vector2): Vector3;
  public project_ray_origin(_screen_point: Vector2): Vector3;
  public unproject_position(_world_point: Vector3): Vector2;
  public is_position_behind(_world_point: Vector3): boolean;
  public project_position(_screen_point: Vector2, _z_depth: number): Vector3;
  public set_perspective(_fov: number, _z_near: number, _z_far: number): void;
  public set_orthogonal(_size: number, _z_near: number, _z_far: number): void;
  public set_frustum(_size: number, _offset: Vector2, _z_near: number, _z_far: number): void;
  public make_current(): void;
  public clear_current(_enable_next: boolean): void;
  public set_current(_enabled: boolean): void;
  public is_current(): boolean;
  public get_camera_transform(): Transform3D;
  public get_camera_projection(): Projection;
  public get_fov(): number;
  public get_frustum_offset(): Vector2;
  public get_size(): number;
  public get_far(): number;
  public get_near(): number;
  public set_fov(_fov: number): void;
  public set_frustum_offset(_offset: Vector2): void;
  public set_size(_size: number): void;
  public set_far(_far: number): void;
  public set_near(_near: number): void;
  public get_projection(): number;
  public set_projection(_mode: number): void;
  public set_h_offset(_offset: number): void;
  public get_h_offset(): number;
  public set_v_offset(_offset: number): void;
  public get_v_offset(): number;
  public set_cull_mask(_mask: number): void;
  public get_cull_mask(): number;
  public set_environment(_env: Environment): void;
  public get_environment(): Environment;
  public set_attributes(_env: CameraAttributes): void;
  public get_attributes(): CameraAttributes;
  public set_compositor(_compositor: Compositor): void;
  public get_compositor(): Compositor;
  public set_keep_aspect_mode(_mode: number): void;
  public get_keep_aspect_mode(): number;
  public set_doppler_tracking(_mode: number): void;
  public get_doppler_tracking(): number;
  public get_frustum(): GDArray;
  public is_position_in_frustum(_world_point: Vector3): boolean;
  public get_camera_rid(): RID;
  public get_pyramid_shape_rid(): RID;
  public set_cull_mask_value(_layer_number: number, _value: boolean): void;
  public get_cull_mask_value(_layer_number: number): boolean;
  public get keep_aspect(): number {
    get_keep_aspect_mode();
  }
  public set keep_aspect(value): void {
    set_keep_aspect_mode(value);
  }
  public get cull_mask(): number {
    get_cull_mask();
  }
  public set cull_mask(value): void {
    set_cull_mask(value);
  }
  public get environment(): Environment {
    get_environment();
  }
  public set environment(value): void {
    set_environment(value);
  }
  public get attributes(): CameraAttributesPractical {
    get_attributes();
  }
  public set attributes(value): void {
    set_attributes(value);
  }
  public get compositor(): Compositor {
    get_compositor();
  }
  public set compositor(value): void {
    set_compositor(value);
  }
  public get h_offset(): number {
    get_h_offset();
  }
  public set h_offset(value): void {
    set_h_offset(value);
  }
  public get v_offset(): number {
    get_v_offset();
  }
  public set v_offset(value): void {
    set_v_offset(value);
  }
  public get doppler_tracking(): number {
    get_doppler_tracking();
  }
  public set doppler_tracking(value): void {
    set_doppler_tracking(value);
  }
  public get projection(): number {
    get_projection();
  }
  public set projection(value): void {
    set_projection(value);
  }
  public get current(): boolean {
    is_current();
  }
  public set current(value): void {
    set_current(value);
  }
  public get fov(): number {
    get_fov();
  }
  public set fov(value): void {
    set_fov(value);
  }
  public get size(): number {
    get_size();
  }
  public set size(value): void {
    set_size(value);
  }
  public get frustum_offset(): Vector2 {
    get_frustum_offset();
  }
  public set frustum_offset(value): void {
    set_frustum_offset(value);
  }
  public get near(): number {
    get_near();
  }
  public set near(value): void {
    set_near(value);
  }
  public get far(): number {
    get_far();
  }
  public set far(value): void {
    set_far(value);
  }
  static ProjectionType = {
    PROJECTION_PERSPECTIVE = 0,
    PROJECTION_ORTHOGONAL = 1,
    PROJECTION_FRUSTUM = 2,
  }
  static KeepAspect = {
    KEEP_WIDTH = 0,
    KEEP_HEIGHT = 1,
  }
  static DopplerTracking = {
    DOPPLER_TRACKING_DISABLED = 0,
    DOPPLER_TRACKING_IDLE_STEP = 1,
    DOPPLER_TRACKING_PHYSICS_STEP = 2,
  }
}