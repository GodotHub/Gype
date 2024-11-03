
import { OpenXRAction } from "@godot/classes/open_xr_action";
import { Resource } from "@godot/classes/resource";
export declare class OpenXRIPBinding extends Resource{
  public set_action(_action: OpenXRAction): void;
  public get_action(): OpenXRAction;
  public get_path_count(): number;
  public set_paths(_paths: PackedStringArray): void;
  public get_paths(): PackedStringArray;
  public has_path(_path: GDString | StringName | string): boolean;
  public add_path(_path: GDString | StringName | string): void;
  public remove_path(_path: GDString | StringName | string): void;
  public get action(): OpenXRAction;
  public set action(value): void;
  public get paths(): PackedStringArray;
  public set paths(value): void;
}