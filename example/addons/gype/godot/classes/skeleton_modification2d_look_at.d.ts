
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";

export declare class SkeletonModification2DLookAt extends SkeletonModification2D{
  public set_bone2d_node(_bone2d_nodepath: NodePath): void;
  public get_bone2d_node(): NodePath;
  public set_bone_index(_bone_idx: number): void;
  public get_bone_index(): number;
  public set_target_node(_target_nodepath: NodePath): void;
  public get_target_node(): NodePath;
  public set_additional_rotation(_rotation: number): void;
  public get_additional_rotation(): number;
  public set_enable_constraint(_enable_constraint: boolean): void;
  public get_enable_constraint(): boolean;
  public set_constraint_angle_min(_angle_min: number): void;
  public get_constraint_angle_min(): number;
  public set_constraint_angle_max(_angle_max: number): void;
  public get_constraint_angle_max(): number;
  public set_constraint_angle_invert(_invert: boolean): void;
  public get_constraint_angle_invert(): boolean;
  public get bone_index(): number {
    get_bone_index();
  }
  public set bone_index(value): void {
    set_bone_index(value);
  }
  public get bone2d_node(): NodePath {
    get_bone2d_node();
  }
  public set bone2d_node(value): void {
    set_bone2d_node(value);
  }
  public get target_nodepath(): NodePath {
    get_target_node();
  }
  public set target_nodepath(value): void {
    set_target_node(value);
  }
}