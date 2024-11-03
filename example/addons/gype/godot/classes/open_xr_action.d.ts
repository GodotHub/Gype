
import { Resource } from "@godot/classes/resource";
export declare class OpenXRAction extends Resource{
  public set_localized_name(_localized_name: GDString | StringName | string): void;
  public get_localized_name(): String;
  public set_action_type(_action_type: number): void;
  public get_action_type(): number;
  public set_toplevel_paths(_toplevel_paths: PackedStringArray): void;
  public get_toplevel_paths(): PackedStringArray;
  public get localized_name(): String;
  public set localized_name(value): void;
  public get action_type(): number;
  public set action_type(value): void;
  public get toplevel_paths(): PackedStringArray;
  public set toplevel_paths(value): void;
  static ActionType = {
    OPENXR_ACTION_BOOL = 0,
    OPENXR_ACTION_FLOAT = 1,
    OPENXR_ACTION_VECTOR2 = 2,
    OPENXR_ACTION_POSE = 3,
  }
}