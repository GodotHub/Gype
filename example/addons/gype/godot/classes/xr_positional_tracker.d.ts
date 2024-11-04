
import { XRTracker } from "@godot/classes/xr_tracker";
import { XRPose } from "@godot/classes/xr_pose";
export declare class XRPositionalTracker extends XRTracker{
  public get_tracker_profile(): String;
  public set_tracker_profile(_profile: GDString | StringName | string): void;
  public get_tracker_hand(): number;
  public set_tracker_hand(_hand: number): void;
  public has_pose(_name: GDString | StringName | string): boolean;
  public get_pose(_name: GDString | StringName | string): XRPose;
  public invalidate_pose(_name: GDString | StringName | string): void;
  public set_pose(_name: GDString | StringName | string, _transform: Transform3D, _linear_velocity: Vector3, _angular_velocity: Vector3, _tracking_confidence: number): void;
  public get_input(_name: GDString | StringName | string): any;
  public set_input(_name: GDString | StringName | string, _value: any): void;
  public get profile(): String;
  public set profile(value): void;
  public get hand(): number;
  public set hand(value): void;
  static TrackerHand = {
    TRACKER_HAND_UNKNOWN = 0,
    TRACKER_HAND_LEFT = 1,
    TRACKER_HAND_RIGHT = 2,
    TRACKER_HAND_MAX = 3,
  }
  public get pose_changed(): Signal;
  public get pose_lost_tracking(): Signal;
  public get button_pressed(): Signal;
  public get button_released(): Signal;
  public get input_float_changed(): Signal;
  public get input_vector2_changed(): Signal;
  public get profile_changed(): Signal;
}