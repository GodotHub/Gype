
import { VisualShaderNode } from "@godot/classes/visual_shader_node";
export declare class VisualShaderNodeParameterRef extends VisualShaderNode{
  public set_parameter_name(_name: GDString | StringName | string): void;
  public get_parameter_name(): String;
  public get parameter_name(): StringName;
  public set parameter_name(value): void;
  public get param_type(): number;
  public set param_type(value): void;
}