
import { Resource } from "@godot/classes/resource";
import { SkeletonProfile } from "@godot/classes/skeleton_profile";

export declare class BoneMap extends Resource{
  public get_profile(): SkeletonProfile;
  public set_profile(_profile: SkeletonProfile): void;
  public get_skeleton_bone_name(_profile_bone_name: StringName): StringName;
  public set_skeleton_bone_name(_profile_bone_name: StringName, _skeleton_bone_name: StringName): void;
  public find_profile_bone_name(_skeleton_bone_name: StringName): StringName;
  public get profile(): SkeletonProfile {
    get_profile();
  }
  public set profile(value: SkeletonProfile): void {
    set_profile(value);
  }
}