
import { VisualShaderNodeParameter } from "@godot/classes/visual_shader_node_parameter";
export declare class VisualShaderNodeVec4Parameter extends VisualShaderNodeParameter{
  public set_default_value_enabled(_enabled: boolean): void;
  public is_default_value_enabled(): boolean;
  public set_default_value(_value: Vector4): void;
  public get_default_value(): Vector4;
  public get default_value_enabled(): boolean;
  public set default_value_enabled(value): void;
  public get default_value(): Vector4;
  public set default_value(value): void;
}