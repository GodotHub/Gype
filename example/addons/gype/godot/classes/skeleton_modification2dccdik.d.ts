
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";

export declare class SkeletonModification2DCCDIK extends SkeletonModification2D{
  public set_target_node(_target_nodepath: NodePath): void;
  public get_target_node(): NodePath;
  public set_tip_node(_tip_nodepath: NodePath): void;
  public get_tip_node(): NodePath;
  public set_ccdik_data_chain_length(_length: number): void;
  public get_ccdik_data_chain_length(): number;
  public set_ccdik_joint_bone2d_node(_joint_idx: number, _bone2d_nodepath: NodePath): void;
  public get_ccdik_joint_bone2d_node(_joint_idx: number): NodePath;
  public set_ccdik_joint_bone_index(_joint_idx: number, _bone_idx: number): void;
  public get_ccdik_joint_bone_index(_joint_idx: number): number;
  public set_ccdik_joint_rotate_from_joint(_joint_idx: number, _rotate_from_joint: boolean): void;
  public get_ccdik_joint_rotate_from_joint(_joint_idx: number): boolean;
  public set_ccdik_joint_enable_constraint(_joint_idx: number, _enable_constraint: boolean): void;
  public get_ccdik_joint_enable_constraint(_joint_idx: number): boolean;
  public set_ccdik_joint_constraint_angle_min(_joint_idx: number, _angle_min: number): void;
  public get_ccdik_joint_constraint_angle_min(_joint_idx: number): number;
  public set_ccdik_joint_constraint_angle_max(_joint_idx: number, _angle_max: number): void;
  public get_ccdik_joint_constraint_angle_max(_joint_idx: number): number;
  public set_ccdik_joint_constraint_angle_invert(_joint_idx: number, _invert: boolean): void;
  public get_ccdik_joint_constraint_angle_invert(_joint_idx: number): boolean;
  public get target_nodepath(): NodePath {
    get_target_node();
  }
  public set target_nodepath(value): void {
    set_target_node(value);
  }
  public get tip_nodepath(): NodePath {
    get_tip_node();
  }
  public set tip_nodepath(value): void {
    set_tip_node(value);
  }
  public get ccdik_data_chain_length(): number {
    get_ccdik_data_chain_length();
  }
  public set ccdik_data_chain_length(value): void {
    set_ccdik_data_chain_length(value);
  }
}