
import { Object } from "@godot/classes/object";
import { Node } from "@godot/classes/node";
import { Node } from "@godot/classes/node";

export declare class EditorSelection extends Object{
  public clear(): void;
  public add_node(_node: Node): void;
  public remove_node(_node: Node): void;
  public get_selected_nodes(): GDArray;
  public get_transformable_selected_nodes(): GDArray;
}