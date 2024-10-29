
import { AnimationNode } from "@godot/classes/animation_node";
import { AnimationRootNode } from "@godot/classes/animation_root_node";

export declare class AnimationNodeBlendTree extends AnimationRootNode{
  public add_node(_name: StringName, _node: AnimationNode, _position: Vector2): void;
  public get_node(_name: StringName): AnimationNode;
  public remove_node(_name: StringName): void;
  public rename_node(_name: StringName, _new_name: StringName): void;
  public has_node(_name: StringName): boolean;
  public connect_node(_input_node: StringName, _input_index: number, _output_node: StringName): void;
  public disconnect_node(_input_node: StringName, _input_index: number): void;
  public set_node_position(_name: StringName, _position: Vector2): void;
  public get_node_position(_name: StringName): Vector2;
  public set_graph_offset(_offset: Vector2): void;
  public get_graph_offset(): Vector2;
  public get graph_offset(): Vector2 {
    get_graph_offset();
  }
  public set graph_offset(value): void {
    set_graph_offset(value);
  }
}