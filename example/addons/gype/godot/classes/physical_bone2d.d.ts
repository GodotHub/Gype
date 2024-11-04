
import { RigidBody2D } from "@godot/classes/rigid_body2d";
import { Joint2D } from "@godot/classes/joint2d";
export declare class PhysicalBone2D extends RigidBody2D{
  public get_joint(): Joint2D;
  public get_auto_configure_joint(): boolean;
  public set_auto_configure_joint(_auto_configure_joint: boolean): void;
  public set_simulate_physics(_simulate_physics: boolean): void;
  public get_simulate_physics(): boolean;
  public is_simulating_physics(): boolean;
  public set_bone2d_nodepath(_nodepath: GDString | NodePath | string): void;
  public get_bone2d_nodepath(): NodePath;
  public set_bone2d_index(_bone_index: number): void;
  public get_bone2d_index(): number;
  public set_follow_bone_when_simulating(_follow_bone: boolean): void;
  public get_follow_bone_when_simulating(): boolean;
  public get bone2d_nodepath(): NodePath;
  public set bone2d_nodepath(value): void;
  public get bone2d_index(): number;
  public set bone2d_index(value): void;
  public get auto_configure_joint(): boolean;
  public set auto_configure_joint(value): void;
  public get simulate_physics(): boolean;
  public set simulate_physics(value): void;
  public get follow_bone_when_simulating(): boolean;
  public set follow_bone_when_simulating(value): void;
}