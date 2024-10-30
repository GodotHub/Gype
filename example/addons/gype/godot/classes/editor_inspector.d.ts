
import { ScrollContainer } from "@godot/classes/scroll_container";
import { GodotObject } from "@godot/classes/godot_object";

export declare class EditorInspector extends ScrollContainer{
  public get_selected_path(): String;
  public get_edited_object(): Object;
  public const property_selected: string = "property_selected";
  public const property_keyed: string = "property_keyed";
  public const property_deleted: string = "property_deleted";
  public const resource_selected: string = "resource_selected";
  public const object_id_selected: string = "object_id_selected";
  public const property_edited: string = "property_edited";
  public const property_toggled: string = "property_toggled";
  public const edited_object_changed: string = "edited_object_changed";
  public const restart_requested: string = "restart_requested";
}