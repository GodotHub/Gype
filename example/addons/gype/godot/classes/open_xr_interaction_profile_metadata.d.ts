
import { GodotObject } from "@godot/classes/godot_object";


export declare class OpenXRInteractionProfileMetadata extends GodotObject{
  public register_profile_rename(_old_name: GDString | StringName | string, _new_name: GDString | StringName | string): void;
  public register_top_level_path(_display_name: GDString | StringName | string, _openxr_path: GDString | StringName | string, _openxr_extension_name: GDString | StringName | string): void;
  public register_interaction_profile(_display_name: GDString | StringName | string, _openxr_path: GDString | StringName | string, _openxr_extension_name: GDString | StringName | string): void;
  public register_io_path(_interaction_profile: GDString | StringName | string, _display_name: GDString | StringName | string, _toplevel_path: GDString | StringName | string, _openxr_path: GDString | StringName | string, _openxr_extension_name: GDString | StringName | string, _action_type: number): void;
}