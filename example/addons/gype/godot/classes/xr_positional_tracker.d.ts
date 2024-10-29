
import { XRTracker } from "@godot/classes/xr_tracker";
import { XRPose } from "@godot/classes/xr_pose";

export declare class XRPositionalTracker extends XRTracker{
  public get_tracker_profile(): String;
  public set_tracker_profile(_profile: String): void;
  public get_tracker_hand(): number;
  public set_tracker_hand(_hand: number): void;
  public has_pose(_name: StringName): boolean;
  public get_pose(_name: StringName): XRPose;
  public invalidate_pose(_name: StringName): void;
  public set_pose(_name: StringName, _transform: Transform3D, _linear_velocity: Vector3, _angular_velocity: Vector3, _tracking_confidence: number): void;
  public get_input(_name: StringName): any;
  public set_input(_name: StringName, _value: any): void;
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
}