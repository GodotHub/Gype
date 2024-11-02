
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";


export declare class SkeletonModification2DJiggle extends SkeletonModification2D{
  public set_target_node(_target_nodepath: GDString | NodePath | string): void;
  public get_target_node(): NodePath;
  public set_jiggle_data_chain_length(_length: number): void;
  public get_jiggle_data_chain_length(): number;
  public set_stiffness(_stiffness: number): void;
  public get_stiffness(): number;
  public set_mass(_mass: number): void;
  public get_mass(): number;
  public set_damping(_damping: number): void;
  public get_damping(): number;
  public set_use_gravity(_use_gravity: boolean): void;
  public get_use_gravity(): boolean;
  public set_gravity(_gravity: Vector2): void;
  public get_gravity(): Vector2;
  public set_use_colliders(_use_colliders: boolean): void;
  public get_use_colliders(): boolean;
  public set_collision_mask(_collision_mask: number): void;
  public get_collision_mask(): number;
  public set_jiggle_joint_bone2d_node(_joint_idx: number, _bone2d_node: GDString | NodePath | string): void;
  public get_jiggle_joint_bone2d_node(_joint_idx: number): NodePath;
  public set_jiggle_joint_bone_index(_joint_idx: number, _bone_idx: number): void;
  public get_jiggle_joint_bone_index(_joint_idx: number): number;
  public set_jiggle_joint_override(_joint_idx: number, _override: boolean): void;
  public get_jiggle_joint_override(_joint_idx: number): boolean;
  public set_jiggle_joint_stiffness(_joint_idx: number, _stiffness: number): void;
  public get_jiggle_joint_stiffness(_joint_idx: number): number;
  public set_jiggle_joint_mass(_joint_idx: number, _mass: number): void;
  public get_jiggle_joint_mass(_joint_idx: number): number;
  public set_jiggle_joint_damping(_joint_idx: number, _damping: number): void;
  public get_jiggle_joint_damping(_joint_idx: number): number;
  public set_jiggle_joint_use_gravity(_joint_idx: number, _use_gravity: boolean): void;
  public get_jiggle_joint_use_gravity(_joint_idx: number): boolean;
  public set_jiggle_joint_gravity(_joint_idx: number, _gravity: Vector2): void;
  public get_jiggle_joint_gravity(_joint_idx: number): Vector2;
  public get target_nodepath(): NodePath;
  public set target_nodepath(value): void;
  public get jiggle_data_chain_length(): number;
  public set jiggle_data_chain_length(value): void;
  public get stiffness(): number;
  public set stiffness(value): void;
  public get mass(): number;
  public set mass(value): void;
  public get damping(): number;
  public set damping(value): void;
  public get use_gravity(): boolean;
  public set use_gravity(value): void;
  public get gravity(): Vector2;
  public set gravity(value): void;
}