
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";

export declare class SkeletonModification2DTwoBoneIK extends SkeletonModification2D{
  public set_target_node(_target_nodepath: NodePath): void;
  public get_target_node(): NodePath;
  public set_target_minimum_distance(_minimum_distance: number): void;
  public get_target_minimum_distance(): number;
  public set_target_maximum_distance(_maximum_distance: number): void;
  public get_target_maximum_distance(): number;
  public set_flip_bend_direction(_flip_direction: boolean): void;
  public get_flip_bend_direction(): boolean;
  public set_joint_one_bone2d_node(_bone2d_node: NodePath): void;
  public get_joint_one_bone2d_node(): NodePath;
  public set_joint_one_bone_idx(_bone_idx: number): void;
  public get_joint_one_bone_idx(): number;
  public set_joint_two_bone2d_node(_bone2d_node: NodePath): void;
  public get_joint_two_bone2d_node(): NodePath;
  public set_joint_two_bone_idx(_bone_idx: number): void;
  public get_joint_two_bone_idx(): number;
  public get target_nodepath(): NodePath {
    get_target_node();
  }
  public set target_nodepath(value): void {
    set_target_node(value);
  }
  public get target_minimum_distance(): number {
    get_target_minimum_distance();
  }
  public set target_minimum_distance(value): void {
    set_target_minimum_distance(value);
  }
  public get target_maximum_distance(): number {
    get_target_maximum_distance();
  }
  public set target_maximum_distance(value): void {
    set_target_maximum_distance(value);
  }
  public get flip_bend_direction(): boolean {
    get_flip_bend_direction();
  }
  public set flip_bend_direction(value): void {
    set_flip_bend_direction(value);
  }
}