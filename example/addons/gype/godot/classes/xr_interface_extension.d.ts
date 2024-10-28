
import { XRInterface } from "@godot/classes/xr_interface";

export declare class XRInterfaceExtension extends XRInterface{
  public _get_name(): StringName;
  public _get_capabilities(): number;
  public _is_initialized(): boolean;
  public _initialize(): boolean;
  public _uninitialize(): void;
  public _get_system_info(): Dictionary;
  public _supports_play_area_mode(_mode: number): boolean;
  public _get_play_area_mode(): number;
  public _set_play_area_mode(_mode: number): boolean;
  public _get_play_area(): PackedVector3Array;
  public _get_render_target_size(): Vector2;
  public _get_view_count(): number;
  public _get_camera_transform(): Transform3D;
  public _get_transform_for_view(_view: number, _cam_transform: Transform3D): Transform3D;
  public _get_projection_for_view(_view: number, _aspect: number, _z_near: number, _z_far: number): PackedFloat64Array;
  public _get_vrs_texture(): RID;
  public _process(): void;
  public _pre_render(): void;
  public _pre_draw_viewport(_render_target: RID): boolean;
  public _post_draw_viewport(_render_target: RID, _screen_rect: Rect2): void;
  public _end_frame(): void;
  public _get_suggested_tracker_names(): PackedStringArray;
  public _get_suggested_pose_names(_tracker_name: StringName): PackedStringArray;
  public _get_tracking_status(): number;
  public _trigger_haptic_pulse(_action_name: String, _tracker_name: StringName, _frequency: number, _amplitude: number, _duration_sec: number, _delay_sec: number): void;
  public _get_anchor_detection_is_enabled(): boolean;
  public _set_anchor_detection_is_enabled(_enabled: boolean): void;
  public _get_camera_feed_id(): number;
  public _get_color_texture(): RID;
  public _get_depth_texture(): RID;
  public _get_velocity_texture(): RID;
  public get_color_texture(): RID;
  public get_depth_texture(): RID;
  public get_velocity_texture(): RID;
  public add_blit(_render_target: RID, _src_rect: Rect2, _dst_rect: Rect2i, _use_layer: boolean, _layer: number, _apply_lens_distortion: boolean, _eye_center: Vector2, _k1: number, _k2: number, _upscale: number, _aspect_ratio: number): void;
  public get_render_target_texture(_render_target: RID): RID;
}