
import { Object } from "@godot/classes/object";
import { ScrollContainer } from "@godot/classes/scroll_container";

export declare class EditorInspector extends ScrollContainer{
  public get_selected_path(): String;
  public get_edited_object(): Object;
}