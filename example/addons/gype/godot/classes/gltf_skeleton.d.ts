
import { BoneAttachment3D } from "@godot/classes/bone_attachment3d";
import { Resource } from "@godot/classes/resource";
import { Skeleton3D } from "@godot/classes/skeleton3d";


export declare class GLTFSkeleton extends Resource{
  public get_joints(): PackedInt32Array;
  public set_joints(_joints: PackedInt32Array): void;
  public get_roots(): PackedInt32Array;
  public set_roots(_roots: PackedInt32Array): void;
  public get_godot_skeleton(): Skeleton3D;
  public get_unique_names(): GDArray;
  public set_unique_names(_unique_names: GDArray): void;
  public get_godot_bone_node(): Dictionary;
  public set_godot_bone_node(_godot_bone_node: Dictionary): void;
  public get_bone_attachment_count(): number;
  public get_bone_attachment(_idx: number): BoneAttachment3D;
  public get joints(): PackedInt32Array;
  public set joints(value): void;
  public get roots(): PackedInt32Array;
  public set roots(value): void;
  public get unique_names(): GDArray;
  public set unique_names(value): void;
  public get godot_bone_node(): Dictionary;
  public set godot_bone_node(value): void;
}