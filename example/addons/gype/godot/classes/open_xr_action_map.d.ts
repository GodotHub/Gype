
import { OpenXRInteractionProfile } from "@godot/classes/open_xr_interaction_profile";
import { OpenXRActionSet } from "@godot/classes/open_xr_action_set";
import { Resource } from "@godot/classes/resource";

export declare class OpenXRActionMap extends Resource{
  public set_action_sets(_action_sets: GDArray): void;
  public get_action_sets(): GDArray;
  public get_action_set_count(): number;
  public find_action_set(_name: String): OpenXRActionSet;
  public get_action_set(_idx: number): OpenXRActionSet;
  public add_action_set(_action_set: OpenXRActionSet): void;
  public remove_action_set(_action_set: OpenXRActionSet): void;
  public set_interaction_profiles(_interaction_profiles: GDArray): void;
  public get_interaction_profiles(): GDArray;
  public get_interaction_profile_count(): number;
  public find_interaction_profile(_name: String): OpenXRInteractionProfile;
  public get_interaction_profile(_idx: number): OpenXRInteractionProfile;
  public add_interaction_profile(_interaction_profile: OpenXRInteractionProfile): void;
  public remove_interaction_profile(_interaction_profile: OpenXRInteractionProfile): void;
  public create_default_action_sets(): void;
  public get action_sets(): OpenXRActionSet {
    get_action_sets();
  }
  public set action_sets(value: OpenXRActionSet): void {
    set_action_sets(value);
  }
  public get interaction_profiles(): OpenXRInteractionProfile {
    get_interaction_profiles();
  }
  public set interaction_profiles(value: OpenXRInteractionProfile): void {
    set_interaction_profiles(value);
  }
}