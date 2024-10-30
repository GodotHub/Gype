
import { SkeletonProfile } from "@godot/classes/skeleton_profile";
import { Resource } from "@godot/classes/resource";

export declare class BoneMap extends Resource{
  public get_profile(): SkeletonProfile;
  public set_profile(_profile: SkeletonProfile): void;
  public get_skeleton_bone_name(_profile_bone_name: String | StringName | string): StringName;
  public set_skeleton_bone_name(_profile_bone_name: String | StringName | string, _skeleton_bone_name: String | StringName | string): void;
  public find_profile_bone_name(_skeleton_bone_name: String | StringName | string): StringName;
  public get profile(): SkeletonProfile {
    get_profile();
  }
  public set profile(value): void {
    set_profile(value);
  }
  public const bone_map_updated: string = "bone_map_updated";
  public const profile_updated: string = "profile_updated";
}