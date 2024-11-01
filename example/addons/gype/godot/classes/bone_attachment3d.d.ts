
import { Node3D } from "@godot/classes/node3d";

export declare class BoneAttachment3D extends Node3D{
  public set_bone_name(_bone_name: String | StringName | string): void;
  public get_bone_name(): String;
  public set_bone_idx(_bone_idx: number): void;
  public get_bone_idx(): number;
  public on_skeleton_update(): void;
  public set_override_pose(_override_pose: boolean): void;
  public get_override_pose(): boolean;
  public set_use_external_skeleton(_use_external_skeleton: boolean): void;
  public get_use_external_skeleton(): boolean;
  public set_external_skeleton(_external_skeleton: NodePath): void;
  public get_external_skeleton(): NodePath;
  public get bone_name(): StringName {
    get_bone_name();
  }
  public set bone_name(value): void {
    set_bone_name(value);
  }
  public get bone_idx(): number {
    get_bone_idx();
  }
  public set bone_idx(value): void {
    set_bone_idx(value);
  }
  public get override_pose(): boolean {
    get_override_pose();
  }
  public set override_pose(value): void {
    set_override_pose(value);
  }
}