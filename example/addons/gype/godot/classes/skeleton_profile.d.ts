
import { Texture2D } from "@godot/classes/texture2d";
import { Resource } from "@godot/classes/resource";

export declare class SkeletonProfile extends Resource{
  public set_root_bone(_bone_name: StringName): void;
  public get_root_bone(): StringName;
  public set_scale_base_bone(_bone_name: StringName): void;
  public get_scale_base_bone(): StringName;
  public set_group_size(_size: number): void;
  public get_group_size(): number;
  public get_group_name(_group_idx: number): StringName;
  public set_group_name(_group_idx: number, _group_name: StringName): void;
  public get_texture(_group_idx: number): Texture2D;
  public set_texture(_group_idx: number, _texture: Texture2D): void;
  public set_bone_size(_size: number): void;
  public get_bone_size(): number;
  public find_bone(_bone_name: StringName): number;
  public get_bone_name(_bone_idx: number): StringName;
  public set_bone_name(_bone_idx: number, _bone_name: StringName): void;
  public get_bone_parent(_bone_idx: number): StringName;
  public set_bone_parent(_bone_idx: number, _bone_parent: StringName): void;
  public get_tail_direction(_bone_idx: number): number;
  public set_tail_direction(_bone_idx: number, _tail_direction: number): void;
  public get_bone_tail(_bone_idx: number): StringName;
  public set_bone_tail(_bone_idx: number, _bone_tail: StringName): void;
  public get_reference_pose(_bone_idx: number): Transform3D;
  public set_reference_pose(_bone_idx: number, _bone_name: Transform3D): void;
  public get_handle_offset(_bone_idx: number): Vector2;
  public set_handle_offset(_bone_idx: number, _handle_offset: Vector2): void;
  public get_group(_bone_idx: number): StringName;
  public set_group(_bone_idx: number, _group: StringName): void;
  public is_required(_bone_idx: number): boolean;
  public set_required(_bone_idx: number, _required: boolean): void;
  public get root_bone(): StringName {
    get_root_bone();
  }
  public set root_bone(value: StringName): void {
    set_root_bone(value);
  }
  public get scale_base_bone(): StringName {
    get_scale_base_bone();
  }
  public set scale_base_bone(value: StringName): void {
    set_scale_base_bone(value);
  }
  public get group_size(): number {
    get_group_size();
  }
  public set group_size(value: number): void {
    set_group_size(value);
  }
  public get bone_size(): number {
    get_bone_size();
  }
  public set bone_size(value: number): void {
    set_bone_size(value);
  }
  static TailDirection = {
    TAIL_DIRECTION_AVERAGE_CHILDREN = 0,
    TAIL_DIRECTION_SPECIFIC_CHILD = 1,
    TAIL_DIRECTION_END = 2,
  }
}