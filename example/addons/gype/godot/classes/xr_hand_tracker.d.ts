
import { XRPositionalTracker } from "@godot/classes/xr_positional_tracker";

export declare class XRHandTracker extends XRPositionalTracker{
  public set_has_tracking_data(_has_data: boolean): void;
  public get_has_tracking_data(): boolean;
  public set_hand_tracking_source(_source: number): void;
  public get_hand_tracking_source(): number;
  public set_hand_joint_flags(_joint: number, _flags: number): void;
  public get_hand_joint_flags(_joint: number): number;
  public set_hand_joint_transform(_joint: number, _transform: Transform3D): void;
  public get_hand_joint_transform(_joint: number): Transform3D;
  public set_hand_joint_radius(_joint: number, _radius: number): void;
  public get_hand_joint_radius(_joint: number): number;
  public set_hand_joint_linear_velocity(_joint: number, _linear_velocity: Vector3): void;
  public get_hand_joint_linear_velocity(_joint: number): Vector3;
  public set_hand_joint_angular_velocity(_joint: number, _angular_velocity: Vector3): void;
  public get_hand_joint_angular_velocity(_joint: number): Vector3;
  public get has_tracking_data(): boolean {
    get_has_tracking_data();
  }
  public set has_tracking_data(value: boolean): void {
    set_has_tracking_data(value);
  }
  public get hand_tracking_source(): number {
    get_hand_tracking_source();
  }
  public set hand_tracking_source(value: number): void {
    set_hand_tracking_source(value);
  }
  static HandTrackingSource = {
    HAND_TRACKING_SOURCE_UNKNOWN = 0,
    HAND_TRACKING_SOURCE_UNOBSTRUCTED = 1,
    HAND_TRACKING_SOURCE_CONTROLLER = 2,
    HAND_TRACKING_SOURCE_MAX = 3,
  }
  static HandJoint = {
    HAND_JOINT_PALM = 0,
    HAND_JOINT_WRIST = 1,
    HAND_JOINT_THUMB_METACARPAL = 2,
    HAND_JOINT_THUMB_PHALANX_PROXIMAL = 3,
    HAND_JOINT_THUMB_PHALANX_DISTAL = 4,
    HAND_JOINT_THUMB_TIP = 5,
    HAND_JOINT_INDEX_FINGER_METACARPAL = 6,
    HAND_JOINT_INDEX_FINGER_PHALANX_PROXIMAL = 7,
    HAND_JOINT_INDEX_FINGER_PHALANX_INTERMEDIATE = 8,
    HAND_JOINT_INDEX_FINGER_PHALANX_DISTAL = 9,
    HAND_JOINT_INDEX_FINGER_TIP = 10,
    HAND_JOINT_MIDDLE_FINGER_METACARPAL = 11,
    HAND_JOINT_MIDDLE_FINGER_PHALANX_PROXIMAL = 12,
    HAND_JOINT_MIDDLE_FINGER_PHALANX_INTERMEDIATE = 13,
    HAND_JOINT_MIDDLE_FINGER_PHALANX_DISTAL = 14,
    HAND_JOINT_MIDDLE_FINGER_TIP = 15,
    HAND_JOINT_RING_FINGER_METACARPAL = 16,
    HAND_JOINT_RING_FINGER_PHALANX_PROXIMAL = 17,
    HAND_JOINT_RING_FINGER_PHALANX_INTERMEDIATE = 18,
    HAND_JOINT_RING_FINGER_PHALANX_DISTAL = 19,
    HAND_JOINT_RING_FINGER_TIP = 20,
    HAND_JOINT_PINKY_FINGER_METACARPAL = 21,
    HAND_JOINT_PINKY_FINGER_PHALANX_PROXIMAL = 22,
    HAND_JOINT_PINKY_FINGER_PHALANX_INTERMEDIATE = 23,
    HAND_JOINT_PINKY_FINGER_PHALANX_DISTAL = 24,
    HAND_JOINT_PINKY_FINGER_TIP = 25,
    HAND_JOINT_MAX = 26,
  }
  static HandJointFlags = {
    HAND_JOINT_FLAG_ORIENTATION_VALID = 1,
    HAND_JOINT_FLAG_ORIENTATION_TRACKED = 2,
    HAND_JOINT_FLAG_POSITION_VALID = 4,
    HAND_JOINT_FLAG_POSITION_TRACKED = 8,
    HAND_JOINT_FLAG_LINEAR_VELOCITY_VALID = 16,
    HAND_JOINT_FLAG_ANGULAR_VELOCITY_VALID = 32,
  }
}