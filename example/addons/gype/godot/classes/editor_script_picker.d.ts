
import { EditorResourcePicker } from "@godot/classes/editor_resource_picker";
import { Node } from "@godot/classes/node";

export declare class EditorScriptPicker extends EditorResourcePicker{
  public set_script_owner(_owner_node: Node): void;
  public get_script_owner(): Node;
  public get script_owner(): Node {
    get_script_owner();
  }
  public set script_owner(value): void {
    set_script_owner(value);
  }
}