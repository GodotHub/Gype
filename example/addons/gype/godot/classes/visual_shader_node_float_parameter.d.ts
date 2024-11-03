
import { VisualShaderNodeParameter } from "@godot/classes/visual_shader_node_parameter";
export declare class VisualShaderNodeFloatParameter extends VisualShaderNodeParameter{
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
  public get hint(): number;
  public set hint(value): void;
  public get min(): number;
  public set min(value): void;
  public get max(): number;
  public set max(value): void;
  public get step(): number;
  public set step(value): void;
  public get default_value_enabled(): boolean;
  public set default_value_enabled(value): void;
  public get default_value(): number;
  public set default_value(value): void;
  static Hint = {
    HINT_NONE = 0,
    HINT_RANGE = 1,
    HINT_RANGE_STEP = 2,
    HINT_MAX = 3,
  }
}