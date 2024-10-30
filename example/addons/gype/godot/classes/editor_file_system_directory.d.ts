
import { GodotObject } from "@godot/classes/godot_object";

export declare class EditorFileSystemDirectory extends GodotObject{
  public get_subdir_count(): number;
  public get_subdir(_idx: number): EditorFileSystemDirectory;
  public get_file_count(): number;
  public get_file(_idx: number): String;
  public get_file_path(_idx: number): String;
  public get_file_type(_idx: number): StringName;
  public get_file_script_class_name(_idx: number): String;
  public get_file_script_class_extends(_idx: number): String;
  public get_file_import_is_valid(_idx: number): boolean;
  public get_name(): String;
  public get_path(): String;
  public get_parent(): EditorFileSystemDirectory;
  public find_file_index(_name: String | StringName | string): number;
  public find_dir_index(_name: String | StringName | string): number;
}