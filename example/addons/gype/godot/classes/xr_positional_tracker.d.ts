
import { XRTracker } from "@godot/classes/xr_tracker";
import { XRPose } from "@godot/classes/xr_pose";

export declare class XRPositionalTracker extends XRTracker{
  public get_tracker_profile(): String;
  public set_tracker_profile(_profile: String | StringName | string): void;
  public get_tracker_hand(): number;
  public set_tracker_hand(_hand: number): void;
  public has_pose(_name: String | StringName | string): boolean;
  public get_pose(_name: String | StringName | string): XRPose;
  public invalidate_pose(_name: String | StringName | string): void;
  public set_pose(_name: String | StringName | string, _transform: Transform3D, _linear_velocity: Vector3, _angular_velocity: Vector3, _tracking_confidence: number): void;
  public get_input(_name: String | StringName | string): any;
  public set_input(_name: String | StringName | string, _value: any): void;
  public get profile(): String {
    get_tracker_profile();
  }
  public set profile(value): void {
    set_tracker_profile(value);
  }
  public get hand(): number {
    get_tracker_hand();
  }
  public set hand(value): void {
    set_tracker_hand(value);
  }
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