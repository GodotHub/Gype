
import { Node } from "@godot/classes/node";
import { Node } from "@godot/classes/node";
import { Object } from "@godot/classes/object";

export declare class EditorSelection extends Object{
  public clear(): void;
  public add_node(_node: Node): void;
  public remove_node(_node: Node): void;
  public get_selected_nodes(): Array;
  public get_transformable_selected_nodes(): Array;
}