
import { Node } from "@godot/classes/node";
import { EditorResourcePicker } from "@godot/classes/editor_resource_picker";
export declare class EditorScriptPicker extends EditorResourcePicker{
  public set_script_owner(_owner_node: Node): void;
  public get_script_owner(): Node;
  public get script_owner(): Node;
  public set script_owner(value): void;
}