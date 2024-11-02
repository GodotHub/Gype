
import { VisualShaderNodeParameter } from "@godot/classes/visual_shader_node_parameter";


export declare class VisualShaderNodeTransformParameter extends VisualShaderNodeParameter{
  public set_default_value_enabled(_enabled: boolean): void;
  public is_default_value_enabled(): boolean;
  public set_default_value(_value: Transform3D): void;
  public get_default_value(): Transform3D;
  public get default_value_enabled(): boolean;
  public set default_value_enabled(value): void;
  public get default_value(): Transform3D;
  public set default_value(value): void;
}