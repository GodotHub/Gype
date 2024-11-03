
import { Node3D } from "@godot/classes/node3d";
export declare class OpenXRHand extends Node3D{
  public set_hand(_hand: number): void;
  public get_hand(): number;
  public set_hand_skeleton(_hand_skeleton: GDString | NodePath | string): void;
  public get_hand_skeleton(): NodePath;
  public set_motion_range(_motion_range: number): void;
  public get_motion_range(): number;
  public set_skeleton_rig(_skeleton_rig: number): void;
  public get_skeleton_rig(): number;
  public set_bone_update(_bone_update: number): void;
  public get_bone_update(): number;
  public get hand(): number;
  public set hand(value): void;
  public get motion_range(): number;
  public set motion_range(value): void;
  public get hand_skeleton(): NodePath;
  public set hand_skeleton(value): void;
  public get skeleton_rig(): number;
  public set skeleton_rig(value): void;
  public get bone_update(): number;
  public set bone_update(value): void;
  static Hands = {
    HAND_LEFT = 0,
    HAND_RIGHT = 1,
    HAND_MAX = 2,
  }
  static MotionRange = {
    MOTION_RANGE_UNOBSTRUCTED = 0,
    MOTION_RANGE_CONFORM_TO_CONTROLLER = 1,
    MOTION_RANGE_MAX = 2,
  }
  static SkeletonRig = {
    SKELETON_RIG_OPENXR = 0,
    SKELETON_RIG_HUMANOID = 1,
    SKELETON_RIG_MAX = 2,
  }
  static BoneUpdate = {
    BONE_UPDATE_FULL = 0,
    BONE_UPDATE_ROTATION_ONLY = 1,
    BONE_UPDATE_MAX = 2,
  }
}