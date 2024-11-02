
import { SkeletonModification2D } from "@godot/classes/skeleton_modification2d";


export declare class SkeletonModification2DPhysicalBones extends SkeletonModification2D{
  public set_physical_bone_chain_length(_length: number): void;
  public get_physical_bone_chain_length(): number;
  public set_physical_bone_node(_joint_idx: number, _physicalbone2d_node: GDString | NodePath | string): void;
  public get_physical_bone_node(_joint_idx: number): NodePath;
  public fetch_physical_bones(): void;
  public start_simulation(_bones: GDArray): void;
  public stop_simulation(_bones: GDArray): void;
  public get physical_bone_chain_length(): number;
  public set physical_bone_chain_length(value): void;
}