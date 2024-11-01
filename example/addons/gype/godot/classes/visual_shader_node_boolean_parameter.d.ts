
import { VisualShaderNodeParameter } from "@godot/classes/visual_shader_node_parameter";

export declare class VisualShaderNodeBooleanParameter extends VisualShaderNodeParameter{
  public set_default_value_enabled(_enabled: boolean): void;
  public is_default_value_enabled(): boolean;
  public set_default_value(_value: boolean): void;
  public get_default_value(): boolean;
  public get default_value_enabled(): boolean {
    is_default_value_enabled();
  }
  public set default_value_enabled(value): void {
    set_default_value_enabled(value);
  }
  public get default_value(): boolean {
    get_default_value();
  }
  public set default_value(value): void {
    set_default_value(value);
  }
}