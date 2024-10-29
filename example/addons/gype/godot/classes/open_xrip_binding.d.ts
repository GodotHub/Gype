
import { OpenXRAction } from "@godot/classes/open_xr_action";
import { Resource } from "@godot/classes/resource";

export declare class OpenXRIPBinding extends Resource{
  public set_action(_action: OpenXRAction): void;
  public get_action(): OpenXRAction;
  public get_path_count(): number;
  public set_paths(_paths: PackedStringArray): void;
  public get_paths(): PackedStringArray;
  public has_path(_path: String): boolean;
  public add_path(_path: String): void;
  public remove_path(_path: String): void;
  public get action(): OpenXRAction {
    get_action();
  }
  public set action(value): void {
    set_action(value);
  }
  public get paths(): PackedStringArray {
    get_paths();
  }
  public set paths(value): void {
    set_paths(value);
  }
}