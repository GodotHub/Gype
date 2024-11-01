
import { ScrollContainer } from "@godot/classes/scroll_container";
import { GodotObject } from "@godot/classes/godot_object";

export declare class EditorInspector extends ScrollContainer{
  public get_selected_path(): String;
  public get_edited_object(): GodotObject;
  public get property_selected(): Signal;
  public get property_keyed(): Signal;
  public get property_deleted(): Signal;
  public get resource_selected(): Signal;
  public get object_id_selected(): Signal;
  public get property_edited(): Signal;
  public get property_toggled(): Signal;
  public get edited_object_changed(): Signal;
  public get restart_requested(): Signal;
}