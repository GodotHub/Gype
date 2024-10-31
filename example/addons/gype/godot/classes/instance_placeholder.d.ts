
import { Node } from "@godot/classes/node";
import { PackedScene } from "@godot/classes/packed_scene";

export declare class InstancePlaceholder extends Node{
  public get_stored_values(_with_order: boolean): Dictionary;
  public create_instance(_replace: boolean, _custom_scene: PackedScene): Node;
  public get_instance_path(): String;
}