
import { AnimationRootNode } from "@godot/classes/animation_root_node";
import { AnimationMixer } from "@godot/classes/animation_mixer";


export declare class AnimationTree extends AnimationMixer{
  public set_tree_root(_animation_node: AnimationRootNode): void;
  public get_tree_root(): AnimationRootNode;
  public set_advance_expression_base_node(_path: GDString | NodePath | string): void;
  public get_advance_expression_base_node(): NodePath;
  public set_animation_player(_path: GDString | NodePath | string): void;
  public get_animation_player(): NodePath;
  public set_process_callback(_mode: number): void;
  public get_process_callback(): number;
  public get tree_root(): AnimationRootNode;
  public set tree_root(value): void;
  public get advance_expression_base_node(): NodePath;
  public set advance_expression_base_node(value): void;
  public get anim_player(): NodePath;
  public set anim_player(value): void;
  static AnimationProcessCallback = {
    ANIMATION_PROCESS_PHYSICS = 0,
    ANIMATION_PROCESS_IDLE = 1,
    ANIMATION_PROCESS_MANUAL = 2,
  }
  public get animation_player_changed(): Signal;
}