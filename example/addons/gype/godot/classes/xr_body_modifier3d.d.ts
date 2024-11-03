
import { SkeletonModifier3D } from "@godot/classes/skeleton_modifier3d";
export declare class XRBodyModifier3D extends SkeletonModifier3D{
  public set_body_tracker(_tracker_name: GDString | StringName | string): void;
  public get_body_tracker(): StringName;
  public set_body_update(_body_update: number): void;
  public get_body_update(): number;
  public set_bone_update(_bone_update: number): void;
  public get_bone_update(): number;
  public get body_tracker(): String;
  public set body_tracker(value): void;
  public get body_update(): number;
  public set body_update(value): void;
  public get bone_update(): number;
  public set bone_update(value): void;
  static BodyUpdate = {
    BODY_UPDATE_UPPER_BODY = 1,
    BODY_UPDATE_LOWER_BODY = 2,
    BODY_UPDATE_HANDS = 4,
  }
  static BoneUpdate = {
    BONE_UPDATE_FULL = 0,
    BONE_UPDATE_ROTATION_ONLY = 1,
    BONE_UPDATE_MAX = 2,
  }
}