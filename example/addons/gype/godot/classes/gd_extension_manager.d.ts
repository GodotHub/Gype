
import { Object } from "@godot/classes/object";
import { GDExtension } from "@godot/classes/gd_extension";

export declare class GDExtensionManager extends Object{
  public load_extension(_path: String): number;
  public reload_extension(_path: String): number;
  public unload_extension(_path: String): number;
  public is_extension_loaded(_path: String): boolean;
  public get_loaded_extensions(): PackedStringArray;
  public get_extension(_path: String): GDExtension;
  static LoadStatus = {
    LOAD_STATUS_OK = 0,
    LOAD_STATUS_FAILED = 1,
    LOAD_STATUS_ALREADY_LOADED = 2,
    LOAD_STATUS_NOT_LOADED = 3,
    LOAD_STATUS_NEEDS_RESTART = 4,
  }
}