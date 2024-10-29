
import { AnimationNodeStateMachineTransition } from "@godot/classes/animation_node_state_machine_transition";
import { AnimationNode } from "@godot/classes/animation_node";
import { AnimationRootNode } from "@godot/classes/animation_root_node";

export declare class AnimationNodeStateMachine extends AnimationRootNode{
  public add_node(_name: StringName, _node: AnimationNode, _position: Vector2): void;
  public replace_node(_name: StringName, _node: AnimationNode): void;
  public get_node(_name: StringName): AnimationNode;
  public remove_node(_name: StringName): void;
  public rename_node(_name: StringName, _new_name: StringName): void;
  public has_node(_name: StringName): boolean;
  public get_node_name(_node: AnimationNode): StringName;
  public set_node_position(_name: StringName, _position: Vector2): void;
  public get_node_position(_name: StringName): Vector2;
  public has_transition(_from: StringName, _to: StringName): boolean;
  public add_transition(_from: StringName, _to: StringName, _transition: AnimationNodeStateMachineTransition): void;
  public get_transition(_idx: number): AnimationNodeStateMachineTransition;
  public get_transition_from(_idx: number): StringName;
  public get_transition_to(_idx: number): StringName;
  public get_transition_count(): number;
  public remove_transition_by_index(_idx: number): void;
  public remove_transition(_from: StringName, _to: StringName): void;
  public set_graph_offset(_offset: Vector2): void;
  public get_graph_offset(): Vector2;
  public set_state_machine_type(_state_machine_type: number): void;
  public get_state_machine_type(): number;
  public set_allow_transition_to_self(_enable: boolean): void;
  public is_allow_transition_to_self(): boolean;
  public set_reset_ends(_enable: boolean): void;
  public are_ends_reset(): boolean;
  public get state_machine_type(): number {
    get_state_machine_type();
  }
  public set state_machine_type(value): void {
    set_state_machine_type(value);
  }
  public get allow_transition_to_self(): boolean {
    is_allow_transition_to_self();
  }
  public set allow_transition_to_self(value): void {
    set_allow_transition_to_self(value);
  }
  public get reset_ends(): boolean {
    are_ends_reset();
  }
  public set reset_ends(value): void {
    set_reset_ends(value);
  }
  static StateMachineType = {
    STATE_MACHINE_TYPE_ROOT = 0,
    STATE_MACHINE_TYPE_NESTED = 1,
    STATE_MACHINE_TYPE_GROUPED = 2,
  }
}