
import { RefCounted } from "@godot/classes/ref_counted";

export declare class XRInterface extends RefCounted{
  public get_name(): StringName;
  public get_capabilities(): number;
  public is_primary(): boolean;
  public set_primary(_primary: boolean): void;
  public is_initialized(): boolean;
  public initialize(): boolean;
  public uninitialize(): void;
  public get_system_info(): Dictionary;
  public get_tracking_status(): number;
  public get_render_target_size(): Vector2;
  public get_view_count(): number;
  public trigger_haptic_pulse(_action_name: String, _tracker_name: StringName, _frequency: number, _amplitude: number, _duration_sec: number, _delay_sec: number): void;
  public supports_play_area_mode(_mode: number): boolean;
  public get_play_area_mode(): number;
  public set_play_area_mode(_mode: number): boolean;
  public get_play_area(): PackedVector3Array;
  public get_anchor_detection_is_enabled(): boolean;
  public set_anchor_detection_is_enabled(_enable: boolean): void;
  public get_camera_feed_id(): number;
  public is_passthrough_supported(): boolean;
  public is_passthrough_enabled(): boolean;
  public start_passthrough(): boolean;
  public stop_passthrough(): void;
  public get_transform_for_view(_view: number, _cam_transform: Transform3D): Transform3D;
  public get_projection_for_view(_view: number, _aspect: number, _near: number, _far: number): Projection;
  public get_supported_environment_blend_modes(): GDArray;
  public set_environment_blend_mode(_mode: number): boolean;
  public get_environment_blend_mode(): number;
  public get interface_is_primary(): boolean {
    is_primary();
  }
  public set interface_is_primary(value): void {
    set_primary(value);
  }
  public get xr_play_area_mode(): number {
    get_play_area_mode();
  }
  public set xr_play_area_mode(value): void {
    set_play_area_mode(value);
  }
  public get environment_blend_mode(): number {
    get_environment_blend_mode();
  }
  public set environment_blend_mode(value): void {
    set_environment_blend_mode(value);
  }
  public get ar_is_anchor_detection_enabled(): boolean {
    get_anchor_detection_is_enabled();
  }
  public set ar_is_anchor_detection_enabled(value): void {
    set_anchor_detection_is_enabled(value);
  }
  static Capabilities = {
    XR_NONE = 0,
    XR_MONO = 1,
    XR_STEREO = 2,
    XR_QUAD = 4,
    XR_VR = 8,
    XR_AR = 16,
    XR_EXTERNAL = 32,
  }
  static TrackingStatus = {
    XR_NORMAL_TRACKING = 0,
    XR_EXCESSIVE_MOTION = 1,
    XR_INSUFFICIENT_FEATURES = 2,
    XR_UNKNOWN_TRACKING = 3,
    XR_NOT_TRACKING = 4,
  }
  static PlayAreaMode = {
    XR_PLAY_AREA_UNKNOWN = 0,
    XR_PLAY_AREA_3DOF = 1,
    XR_PLAY_AREA_SITTING = 2,
    XR_PLAY_AREA_ROOMSCALE = 3,
    XR_PLAY_AREA_STAGE = 4,
  }
  static EnvironmentBlendMode = {
    XR_ENV_BLEND_MODE_OPAQUE = 0,
    XR_ENV_BLEND_MODE_ADDITIVE = 1,
    XR_ENV_BLEND_MODE_ALPHA_BLEND = 2,
  }
}