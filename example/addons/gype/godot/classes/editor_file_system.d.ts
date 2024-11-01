
import { EditorFileSystemDirectory } from "@godot/classes/editor_file_system_directory";
import { Node } from "@godot/classes/node";

export declare class EditorFileSystem extends Node{
  public get_filesystem(): EditorFileSystemDirectory;
  public is_scanning(): boolean;
  public get_scanning_progress(): number;
  public scan(): void;
  public scan_sources(): void;
  public update_file(_path: String | StringName | string): void;
  public get_filesystem_path(_path: String | StringName | string): EditorFileSystemDirectory;
  public get_file_type(_path: String | StringName | string): String;
  public reimport_files(_files: PackedStringArray): void;
  public get filesystem_changed(): Signal;
  public get script_classes_updated(): Signal;
  public get sources_changed(): Signal;
  public get resources_reimporting(): Signal;
  public get resources_reimported(): Signal;
  public get resources_reload(): Signal;
}