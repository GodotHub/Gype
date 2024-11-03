
import { Node } from "@godot/classes/node";
import { Node } from "@godot/classes/node";
import { GodotObject } from "@godot/classes/godot_object";
export declare class EditorSelection extends GodotObject{
  public clear(): void;
  public add_node(_node: Node): void;
  public remove_node(_node: Node): void;
  public get_selected_nodes(): GDArray;
  public get_transformable_selected_nodes(): GDArray;
  public get selection_changed(): Signal;
}