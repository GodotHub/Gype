
import { VBoxContainer } from "@godot/classes/v_box_container";
import { EditorResourceTooltipPlugin } from "@godot/classes/editor_resource_tooltip_plugin";

export declare class FileSystemDock extends VBoxContainer{
  public navigate_to_path(_path: String | StringName | string): void;
  public add_resource_tooltip_plugin(_plugin: EditorResourceTooltipPlugin): void;
  public remove_resource_tooltip_plugin(_plugin: EditorResourceTooltipPlugin): void;
  public const inherit: string = "inherit";
  public const instantiate: string = "instantiate";
  public const resource_removed: string = "resource_removed";
  public const file_removed: string = "file_removed";
  public const folder_removed: string = "folder_removed";
  public const files_moved: string = "files_moved";
  public const folder_moved: string = "folder_moved";
  public const folder_color_changed: string = "folder_color_changed";
  public const display_mode_changed: string = "display_mode_changed";
}