
import { AnimationRootNode } from "@godot/classes/animation_root_node";
import { AnimationMixer } from "@godot/classes/animation_mixer";

export declare class AnimationTree extends AnimationMixer{
  public set_tree_root(_animation_node: AnimationRootNode): void;
  public get_tree_root(): AnimationRootNode;
  public set_advance_expression_base_node(_path: NodePath): void;
  public get_advance_expression_base_node(): NodePath;
  public set_animation_player(_path: NodePath): void;
  public get_animation_player(): NodePath;
  public set_process_callback(_mode: number): void;
  public get_process_callback(): number;
  public get tree_root(): AnimationRootNode {
    get_tree_root();
  }
  public set tree_root(value: AnimationRootNode): void {
    set_tree_root(value);
  }
  public get advance_expression_base_node(): NodePath {
    get_advance_expression_base_node();
  }
  public set advance_expression_base_node(value: NodePath): void {
    set_advance_expression_base_node(value);
  }
  public get anim_player(): NodePath {
    get_animation_player();
  }
  public set anim_player(value: NodePath): void {
    set_animation_player(value);
  }
  static AnimationProcessCallback = {
    ANIMATION_PROCESS_PHYSICS = 0,
    ANIMATION_PROCESS_IDLE = 1,
    ANIMATION_PROCESS_MANUAL = 2,
  }
}