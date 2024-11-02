
import { Resource } from "@godot/classes/resource";
import { Curve } from "@godot/classes/curve";


export declare class AnimationNodeStateMachineTransition extends Resource{
  public set_switch_mode(_mode: number): void;
  public get_switch_mode(): number;
  public set_advance_mode(_mode: number): void;
  public get_advance_mode(): number;
  public set_advance_condition(_name: GDString | StringName | string): void;
  public get_advance_condition(): StringName;
  public set_xfade_time(_secs: number): void;
  public get_xfade_time(): number;
  public set_xfade_curve(_curve: Curve): void;
  public get_xfade_curve(): Curve;
  public set_break_loop_at_end(_enable: boolean): void;
  public is_loop_broken_at_end(): boolean;
  public set_reset(_reset: boolean): void;
  public is_reset(): boolean;
  public set_priority(_priority: number): void;
  public get_priority(): number;
  public set_advance_expression(_text: GDString | StringName | string): void;
  public get_advance_expression(): String;
  public get xfade_time(): number;
  public set xfade_time(value): void;
  public get xfade_curve(): Curve;
  public set xfade_curve(value): void;
  public get break_loop_at_end(): boolean;
  public set break_loop_at_end(value): void;
  public get reset(): boolean;
  public set reset(value): void;
  public get priority(): number;
  public set priority(value): void;
  public get switch_mode(): number;
  public set switch_mode(value): void;
  public get advance_mode(): number;
  public set advance_mode(value): void;
  public get advance_condition(): StringName;
  public set advance_condition(value): void;
  public get advance_expression(): String;
  public set advance_expression(value): void;
  static SwitchMode = {
    SWITCH_MODE_IMMEDIATE = 0,
    SWITCH_MODE_SYNC = 1,
    SWITCH_MODE_AT_END = 2,
  }
  static AdvanceMode = {
    ADVANCE_MODE_DISABLED = 0,
    ADVANCE_MODE_ENABLED = 1,
    ADVANCE_MODE_AUTO = 2,
  }
  public get advance_condition_changed(): Signal;
}