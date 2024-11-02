
import { SkeletonProfile } from "@godot/classes/skeleton_profile";
import { Resource } from "@godot/classes/resource";


export declare class BoneMap extends Resource{
  public get_profile(): SkeletonProfile;
  public set_profile(_profile: SkeletonProfile): void;
  public get_skeleton_bone_name(_profile_bone_name: GDString | StringName | string): StringName;
  public set_skeleton_bone_name(_profile_bone_name: GDString | StringName | string, _skeleton_bone_name: GDString | StringName | string): void;
  public find_profile_bone_name(_skeleton_bone_name: GDString | StringName | string): StringName;
  public get profile(): SkeletonProfile;
  public set profile(value): void;
  public get bone_map_updated(): Signal;
  public get profile_updated(): Signal;
}