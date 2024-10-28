
import { Curve } from "@godot/classes/curve";
import { Resource } from "@godot/classes/resource";

export declare class AnimationNodeStateMachineTransition extends Resource{
  public set_switch_mode(_mode: number): void;
  public get_switch_mode(): number;
  public set_advance_mode(_mode: number): void;
  public get_advance_mode(): number;
  public set_advance_condition(_name: StringName): void;
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
  public set_advance_expression(_text: String): void;
  public get_advance_expression(): String;
  public get xfade_time(): number {
    get_xfade_time();
  }
  public set xfade_time(value: number): void {
    set_xfade_time(value);
  }
  public get xfade_curve(): Curve {
    get_xfade_curve();
  }
  public set xfade_curve(value: Curve): void {
    set_xfade_curve(value);
  }
  public get break_loop_at_end(): boolean {
    is_loop_broken_at_end();
  }
  public set break_loop_at_end(value: boolean): void {
    set_break_loop_at_end(value);
  }
  public get reset(): boolean {
    is_reset();
  }
  public set reset(value: boolean): void {
    set_reset(value);
  }
  public get priority(): number {
    get_priority();
  }
  public set priority(value: number): void {
    set_priority(value);
  }
  public get switch_mode(): number {
    get_switch_mode();
  }
  public set switch_mode(value: number): void {
    set_switch_mode(value);
  }
  public get advance_mode(): number {
    get_advance_mode();
  }
  public set advance_mode(value: number): void {
    set_advance_mode(value);
  }
  public get advance_condition(): StringName {
    get_advance_condition();
  }
  public set advance_condition(value: StringName): void {
    set_advance_condition(value);
  }
  public get advance_expression(): String {
    get_advance_expression();
  }
  public set advance_expression(value: String): void {
    set_advance_expression(value);
  }
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
}