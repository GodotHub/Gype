
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";


export declare class SkeletonModification2DTwoBoneIK extends SkeletonModification2D{
  public set_target_node(_target_nodepath: GDString | NodePath | string): void;
  public get_target_node(): NodePath;
  public set_target_minimum_distance(_minimum_distance: number): void;
  public get_target_minimum_distance(): number;
  public set_target_maximum_distance(_maximum_distance: number): void;
  public get_target_maximum_distance(): number;
  public set_flip_bend_direction(_flip_direction: boolean): void;
  public get_flip_bend_direction(): boolean;
  public set_joint_one_bone2d_node(_bone2d_node: GDString | NodePath | string): void;
  public get_joint_one_bone2d_node(): NodePath;
  public set_joint_one_bone_idx(_bone_idx: number): void;
  public get_joint_one_bone_idx(): number;
  public set_joint_two_bone2d_node(_bone2d_node: GDString | NodePath | string): void;
  public get_joint_two_bone2d_node(): NodePath;
  public set_joint_two_bone_idx(_bone_idx: number): void;
  public get_joint_two_bone_idx(): number;
  public get target_nodepath(): NodePath;
  public set target_nodepath(value): void;
  public get target_minimum_distance(): number;
  public set target_minimum_distance(value): void;
  public get target_maximum_distance(): number;
  public set target_maximum_distance(value): void;
  public get flip_bend_direction(): boolean;
  public set flip_bend_direction(value): void;
}