
import { GodotObject } from "@godot/classes/godot_object";

export declare class OpenXRInteractionProfileMetadata extends GodotObject{
  public register_profile_rename(_old_name: String | StringName | string, _new_name: String | StringName | string): void;
  public register_top_level_path(_display_name: String | StringName | string, _openxr_path: String | StringName | string, _openxr_extension_name: String | StringName | string): void;
  public register_interaction_profile(_display_name: String | StringName | string, _openxr_path: String | StringName | string, _openxr_extension_name: String | StringName | string): void;
  public register_io_path(_interaction_profile: String | StringName | string, _display_name: String | StringName | string, _toplevel_path: String | StringName | string, _openxr_path: String | StringName | string, _openxr_extension_name: String | StringName | string, _action_type: number): void;
}