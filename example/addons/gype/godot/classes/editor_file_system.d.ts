
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
  public const filesystem_changed: string = "filesystem_changed";
  public const script_classes_updated: string = "script_classes_updated";
  public const sources_changed: string = "sources_changed";
  public const resources_reimporting: string = "resources_reimporting";
  public const resources_reimported: string = "resources_reimported";
  public const resources_reload: string = "resources_reload";
}