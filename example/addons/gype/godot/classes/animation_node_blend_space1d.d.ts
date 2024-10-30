
import { AnimationRootNode } from "@godot/classes/animation_root_node";

export declare class AnimationNodeBlendSpace1D extends AnimationRootNode{
  public add_blend_point(_node: AnimationRootNode, _pos: number, _at_index: number): void;
  public set_blend_point_position(_point: number, _pos: number): void;
  public get_blend_point_position(_point: number): number;
  public set_blend_point_node(_point: number, _node: AnimationRootNode): void;
  public get_blend_point_node(_point: number): AnimationRootNode;
  public remove_blend_point(_point: number): void;
  public get_blend_point_count(): number;
  public set_min_space(_min_space: number): void;
  public get_min_space(): number;
  public set_max_space(_max_space: number): void;
  public get_max_space(): number;
  public set_snap(_snap: number): void;
  public get_snap(): number;
  public set_value_label(_text: String | StringName | string): void;
  public get_value_label(): String;
  public set_blend_mode(_mode: number): void;
  public get_blend_mode(): number;
  public set_use_sync(_enable: boolean): void;
  public is_using_sync(): boolean;
  public get min_space(): number {
    get_min_space();
  }
  public set min_space(value): void {
    set_min_space(value);
  }
  public get max_space(): number {
    get_max_space();
  }
  public set max_space(value): void {
    set_max_space(value);
  }
  public get snap(): number {
    get_snap();
  }
  public set snap(value): void {
    set_snap(value);
  }
  public get value_label(): String {
    get_value_label();
  }
  public set value_label(value): void {
    set_value_label(value);
  }
  public get blend_mode(): number {
    get_blend_mode();
  }
  public set blend_mode(value): void {
    set_blend_mode(value);
  }
  public get sync(): boolean {
    is_using_sync();
  }
  public set sync(value): void {
    set_use_sync(value);
  }
  static BlendMode = {
    BLEND_MODE_INTERPOLATED = 0,
    BLEND_MODE_DISCRETE = 1,
    BLEND_MODE_DISCRETE_CARRY = 2,
  }
}