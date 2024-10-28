
import { Skeleton3D } from "@godot/classes/skeleton3d";
import { BoneAttachment3D } from "@godot/classes/bone_attachment3d";
import { Resource } from "@godot/classes/resource";

export declare class GLTFSkeleton extends Resource{
  public get_joints(): PackedInt32Array;
  public set_joints(_joints: PackedInt32Array): void;
  public get_roots(): PackedInt32Array;
  public set_roots(_roots: PackedInt32Array): void;
  public get_godot_skeleton(): Skeleton3D;
  public get_unique_names(): Array;
  public set_unique_names(_unique_names: typedarray::String): void;
  public get_godot_bone_node(): Dictionary;
  public set_godot_bone_node(_godot_bone_node: Dictionary): void;
  public get_bone_attachment_count(): number;
  public get_bone_attachment(_idx: number): BoneAttachment3D;
  public get joints(): PackedInt32Array {
    get_joints();
  }
  public set joints(value: PackedInt32Array): void {
    set_joints(value);
  }
  public get roots(): PackedInt32Array {
    get_roots();
  }
  public set roots(value: PackedInt32Array): void {
    set_roots(value);
  }
  public get unique_names(): Array {
    get_unique_names();
  }
  public set unique_names(value: Array): void {
    set_unique_names(value);
  }
  public get godot_bone_node(): Dictionary {
    get_godot_bone_node();
  }
  public set godot_bone_node(value: Dictionary): void {
    set_godot_bone_node(value);
  }
}