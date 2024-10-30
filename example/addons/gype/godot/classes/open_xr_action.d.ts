
import { Resource } from "@godot/classes/resource";

export declare class OpenXRAction extends Resource{
  public set_localized_name(_localized_name: String | StringName | string): void;
  public get_localized_name(): String;
  public set_action_type(_action_type: number): void;
  public get_action_type(): number;
  public set_toplevel_paths(_toplevel_paths: PackedStringArray): void;
  public get_toplevel_paths(): PackedStringArray;
  public get localized_name(): String {
    get_localized_name();
  }
  public set localized_name(value): void {
    set_localized_name(value);
  }
  public get action_type(): number {
    get_action_type();
  }
  public set action_type(value): void {
    set_action_type(value);
  }
  public get toplevel_paths(): PackedStringArray {
    get_toplevel_paths();
  }
  public set toplevel_paths(value): void {
    set_toplevel_paths(value);
  }
  static ActionType = {
    OPENXR_ACTION_BOOL = 0,
    OPENXR_ACTION_FLOAT = 1,
    OPENXR_ACTION_VECTOR2 = 2,
    OPENXR_ACTION_POSE = 3,
  }
}