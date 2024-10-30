
import { XRInterface } from "@godot/classes/xr_interface";

export declare class OpenXRInterface extends XRInterface{
  public get_display_refresh_rate(): number;
  public set_display_refresh_rate(_refresh_rate: number): void;
  public get_render_target_size_multiplier(): number;
  public set_render_target_size_multiplier(_multiplier: number): void;
  public is_foveation_supported(): boolean;
  public get_foveation_level(): number;
  public set_foveation_level(_foveation_level: number): void;
  public get_foveation_dynamic(): boolean;
  public set_foveation_dynamic(_foveation_dynamic: boolean): void;
  public is_action_set_active(_name: String | StringName | string): boolean;
  public set_action_set_active(_name: String | StringName | string, _active: boolean): void;
  public get_action_sets(): GDArray;
  public get_available_display_refresh_rates(): GDArray;
  public set_motion_range(_hand: number, _motion_range: number): void;
  public get_motion_range(_hand: number): number;
  public get_hand_tracking_source(_hand: number): number;
  public get_hand_joint_flags(_hand: number, _joint: number): number;
  public get_hand_joint_rotation(_hand: number, _joint: number): Quaternion;
  public get_hand_joint_position(_hand: number, _joint: number): Vector3;
  public get_hand_joint_radius(_hand: number, _joint: number): number;
  public get_hand_joint_linear_velocity(_hand: number, _joint: number): Vector3;
  public get_hand_joint_angular_velocity(_hand: number, _joint: number): Vector3;
  public is_hand_tracking_supported(): boolean;
  public is_hand_interaction_supported(): boolean;
  public is_eye_gaze_interaction_supported(): boolean;
  public get_vrs_min_radius(): number;
  public set_vrs_min_radius(_radius: number): void;
  public get_vrs_strength(): number;
  public set_vrs_strength(_strength: number): void;
  public get display_refresh_rate(): number {
    get_display_refresh_rate();
  }
  public set display_refresh_rate(value): void {
    set_display_refresh_rate(value);
  }
  public get render_target_size_multiplier(): number {
    get_render_target_size_multiplier();
  }
  public set render_target_size_multiplier(value): void {
    set_render_target_size_multiplier(value);
  }
  public get foveation_level(): number {
    get_foveation_level();
  }
  public set foveation_level(value): void {
    set_foveation_level(value);
  }
  public get foveation_dynamic(): boolean {
    get_foveation_dynamic();
  }
  public set foveation_dynamic(value): void {
    set_foveation_dynamic(value);
  }
  public get vrs_min_radius(): number {
    get_vrs_min_radius();
  }
  public set vrs_min_radius(value): void {
    set_vrs_min_radius(value);
  }
  public get vrs_strength(): number {
    get_vrs_strength();
  }
  public set vrs_strength(value): void {
    set_vrs_strength(value);
  }
  static Hand = {
    HAND_LEFT = 0,
    HAND_RIGHT = 1,
    HAND_MAX = 2,
  }
  static HandMotionRange = {
    HAND_MOTION_RANGE_UNOBSTRUCTED = 0,
    HAND_MOTION_RANGE_CONFORM_TO_CONTROLLER = 1,
    HAND_MOTION_RANGE_MAX = 2,
  }
  static HandTrackedSource = {
    HAND_TRACKED_SOURCE_UNKNOWN = 0,
    HAND_TRACKED_SOURCE_UNOBSTRUCTED = 1,
    HAND_TRACKED_SOURCE_CONTROLLER = 2,
    HAND_TRACKED_SOURCE_MAX = 3,
  }
  static HandJoints = {
    HAND_JOINT_PALM = 0,
    HAND_JOINT_WRIST = 1,
    HAND_JOINT_THUMB_METACARPAL = 2,
    HAND_JOINT_THUMB_PROXIMAL = 3,
    HAND_JOINT_THUMB_DISTAL = 4,
    HAND_JOINT_THUMB_TIP = 5,
    HAND_JOINT_INDEX_METACARPAL = 6,
    HAND_JOINT_INDEX_PROXIMAL = 7,
    HAND_JOINT_INDEX_INTERMEDIATE = 8,
    HAND_JOINT_INDEX_DISTAL = 9,
    HAND_JOINT_INDEX_TIP = 10,
    HAND_JOINT_MIDDLE_METACARPAL = 11,
    HAND_JOINT_MIDDLE_PROXIMAL = 12,
    HAND_JOINT_MIDDLE_INTERMEDIATE = 13,
    HAND_JOINT_MIDDLE_DISTAL = 14,
    HAND_JOINT_MIDDLE_TIP = 15,
    HAND_JOINT_RING_METACARPAL = 16,
    HAND_JOINT_RING_PROXIMAL = 17,
    HAND_JOINT_RING_INTERMEDIATE = 18,
    HAND_JOINT_RING_DISTAL = 19,
    HAND_JOINT_RING_TIP = 20,
    HAND_JOINT_LITTLE_METACARPAL = 21,
    HAND_JOINT_LITTLE_PROXIMAL = 22,
    HAND_JOINT_LITTLE_INTERMEDIATE = 23,
    HAND_JOINT_LITTLE_DISTAL = 24,
    HAND_JOINT_LITTLE_TIP = 25,
    HAND_JOINT_MAX = 26,
  }
  static HandJointFlags = {
    HAND_JOINT_NONE = 0,
    HAND_JOINT_ORIENTATION_VALID = 1,
    HAND_JOINT_ORIENTATION_TRACKED = 2,
    HAND_JOINT_POSITION_VALID = 4,
    HAND_JOINT_POSITION_TRACKED = 8,
    HAND_JOINT_LINEAR_VELOCITY_VALID = 16,
    HAND_JOINT_ANGULAR_VELOCITY_VALID = 32,
  }
  public const session_begun: string = "session_begun";
  public const session_stopping: string = "session_stopping";
  public const session_focussed: string = "session_focussed";
  public const session_visible: string = "session_visible";
  public const session_loss_pending: string = "session_loss_pending";
  public const instance_exiting: string = "instance_exiting";
  public const pose_recentered: string = "pose_recentered";
  public const refresh_rate_changed: string = "refresh_rate_changed";
}