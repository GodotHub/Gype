
import { AnimationNodeSync } from "@godot/classes/animation_node_sync";
import { Curve } from "@godot/classes/curve";


export declare class AnimationNodeTransition extends AnimationNodeSync{
  public set_input_count(_input_count: number): void;
  public set_input_as_auto_advance(_input: number, _enable: boolean): void;
  public is_input_set_as_auto_advance(_input: number): boolean;
  public set_input_break_loop_at_end(_input: number, _enable: boolean): void;
  public is_input_loop_broken_at_end(_input: number): boolean;
  public set_input_reset(_input: number, _enable: boolean): void;
  public is_input_reset(_input: number): boolean;
  public set_xfade_time(_time: number): void;
  public get_xfade_time(): number;
  public set_xfade_curve(_curve: Curve): void;
  public get_xfade_curve(): Curve;
  public set_allow_transition_to_self(_enable: boolean): void;
  public is_allow_transition_to_self(): boolean;
  public get xfade_time(): number;
  public set xfade_time(value): void;
  public get xfade_curve(): Curve;
  public set xfade_curve(value): void;
  public get allow_transition_to_self(): boolean;
  public set allow_transition_to_self(value): void;
  public get input_count(): number;
  public set input_count(value): void;
}