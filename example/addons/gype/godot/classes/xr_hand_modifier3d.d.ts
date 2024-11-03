
import { SkeletonModifier3D } from "@godot/classes/skeleton_modifier3d";
export declare class XRHandModifier3D extends SkeletonModifier3D{
  public set_hand_tracker(_tracker_name: GDString | StringName | string): void;
  public get_hand_tracker(): StringName;
  public set_bone_update(_bone_update: number): void;
  public get_bone_update(): number;
  public get hand_tracker(): String;
  public set hand_tracker(value): void;
  public get bone_update(): number;
  public set bone_update(value): void;
  static BoneUpdate = {
    BONE_UPDATE_FULL = 0,
    BONE_UPDATE_ROTATION_ONLY = 1,
    BONE_UPDATE_MAX = 2,
  }
}