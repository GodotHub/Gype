
import { VisualShaderNodeParameter } from "@godot/classes/visual_shader_node_parameter";

export declare class VisualShaderNodeIntParameter extends VisualShaderNodeParameter{
  public set_hint(_hint: number): void;
  public get_hint(): number;
  public set_min(_value: number): void;
  public get_min(): number;
  public set_max(_value: number): void;
  public get_max(): number;
  public set_step(_value: number): void;
  public get_step(): number;
  public set_default_value_enabled(_enabled: boolean): void;
  public is_default_value_enabled(): boolean;
  public set_default_value(_value: number): void;
  public get_default_value(): number;
  public get hint(): number {
    get_hint();
  }
  public set hint(value: number): void {
    set_hint(value);
  }
  public get min(): number {
    get_min();
  }
  public set min(value: number): void {
    set_min(value);
  }
  public get max(): number {
    get_max();
  }
  public set max(value: number): void {
    set_max(value);
  }
  public get step(): number {
    get_step();
  }
  public set step(value: number): void {
    set_step(value);
  }
  public get default_value_enabled(): boolean {
    is_default_value_enabled();
  }
  public set default_value_enabled(value: boolean): void {
    set_default_value_enabled(value);
  }
  public get default_value(): number {
    get_default_value();
  }
  public set default_value(value: number): void {
    set_default_value(value);
  }
  static Hint = {
    HINT_NONE = 0,
    HINT_RANGE = 1,
    HINT_RANGE_STEP = 2,
    HINT_MAX = 3,
  }
}