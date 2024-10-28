
import { Object } from "@godot/classes/object";

export declare class OpenXRInteractionProfileMetadata extends Object{
  public register_profile_rename(_old_name: String, _new_name: String): void;
  public register_top_level_path(_display_name: String, _openxr_path: String, _openxr_extension_name: String): void;
  public register_interaction_profile(_display_name: String, _openxr_path: String, _openxr_extension_name: String): void;
  public register_io_path(_interaction_profile: String, _display_name: String, _toplevel_path: String, _openxr_path: String, _openxr_extension_name: String, _action_type: number): void;
}