
import { Resource } from "@godot/classes/resource";
import { OpenXRIPBinding } from "@godot/classes/open_xrip_binding";

export declare class OpenXRInteractionProfile extends Resource{
  public set_interaction_profile_path(_interaction_profile_path: String | StringName | string): void;
  public get_interaction_profile_path(): String;
  public get_binding_count(): number;
  public get_binding(_index: number): OpenXRIPBinding;
  public set_bindings(_bindings: GDArray): void;
  public get_bindings(): GDArray;
  public get interaction_profile_path(): String {
    get_interaction_profile_path();
  }
  public set interaction_profile_path(value): void {
    set_interaction_profile_path(value);
  }
  public get bindings(): OpenXRIPBinding {
    get_bindings();
  }
  public set bindings(value): void {
    set_bindings(value);
  }
}