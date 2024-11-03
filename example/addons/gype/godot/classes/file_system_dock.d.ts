
import { VBoxContainer } from "@godot/classes/v_box_container";
import { EditorResourceTooltipPlugin } from "@godot/classes/editor_resource_tooltip_plugin";
export declare class FileSystemDock extends VBoxContainer{
  public navigate_to_path(_path: GDString | StringName | string): void;
  public add_resource_tooltip_plugin(_plugin: EditorResourceTooltipPlugin): void;
  public remove_resource_tooltip_plugin(_plugin: EditorResourceTooltipPlugin): void;
  public get inherit(): Signal;
  public get instantiate(): Signal;
  public get resource_removed(): Signal;
  public get file_removed(): Signal;
  public get folder_removed(): Signal;
  public get files_moved(): Signal;
  public get folder_moved(): Signal;
  public get folder_color_changed(): Signal;
  public get display_mode_changed(): Signal;
}