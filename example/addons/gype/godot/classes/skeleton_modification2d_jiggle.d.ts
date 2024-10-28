
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";

export declare class SkeletonModification2DJiggle extends SkeletonModification2D{
  public set_target_node(_target_nodepath: NodePath): void;
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
  public set_jiggle_joint_bone2d_node(_joint_idx: number, _bone2d_node: NodePath): void;
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
  public get target_nodepath(): NodePath {
    get_target_node();
  }
  public set target_nodepath(value: NodePath): void {
    set_target_node(value);
  }
  public get jiggle_data_chain_length(): number {
    get_jiggle_data_chain_length();
  }
  public set jiggle_data_chain_length(value: number): void {
    set_jiggle_data_chain_length(value);
  }
  public get stiffness(): number {
    get_stiffness();
  }
  public set stiffness(value: number): void {
    set_stiffness(value);
  }
  public get mass(): number {
    get_mass();
  }
  public set mass(value: number): void {
    set_mass(value);
  }
  public get damping(): number {
    get_damping();
  }
  public set damping(value: number): void {
    set_damping(value);
  }
  public get use_gravity(): boolean {
    get_use_gravity();
  }
  public set use_gravity(value: boolean): void {
    set_use_gravity(value);
  }
  public get gravity(): Vector2 {
    get_gravity();
  }
  public set gravity(value: Vector2): void {
    set_gravity(value);
  }
}