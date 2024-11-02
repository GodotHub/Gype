
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";


export declare class SkeletonModification2DFABRIK extends SkeletonModification2D{
  public set_target_node(_target_nodepath: GDString | NodePath | string): void;
  public get_target_node(): NodePath;
  public set_fabrik_data_chain_length(_length: number): void;
  public get_fabrik_data_chain_length(): number;
  public set_fabrik_joint_bone2d_node(_joint_idx: number, _bone2d_nodepath: GDString | NodePath | string): void;
  public get_fabrik_joint_bone2d_node(_joint_idx: number): NodePath;
  public set_fabrik_joint_bone_index(_joint_idx: number, _bone_idx: number): void;
  public get_fabrik_joint_bone_index(_joint_idx: number): number;
  public set_fabrik_joint_magnet_position(_joint_idx: number, _magnet_position: Vector2): void;
  public get_fabrik_joint_magnet_position(_joint_idx: number): Vector2;
  public set_fabrik_joint_use_target_rotation(_joint_idx: number, _use_target_rotation: boolean): void;
  public get_fabrik_joint_use_target_rotation(_joint_idx: number): boolean;
  public get target_nodepath(): NodePath;
  public set target_nodepath(value): void;
  public get fabrik_data_chain_length(): number;
  public set fabrik_data_chain_length(value): void;
}