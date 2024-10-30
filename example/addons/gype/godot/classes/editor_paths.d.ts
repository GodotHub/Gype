
import { GodotObject } from "@godot/classes/godot_object";

export declare class EditorPaths extends GodotObject{
  public get_data_dir(): String;
  public get_config_dir(): String;
  public get_cache_dir(): String;
  public is_self_contained(): boolean;
  public get_self_contained_file(): String;
  public get_project_settings_dir(): String;
}