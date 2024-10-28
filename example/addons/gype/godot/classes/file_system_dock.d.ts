
import { VBoxContainer } from "@godot/classes/v_box_container";
import { EditorResourceTooltipPlugin } from "@godot/classes/editor_resource_tooltip_plugin";

export declare class FileSystemDock extends VBoxContainer{
  public navigate_to_path(_path: String): void;
  public add_resource_tooltip_plugin(_plugin: EditorResourceTooltipPlugin): void;
  public remove_resource_tooltip_plugin(_plugin: EditorResourceTooltipPlugin): void;
}