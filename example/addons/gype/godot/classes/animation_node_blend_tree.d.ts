
import { AnimationNode } from "@godot/classes/animation_node";
import { AnimationRootNode } from "@godot/classes/animation_root_node";
export declare class AnimationNodeBlendTree extends AnimationRootNode{
  public add_node(_name: GDString | StringName | string, _node: AnimationNode, _position: Vector2 = Vector2(0, 0)): void;
  public get_node(_name: GDString | StringName | string): AnimationNode;
  public remove_node(_name: GDString | StringName | string): void;
  public rename_node(_name: GDString | StringName | string, _new_name: GDString | StringName | string): void;
  public has_node(_name: GDString | StringName | string): boolean;
  public connect_node(_input_node: GDString | StringName | string, _input_index: number, _output_node: GDString | StringName | string): void;
  public disconnect_node(_input_node: GDString | StringName | string, _input_index: number): void;
  public set_node_position(_name: GDString | StringName | string, _position: Vector2): void;
  public get_node_position(_name: GDString | StringName | string): Vector2;
  public set_graph_offset(_offset: Vector2): void;
  public get_graph_offset(): Vector2;
  public get graph_offset(): Vector2;
  public set graph_offset(value): void;
  public get node_changed(): Signal;
}