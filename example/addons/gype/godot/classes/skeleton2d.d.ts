
import { Node2D } from "@godot/classes/node2d";
import { SkeletonModificationStack2D } from "@godot/classes/skeleton_modification_stack2d";
import { Bone2D } from "@godot/classes/bone2d";


export declare class Skeleton2D extends Node2D{
  public get_bone_count(): number;
  public get_bone(_idx: number): Bone2D;
  public get_skeleton(): RID;
  public set_modification_stack(_modification_stack: SkeletonModificationStack2D): void;
  public get_modification_stack(): SkeletonModificationStack2D;
  public execute_modifications(_delta: number, _execution_mode: number): void;
  public set_bone_local_pose_override(_bone_idx: number, _override_pose: Transform2D, _strength: number, _persistent: boolean): void;
  public get_bone_local_pose_override(_bone_idx: number): Transform2D;
  public get bone_setup_changed(): Signal;
}