
import { OpenXRInteractionProfile } from "@godot/classes/open_xr_interaction_profile";
import { OpenXRActionSet } from "@godot/classes/open_xr_action_set";
import { Resource } from "@godot/classes/resource";
export declare class OpenXRActionMap extends Resource{
  public set_action_sets(_action_sets: GDArray): void;
  public get_action_sets(): GDArray;
  public get_action_set_count(): number;
  public find_action_set(_name: GDString | StringName | string): OpenXRActionSet;
  public get_action_set(_idx: number): OpenXRActionSet;
  public add_action_set(_action_set: OpenXRActionSet): void;
  public remove_action_set(_action_set: OpenXRActionSet): void;
  public set_interaction_profiles(_interaction_profiles: GDArray): void;
  public get_interaction_profiles(): GDArray;
  public get_interaction_profile_count(): number;
  public find_interaction_profile(_name: GDString | StringName | string): OpenXRInteractionProfile;
  public get_interaction_profile(_idx: number): OpenXRInteractionProfile;
  public add_interaction_profile(_interaction_profile: OpenXRInteractionProfile): void;
  public remove_interaction_profile(_interaction_profile: OpenXRInteractionProfile): void;
  public create_default_action_sets(): void;
  public get action_sets(): OpenXRActionSet;
  public set action_sets(value): void;
  public get interaction_profiles(): OpenXRInteractionProfile;
  public set interaction_profiles(value): void;
}