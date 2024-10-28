
import { Node } from "@godot/classes/node";
import { EditorFileSystemDirectory } from "@godot/classes/editor_file_system_directory";

export declare class EditorFileSystem extends Node{
  public get_filesystem(): EditorFileSystemDirectory;
  public is_scanning(): boolean;
  public get_scanning_progress(): number;
  public scan(): void;
  public scan_sources(): void;
  public update_file(_path: String): void;
  public get_filesystem_path(_path: String): EditorFileSystemDirectory;
  public get_file_type(_path: String): String;
  public reimport_files(_files: PackedStringArray): void;
}